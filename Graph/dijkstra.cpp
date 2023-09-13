#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S){
        vector<int> dist(V , 1e9);

        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;

        pq.push({0 , S});
        dist[S] = 0;
        while (!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;

            pq.pop();
            for(auto it : adj[node]){
                int v = it[0];
                int edgeWt = it[1];
                if(edgeWt + dis < dist[v]){
                    dist[v] = edgeWt + dis;
                    pq.push({dist[v] , v}); // pq of dist , v
                }
            }
        }
        return dist;
    }
};
