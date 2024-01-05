#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * left = NULL;
        node * right = NULL;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node * buildTree(node * root){
    cout << "enter the data foe the tree" << endl;
    int data;
    cin >> data;
    root = new node(data); // object creation in the heap
    
}

