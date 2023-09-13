/*
    keep the track of the parent node
    if other than parent if the node is visited then cycle exixts
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];

bool vis[N];

bool DFS(int vertex , int parent){
    vis[vertex] = true;
    bool isLoopExists = false;
    for(int child : graph[vertex]){ 
        
        if(vis[child] && child == parent) continue; // node will dfs back to parent (Vertex ) ignore it
        
        // base case
        // if still the other than parent are vivisted then loop exists close the DFS
        if(vis[child]) return true; // if till is present then cycle exists ** check the photo at (3 - 5 - 1)

        /*
            but due to recursion it will not ret true 
            so we will or the all the answer
        */
        isLoopExists |= DFS(child , vertex); // the parent of every child is its vertex

    }
    return isLoopExists;
}

int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; ++i){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for(int i = 1 ; i <= n ; ++i){
        if(vis[i]) continue;
        if(DFS(i , 0)){
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << endl;
}

/*

8 7
1 2
2 3
2 4
3 5
6 7
1 3
3 4

*/

