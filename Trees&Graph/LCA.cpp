/*
    LCA :- Lowest common Ancester
    the closest vertex to the two nodes which is common to both
    but the lowest (closest) one

    Approch:-
    find the distance from the root node and then traverse the array both at a time until != is found
    if found return n-1
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int>graph[N];
int par[N]; // just like hashing 

void DFS(int vertex , int parent = -1){  // store parent as -1
    par[vertex] = parent; // storing all the parent 
    for(int child : graph[vertex]){ 
        if(child == parent) continue;
        DFS(child , vertex);
    }
}

vector<int>path(int v){
    vector<int>ans;
    while(v != -1){
        ans.push_back(v); // push it in answer
        v = par[v]; // go to parent node 
    } // the vector is in descending 
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    int n ; cin >> n;
    for(int i = 0 ; i < n-1 ; i++){ // n-1 vertex 
        int x , y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    DFS(1); // as dfs ran the parent is stored in the vector

    // for(int i = 1 ; i <=n ; ++i){
    //     cout << par[i] << " ";
    // }
    int x , y; // the of which to be found
    cin >> x >> y;
    vector<int> path_x = path(x); //fun call
    vector<int> path_y = path(y); // path y 

    // loop till not same
    int min_len = min(path_x.size() , path_y.size());
    int lca = -1;
    for(int i=0;i<min_len;i++){
        if(path_x[i] == path_y[i]){
            lca = path_x[i];
        }
        else break;
    }
    cout << lca << endl;
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