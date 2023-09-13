/**
 * @file TopologicalSort.cpp
 * @brief Sort Directed Acyclic Graph
 * @version 0.1
 * @date 2023-08-03
 */

#include<bits/stdc++.h>
using namespace std;

class solution{
private:
    void dfs(int node , vector<int> &vis , stack<int> &st , vector<int> adj[]){
        vis[node] = 1;
        for(auto child : adj[node]){
            if(vis[child]) continue;
            dfs(child , vis , st , adj);
        }
        st.push(node);
    }
public:
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int>vis(V , 0);
        stack<int> st;
        for(int i = 0 ; i < V ; ++i){
            if(!vis[i]){
                dfs(0 , vis , st , adj);
            }
        }
        vector<int> ans; 
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};