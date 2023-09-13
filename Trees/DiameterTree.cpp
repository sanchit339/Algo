/*
    max distance betweem two vertices is called Diameter of tree
    in an overall tree

    find the longest node from the root node that will be one end of the tree then from that point 
    find the next end
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
int depth[N];
void dfs(int vertex , int parent = 0){
    for(auto child:graph[vertex]){
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child , vertex);
    }
}

int main(){
    int n ; cin >> n;
    for(int i = 0 ; i < n-1 ; i++){ // n-1 vertex 
        int x , y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1); // take any random initailly
    int max_depth = -1;
    int max_node;
    for(int i = 1 ; i <= n ; ++i){ // check from each node the max possible node 
        if(max_depth < depth[i]){
            max_depth = depth[i];
            max_node = i; // the maxTH node 
        }
        depth[i] = 0; // reset full loop
    }
    dfs(max_node); // as the depth array is also reset iterate the max node
    max_depth = -1;
    for(int i = 1 ; i <= n ; ++i){ // check from each node the max possible node 
        if(max_depth < depth[i]){
            max_depth = depth[i]; // as it finds the depth till all the node check the max one
        }
    }
    cout << max_depth << endl;
}