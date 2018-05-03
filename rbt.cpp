#include<iostream>
//#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
enum Color {RED, BLACK};

struct Node
{
    int data;
    bool color;
    Node *left, *right, *parent;

    // Constructor
    Node(int data)
    {
       this->data = data;
       left = right = parent = NULL;
    }
};

// Class to represent Red-Black Tree
class RBTree
{
private:
    Node *root;
protected:
    void rotateLeft(Node *&, Node *&);
    void rotateRight(Node *&, Node *&);
    void fixViolation(Node *&, Node *&);
public:
    // Constructor
    RBTree() { root = NULL; }
    void insert(const int &n);
    void inorder();
    void levelOrder();
};

// A recursive function to do level order traversal
void inorderHelper(Node *root)
{
    if (root == NULL)
        return;

    inorderHelper(root->left);
    cout << root->data << "  ";
    inorderHelper(root->right);
}

/* A utility function to insert a new node with given key
   in BST */
Node* BSTInsert(Node* root, Node *pt)
{
    /* If the tree is empty, return a new node */
    if (root == NULL)
       return pt;

    /* Otherwise, recur down the tree */
    if (pt->data < root->data)
    {
        root->left  = BSTInsert(root->left, pt);
        root->left->parent = root;
    }
    else if (pt->data > root->data)
    {
        root->right = BSTInsert(root->right, pt);
        root->right->parent = root;
    }

    /* return the (unchanged) node pointer */
    return root;
}

// Utility function to do level order traversal
void levelOrderHelper(Node *root)
{
    if (root == NULL)
        return;

    std::queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << "  ";
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);

        if (temp->right != NULL)
            q.push(temp->right);
    }
}

void RBTree::rotateLeft(Node *&root, Node *&pt)
{
    Node *pt_right = pt->right;

    pt->right = pt_right->left;

    if (pt->right != NULL)
        pt->right->parent = pt;

    pt_right->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_right;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_right;

    else
        pt->parent->right = pt_right;

    pt_right->left = pt;
    pt->parent = pt_right;
}

void RBTree::rotateRight(Node *&root, Node *&pt)
{
    Node *pt_left = pt->left;

    pt->left = pt_left->right;

    if (pt->left != NULL)
        pt->left->parent = pt;

    pt_left->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_left;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_left;

    else
        pt->parent->right = pt_left;

    pt_left->right = pt;
    pt->parent = pt_left;
}

// This function fixes violations caused by BST insertion
void RBTree::fixViolation(Node *&root, Node *&pt)
{
    Node *parent_pt = NULL;
    Node *grand_parent_pt = NULL;

    while ((pt != root) && (pt->color != BLACK) &&
           (pt->parent->color == RED))
    {

        parent_pt = pt->parent;
        grand_parent_pt = pt->parent->parent;

        /*  Case : A
            Parent of pt is left child of Grand-parent of pt */
        if (parent_pt == grand_parent_pt->left)
        {

            Node *uncle_pt = grand_parent_pt->right;

            /* Case : 1
               The uncle of pt is also red
               Only Recoloring required */
            if (uncle_pt != NULL && uncle_pt->color == RED)
            {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            }

            else
            {
                /* Case : 2
                   pt is right child of its parent
                   Left-rotation required */
                if (pt == parent_pt->right)
                {
                    rotateLeft(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                /* Case : 3
                   pt is left child of its parent
                   Right-rotation required */
                rotateRight(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        }

        /* Case : B
           Parent of pt is right child of Grand-parent of pt */
        else
        {
            Node *uncle_pt = grand_parent_pt->left;

            /*  Case : 1
                The uncle of pt is also red
                Only Recoloring required */
            if ((uncle_pt != NULL) && (uncle_pt->color == RED))
            {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            }
            else
            {
                /* Case : 2
                   pt is left child of its parent
                   Right-rotation required */
                if (pt == parent_pt->left)
                {
                    rotateRight(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                /* Case : 3
                   pt is right child of its parent
                   Left-rotation required */
                rotateLeft(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        }
    }

    root->color = BLACK;
}

// Function to insert a new node with given data
void RBTree::insert(const int &data)
{
    Node *pt = new Node(data);

    // Do a normal BST insert
    root = BSTInsert(root, pt);

    // fix Red Black Tree violations
    fixViolation(root, pt);
}

// Function to do inorder and level order traversals
void RBTree::inorder()     {  inorderHelper(root);}
void RBTree::levelOrder()  {  levelOrderHelper(root); }

int main()
{
    system("Color F1");
    cout<<endl;
    cout << " What is a Red Black Tree?\n";
    cout << " `````````````````````````\n";
    cout << "   Red-Black Tree is a self-balancing Binary Search Tree (BST) where every node follows following rules:\n";
    cout << "\t-> Every node is either RED or BLACK.\n\t-> Root is always BLACK.\n\t-> New insertions are always RED.\n\t-> Every path from root to leaf has the same number of BLACK nodes.\n\t-> No path can have 2 consecutive RED nodes.\n\t-> Nulls are BLACK.\n";
    cout<<endl;
    cout << " Why Red Black Trees?\n";
    cout << " ````````````````````\n";
    cout<<" Most of the BST operations (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST. The cost of these operations may become O(n)\n";
    cout<<" for a skewed Binary tree.If we make sure that height of the tree remains O(Log n) after every insertion and deletion,then we can guarantee an upper bound of O(Log n)\n";
    cout<<" for all these operations. The height of a Red Black tree is always O(Log n) where n is the number of nodes in the tree.\n";
    cout<<endl;
    cout << " Comparison with AVL Tree:\n";
    cout << " `````````````````````````\n";
    cout<<" The AVL trees are more balanced compared to Red Black Trees, but they may cause more rotations during insertion and deletion.So if your application involves many \n";
    cout<<" frequent insertions and deletions, then Red Black trees should be preferred.And if the insertions and deletions are less frequent and search is more frequent operation,\n";
    cout<<" then AVL tree should be preferred over Red Black Tree.\n";
    cout<<endl;
    cout<<" Rebalance:"<<endl;
    cout<<" ``````````"<<endl;

cout<<" Black Aunt Rotate\t\t\t\t\t\tRed Aunt Colorflip\n";
cout<<"   After Rotation\t\t\t\t\t\t After Colorflip\n";
cout<<"       B         \t\t\t\t\t\t        R          \n";
cout<<"      / \\       \t\t\t\t\t\t       / \\          \n";
cout<<"     /   \\      \t\t\t\t\t\t      /   \\         \n";
cout<<"    R     R      \t\t\t\t\t\t     B     B        \n";
cout<<"------------------------------------------------------------------------------------------------\n";
Sleep(2000);
/*cout<<"Curious about insertion in Red Black trees ?\n";
Sleep(2000);
cout<<"C'mon then press ENTER!\n";
        getchar();
        system("start rbtgraph.exe");
Sleep(2000);*/
cout<<"\nGive it a try !\n";
RBTree tree;
char check = 'Y';
  int val;
  while(check == 'Y' || check == 'y')
  {
      cout << "\nEnter a value... ";
      cin >> val;
      tree.insert(val);
      cout << "\nEnter another value? (Y/N)... ";
      cin >> check;
  }

    cout << "\nInoder Traversal of Created Tree\n";
    tree.inorder();

    cout << "\n\nLevel Order Traversal of Created Tree\n";
    tree.levelOrder();
    //cout<<endl;
   // getchar();*
   getchar();
   cout<<"\nCurious about insertion in Red Black trees ?\n";
Sleep(2000);
cout<<"C'mon then press ENTER!\n";
        getchar();
        system("start rbtgraph.exe");
        return 0;
}
