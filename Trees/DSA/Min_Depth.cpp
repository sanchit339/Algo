/**
 * @file Min_Depth.cpp
 * @author Striver
 * 
 * @brief cal the min Height Depth wise
 * 
 * @version 0.1
 * @date 2023-08-08
 */

#include<bits/stdc++.h>
using namespace std;


//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) { // for min we should have to go from top to bottom at one step each
        if(root == NULL) return 0;

        // base case if(left == null and right == null) height = 1
        if(root -> left == NULL && root -> right == NULL) return 1;

        if(root -> left == NULL) // cal the height first
            return minDepth(root -> right) + 1;

        if(root -> right == NULL) // cal the height first
            return minDepth(root -> left) + 1;
        
        return min(minDepth(root -> right) , minDepth(root -> left)) + 1;
    }
};