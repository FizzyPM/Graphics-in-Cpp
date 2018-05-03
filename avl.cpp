#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     system("Color F4");
    cout<<endl;
    cout << " What is an AVL?\n";
    cout << " ```````````````\n";
    cout<<" AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees cannot be more than one for all nodes."<<endl;
    cout << " An AVL tree is a binary search tree which has the following properties:\n";
    cout << "\t->The sub-trees of every node differ in height by at most one.\n\t->Every sub-tree should be an AVL tree."<<endl;
    cout<<endl;
    cout << " Why AVL Trees?\n";
    cout << " ``````````````\n";
    cout << " Most of the BST operations (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST. The cost of these operations may become O(n)\n";
    cout << " for a skewed binary tree.If we make sure that height of the tree remains O(Logn) after every insertion and deletion, then we can guarantee an upper bound of O(Logn)"<<endl;
    cout << " for all these operations.The height of an AVL tree is always O(Logn) where n is the number of nodes in the tree."<<endl;
    cout<<endl;
    cout << " In AVL tree, after performing every operation like insertion and deletion we need to check the balance factor of every node in the tree.If every node satisfies the\n";
    cout << " balance factor condition then we conclude the operation otherwise we must make it balanced. We use rotation operations to make the tree balanced whenever the tree is\n";
    cout << " becoming imbalanced due to any operation.\n";
    cout<<endl;
    cout<<"--------------------------------------------------------------\n";
    cout<<"Take a short look at a quick example to see how rotation works\n";
    getchar();
        system("start avlgraph.exe");
    Sleep(20000);
    cout<<" To balance itself, an AVL tree may perform the following four kinds of rotations:\n";
    cout<<" 1)Left-Left rotation\n 2)Right-Right rotation\n 3)Left-Right rotation\n 4)Right-Left rotation\n";
     cout<<"\n Press ENTER to see them all\n";
    getchar();
        system("start avlgraph2.exe");
    return 0;
}
