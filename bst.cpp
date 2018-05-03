#include <fstream>
#include <iostream>
#include <deque>
#include <iomanip>
#include <sstream>
#include <string>
#include<bits/stdc++.h>
#include <stdio.h>
#include<windows.h>

using namespace std;
struct BinaryTree {
  BinaryTree *left, *right;
  int data;
};

struct BinaryTree *newNode(int item)
{
    struct BinaryTree *temp =  (struct BinaryTree *)malloc(sizeof(struct BinaryTree));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct BinaryTree* insert(struct BinaryTree* node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);

    return node;
}

int maxHeight(BinaryTree *p) {
  if (!p)
  	return 0;
  int leftHeight = maxHeight(p->left);
  int rightHeight = maxHeight(p->right);
  return (leftHeight > rightHeight) ? leftHeight + 1: rightHeight + 1;
}

string intToString(int val) {
  ostringstream ss;
  ss << val;
  return ss.str();
}

void printBranches(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out) {
  deque<BinaryTree*>::const_iterator iter = nodesQueue.begin();
  for (int i = 0; i < nodesInThisLevel / 2; i++) {
    out << ((i == 0) ? setw(startLen-1) : setw(nodeSpaceLen-2)) << "" << ((*iter++) ? "/" : " ");
    out << setw(2*branchLen+2) << "" << ((*iter++) ? "\\" : " ");
  }
  out << endl;
}

void printNodes(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out) {
  deque<BinaryTree*>::const_iterator iter = nodesQueue.begin();
  for (int i = 0; i < nodesInThisLevel; i++, iter++) {
    out << ((i == 0) ? setw(startLen) : setw(nodeSpaceLen)) << "" << ((*iter && (*iter)->left) ? setfill('_') : setfill(' '));
    out << setw(branchLen+2) << ((*iter) ? intToString((*iter)->data) : "");
    out << ((*iter && (*iter)->right) ? setfill('_') : setfill(' ')) << setw(branchLen) << "" << setfill(' ');
  }
  out << endl;
}

void printLeaves(int indentSpace, int level, int nodesInThisLevel, const deque<BinaryTree*>& nodesQueue, ostream& out) {
  deque<BinaryTree*>::const_iterator iter = nodesQueue.begin();
  for (int i = 0; i < nodesInThisLevel; i++, iter++) {
    out << ((i == 0) ? setw(indentSpace+2) : setw(2*level+2)) << ((*iter) ? intToString((*iter)->data) : "");
  }
  out << endl;
}

void printPretty(BinaryTree *root, int level, int indentSpace, ostream& out) {
  int h = maxHeight(root);
  int nodesInThisLevel = 1;

  int branchLen = 2*((int)pow(2.0,h)-1) - (3-level)*(int)pow(2.0,h-1);
  int nodeSpaceLen = 2 + (level+1)*(int)pow(2.0,h);
  int startLen = branchLen + (3-level) + indentSpace;

  deque<BinaryTree*> nodesQueue;
  nodesQueue.push_back(root);
  for (int r = 1; r < h; r++) {
    printBranches(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue, out);
    branchLen = branchLen/2 - 1;
    nodeSpaceLen = nodeSpaceLen/2 + 1;
    startLen = branchLen + (3-level) + indentSpace;
    printNodes(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue, out);

    for (int i = 0; i < nodesInThisLevel; i++) {
      BinaryTree *currNode = nodesQueue.front();
      nodesQueue.pop_front();
      if (currNode) {
	      nodesQueue.push_back(currNode->left);
	      nodesQueue.push_back(currNode->right);
      } else {
        nodesQueue.push_back(NULL);
        nodesQueue.push_back(NULL);
      }
    }
    nodesInThisLevel *= 2;
  }
  printBranches(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue, out);
  printLeaves(indentSpace, level, nodesInThisLevel, nodesQueue, out);
}

void searchTree(struct BinaryTree* node, int y)
{
    int flag=0;
    while (node != NULL)
    {
        if (node->data == y){
            cout << "\nValue Is Present In The Tree!!"<<endl;
                flag=1;
                break;}
        else if (node->data < y)
            return searchTree(node->right, y);
        else if (node->data > y)
            return searchTree(node->left, y);
    }
    if(flag==0)
        cout << "Value Not Present In The Tree!!"<<endl;;
}

struct BinaryTree* minValueNode(struct BinaryTree* node)
{
    struct BinaryTree* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

struct BinaryTree* deleteNode(struct BinaryTree* root, int data)
{
    if (root == NULL) return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL)
        {
            struct BinaryTree *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct BinaryTree *temp = root->left;
            free(root);
            return temp;
        }
        struct BinaryTree* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    system("Color F0");
  struct BinaryTree *root = NULL;
  root = insert(root, 20);
  cout<<endl;
  cout << "What is a Binary Search Tree?\n`````````````````````````````\n";
  cout << "Binary Search Tree, is a node-based binary tree data structure which has the following properties:\n";
  cout << "\t->The left subtree of a node contains only nodes with keys less than the node's key.\n\t->The right subtree of a node contains only nodes with keys greater than the node's key.\n\t->The left and right subtree each must also be a binary search tree. There must be no duplicate nodes.\n\n";
  cout << "Searching In A Binary Search Tree\n`````````````````````````````````\n";
  cout << "To search a given key in Binary Search Tree, we first compare it with root, if the key is present at root, we return root. If key is greater than root's key, we recur \nfor right subtree of root node. Otherwise we recur for left subtree.\n\n";
  cout << "Inserting A New Node In Binary Search Tree\n``````````````````````````````````````````\n";
  cout << "A new key is always inserted at leaf. We start searching a key from root till we hit a leaf node. Once a leaf node is found, the new node is added as a child of the \nleaf node.\n";
  cout << "\t     100                                         100\n";
  cout << "\t    /   \\            Insert 40                  /   \\\n";
  cout << "\t  20\t500          -------->                 20    500\n";
  cout << "\t /  \\                                         /  \\\n";
  cout << "\t10  30                                      10    30\n";
  cout << "\t                                                    \\\n";
  cout << "\t                                                     40\n\n";
  cout << "Time Complexity\n```````````````\n";
  cout << "The worst case time complexity of search and insert operations is O(h) where h is height of Binary Search Tree. In worst case, we may have to travel from root to the \ndeepest leaf node. The height of a skewed tree may become n and the time complexity of search and insert operation may become O(n).\n\n";
  cout << "\n\nCreate your own Tree here...\n";
  char check = 'Y';
  int val;
  while(check == 'Y' || check == 'y')
  {
      cout << "\nEnter a value... ";
      cin >> val;
      insert(root, val);
      printPretty(root, 1, 0, cout);
      cout << "\nEnter another value? (Y/N)... ";
      cin >> check;
  }
  cout << "\nThe Tree finally formed is...\n";
  printPretty(root, 1, 0, cout);
  int t;
  cout << "\nWhat would you like to do next??\n\t1. Search A Value In The Created Tree\n\t2. Delete A Value From The Created Tree";
  cout << "\nEnter choice... ";
  cin >> t;
  if (t == 2)
  {
      cout << "\n\nDeletion In A Binary Search Tree\n";
      cout << "``````````````````````````````````";
      cout << "\nWhen a node is deleted, there are a total of three possibilities...\n";
      cout << "\t1. Node to be deleted is a leaf node, in which case, we directly remove it from the tree.\n";
      cout << "\t2. Node to be deleted has a single child present, in which case, we copy the contents of the child node and then delete the child node.\n";
      cout << "\t3. Node to be deleted has two children present, in which case, we find the in-order successor of the node. Copy contents of the in-order successor to the node\nand delete the in-order successor. Note that in-order predecessor can also be used.\n";
      int key;
      cout << "\nEnter The Value To Delete... ";
      cin >> key;
      deleteNode(root, key);
      cout << "\n\nDeleting " << key;
      cout << "\nThe tree now formed is...\n";
      printPretty(root, 1, 0, cout);
  }
  else if (t == 1)
  {
      int y;
      cout << "\nEnter The Value To Search... ";
      cin >> y;
      searchTree(root, y);
  }
  else
    cout << "\nInvalid Choice!!"<<endl;;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"Press 0 if you want to see how insertion works in binary search tree :"<<endl;
    int q;
    cin>>q;
    if(q==0)
       // cout<<"ok"<<endl;
        system("start bstgraph.exe");
  return 0;
}
