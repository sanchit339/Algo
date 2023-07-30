#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node * left ;
    Node * right ;

    Node(int data){
        val = data;
        Node * left = NULL;
        Node * right = NULL;
    } 
};

// struct Madhe
struct LLNode{
    // properties means what it contains
    // linked list madhe kay asta
    int data;
    LLNode * next; // zala

    // methods
    LLNode(int val){
        data = val;
        LLNode * next = NULL; // initially ekch asta na node 
    }
    // ekk actual node fkt banvala apan 
};

class treeNode{
    public:
        int data;
        treeNode * left;
        treeNode * right;

    treeNode(int val){
        data = val;
        Node * left = NULL;
        Node * right = NULL;
    } 
};