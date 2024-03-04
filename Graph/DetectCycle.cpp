#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites ) {
        unordered_map<int , vector<int>> graph;
        vector<int> inDegree(numCourses , 0);

        // Populate adjacency list and calculate in-degrees
        for(auto &edge : prerequisites){
            graph[edge[1]].push_back(edge[0]); // edge[1] -> edge[0]
            inDegree[edge[0]]++;
        }

        queue<int>q;

        for(int i = 0 ; i < numCourses ; ++i){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }

        int cnt = 0;

        while (!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            for(int child : graph[node]){
                if(--inDegree[child] == 0){
                    q.push(child);
                }
            }
        }
        if(cnt == numCourses) return false;
        return true;
    }
};