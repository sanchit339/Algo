/**
 * @file Right_left_View.cpp
 * @author Striver
 *
 * @brief Use Recursive Because for itr when at bottom more space is required to just store leaf nodes
 * 
 * @brief Use Reverse Pre Order Traversal
 * 
 * @date 2023-08-08
 */

#include<bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct Node {
    int data;
    Node *left;
    Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {}
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
};

vector<int> leftView(Node *root){

}