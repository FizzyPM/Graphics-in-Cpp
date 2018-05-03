#include<bits/stdc++.h>
#include <iostream>
#include<windows.h>
//#include<mmsystem.h>
using namespace std;
 void pushX(int num){
    for(int i=0;i<num;i++)
        cout<<" ";}
int main()
{
     system("Color 4F");
    //system("mode 850");
    //system("pause");
    char a;
    int n,m;
    cout<<"\n When we first start learning to code, it's common to learn arrays as the 'main data structure'. "<<endl;
    cout<<" Eventually, we learn hash table too.If you are pursuing a Computer Science degree, you have a Data Structure class and you also learn Linked Lists, Queues, and Stacks."<<endl;
    cout<<" Those data structures are all called 'linear' data structures because they all have a logical start and a logical end.When we start learning trees and graphs, it gets "<<endl;
    cout<<" really confused. We don't store data in a linear way. Both data structures have a specific way to store data."<<endl;
    cout<<" This post is an attempt to we better understand the Tree Data Structure and clarify any doubts about it."<<endl;
    cout<<endl;
    cout<<"Let's start this learning journey! :)"<<endl;
    cout<<endl;
    cout<<"Definition"<<endl;
    cout<<"----------"<<endl;
    cout<<"Trees are well known as a non-linear Data Structure. It doesn't store data in a linear way. It organizes data in a hierarchical way."<<endl;
     cout<<endl;
    cout<<"Let's dive in real life examples"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"What do I mean about hierarchical way? Imagine a family tree with all generation relationship: grandparents, parents, children, siblings, etc. We commonly organize it "<<endl;
    cout<<"in a hierarchical way."<<endl;
     cout<<endl;
    cout<<"Terminology"<<endl;
    cout<<"-----------"<<endl;
    cout<<"Root: the topmost node of the tree \n Edge: the link between 2 nodes \n Child: a node that has a parent node \n Parent: a node that has an edge to a child node \n Leaf: a node that does not have a child node in the tree \n Height: The height of a tree is the length of the longest path to a leaf. \n Depth: The depth of a node is the length of the path to its root."<<endl;

//Sleep(5000);
getchar();
    cout<<"\n Which tree you want to learn first ? \n";
    Sleep(1000);
    cout<<" But Wait!!\n";
    Sleep(1000);
    cout<<" First you have to become familiar with few more terms: \n";
    Sleep(2000);
    cout<<endl;
    cout<<"Binary Tree -----------------------> A tree in which every node can have a maximum of two children is called as Binary Tree.\n";
    cout<<"Complete Binary Tree --------------> A binary tree in which every internal node has exactly two children and all leaf nodes are at same level.\n";
    cout<<"Perfect Binary Tree ---------------> If all internal nodes has 2 children & all leaves are at the same level .\n";
    cout<<"Balanced Binary Tree --------------> A binary tree is balanced if height of the tree is O(log n),where n is number of nodes.\n";
    cout<<"Degenerate(or Pathological) Tree --> A tree where every internal node has one child.[Performance-wise same as link list]"<<endl;
    cout<<"\nPress ENTER to continue"<<endl;
    getchar();
    for(int j=70;j>0;j--){
        system("CLS");
        pushX(j);
        cout<<"Now you are ready to go ";
        Sleep(30);
    }
    cout<<"\n Which tree do you want to learn ? \n";
    do
    {
        cout<<"\n 1. BINARY SEACH TREE\n 2. AVL TREE\n 3. RED-BLACK TREE\n 4. B TREE\n ";
        cin>>n;
        switch (n)
        {
        case 1: {
                    system("start bst.exe");
                }

            break;
        case 2:{
                    system("start avl.exe");
                }
            break;
        case 3:{
                    system("start rbt.exe");
                }
            break;
        case 4:{
                    system("start btree.exe");

                }
            break;
            default: cout<<"invalid entry";
        }
        cout<<"Enter 'y' if u want to learn another tree or 'n' otherwise\n";
        cin>>a;
    }while(a=='y');
    cout<<"That's it!\n";
    cout<<"We learned a lot here. Congrats on finishing this dense piece of content. It's really tough to understand a new concept we are not used to. But you did it! :)\n";
   // PlaySound(TEXT("audio.wav"),NULL,SND_SYNC);
    return 0;
}
