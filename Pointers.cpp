/**
 * @file hello.cpp
 * @author Sanchit
 * @brief 
 * @date 2023-07-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<bits/stdc++.h>
using namespace std;

// //  * Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// // struct Madhe
// struct LLNode{
//     // properties means what it contains
//     // linked list madhe kay asta
//     int data;
//     LLNode * next; // zala

//     // methods
//     LLNode(int val){
//         data = val;
//         LLNode * next = NULL; // initially ekch asta na node 
//     }
//     // ekk actual node fkt banvala apan 
// };

// class treeNode{
//     public:
//         int data;
//         treeNode * left;
//         treeNode * right;

//     treeNode(int val){
//         data = val;
//         Node * left = NULL;
//         Node * right = NULL;
//     } 
// };


int fact(int n){
    if(n == 0)
        return 1;

    // cout << N << " " << n << endl;
    return n + fact(n - 1);
}


int main(){
    int n = 3;
    int a = 5;
    // int ans = fact(n);
    // cout << ans << endl;

    int x = 10;
    int * px = &x;

    cout << px << endl;
}