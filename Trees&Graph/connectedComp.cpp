/*
    conntected components means that from the given node we can go to all 
    other node 
*/

/*
    algorithm (the number is equal to the number of times the dfs run)
    create a code with dfs ready 
    create a loop 1 - n;
    if visited continue else dfs and cnt++
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];

//store the connetced components
vector<vector<int>>cc;
vector<int>current_cc;

bool vis[N];

void DFS(int vertex){ // to start from which vertex   ... as not constant starts from the start vertex
    vis[vertex] = true;
    current_cc.push_back(vertex); // the number of nodes = number of times dfs run 
    for(int child : graph[vertex]){ // itr to all the con of the node
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

    int countCC = 0;
    for(int i = 1; i <= n ; i++){ //start from the starting vertex
        if(vis[i]) continue;
        // current_cc.clear(); // fresh start fill it again
        DFS(i);
        // cc.push_back(current_cc);
        countCC++;
    }

    cout << countCC << endl;
    // for(auto c_cc:cc){
    //     for(int vertex : c_cc){
    //         cout << vertex << " ";
    //     }
    //     cout << endl;
    // }
}

/*

8 5
1 2
2 3
2 4
3 5
6 7

*/

