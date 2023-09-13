/*
    for graph it is mandetory to maintain the visited list 

    TC --> TC. O(v+e) 
*/
/*
    just remember this 
    start with a node 
    make it visited if already then skip 
    if new loop it (loop the child of the vertex)
    if(child is visited skip) else dfs child
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];

bool vis[N];

void DFS(int vertex){ // to start from which vertex   ... as not constant starts from the start vertex
    cout << vertex << endl;
    vis[vertex] = true;
    for(int child : graph[vertex]){ // itr to all the con of the node
        cout << "par " << vertex << ", child" << child << endl;
        if(vis[child]) continue;
        DFS(child);
    }
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
    DFS(1);
}

/*
    6 9
    1 3
    1 5
    3 5 
    3 4
    3 6
    3 2
    2 6 
    4 6
    5 6
*/

