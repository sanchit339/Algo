/**
 * @file NodesAtDistK.cpp
 * @author Striver
 * @brief 
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    void makeParent(TreeNode *root , unordered_map<TreeNode* , TreeNode*> &parent_track){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* current = q.front();
            q.pop();
            if(current -> left){
                parent_track[current -> left] = current;
                q.push(current -> left);
            }
            if(current -> right){
                parent_track[current -> right] = current;
                q.push(current -> right);
            }
        }
    } 
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*> mp;
        makeParent(root , mp );

        unordered_map<TreeNode* , bool > vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target] = true;

        int curr_lev = 0;
        while(!q.empty()){
            int size = q.size();
            if(curr_lev++ == k) break;
            TreeNode *curr = q.front();
            q.pop();
            for(int i = 0 ; i < size ; i++){
                if(curr -> left && !vis[curr -> left]){
                    q.push(curr -> left);
                    vis[curr -> left] = true;
                }
                if(curr -> right && !vis[curr -> right]){
                    q.push(curr -> right);
                    vis[curr -> right] = true;
                }
                if(mp[curr] && !vis[mp[curr]]){
                    q.push(mp[curr]);
                    vis[mp[curr]] = true;
                }
            }
        }
        // Now Pushed everyone in a queue

        vector<int> ans;
        while(!q.empty()){
            TreeNode* node = q.front() ;
            q.pop();
            ans.push_back(node -> val);
        }
        return ans;
    }
};