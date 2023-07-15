// no need of vis just maintain parent 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>graph[N];

//depth and height
int depth[N] , height[N];

void DFS(int vertex , int parent = 0){ 
    for(int child : graph[vertex]){ 
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1; // going deep :)
        DFS(child , vertex);
        height[vertex] = max(height[vertex] , height[child]+1); // while its in a child ..child +1
    }
}

int main(){
    int n ; cin >> n;
    for(int i = 0 ; i < n-1 ; i++){ // n-1 vertex 
        int x , y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    DFS(1);
    for(int i = 1 ; i <= n ; i++) {
        cout << depth[i] << " " << height[i] << endl;
    }
}


/*

13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11

*/