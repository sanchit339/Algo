// SubTree question are generally solved using the bottom up approch  
// here we took wt as the number of that subtree

/** Given Q Queries, Q <= 10^5
* In each query given V,
* Print subtree sum of V, Number of even numbers
* in subtree of V
**/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int subtree_sum[N]; // sum in the subtree of ith subtree
int even_cnt[N];
int val[N]; // if the value array is given then
vector<int>graph[N];

void DFS(int vertex , int parent = 0){ 
    subtree_sum[vertex] += vertex; // that vertex  // the actual val incre here
    // subtree_sum[vertex] += val[vertex]; 
    if(vertex%2 == 0) even_cnt[vertex]++;
    for(int child : graph[vertex]){ 
        if(child == parent) continue;
        DFS(child , vertex); 
        subtree_sum[vertex] += subtree_sum[child]; // here value not present 
        even_cnt[vertex] += even_cnt[child];
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
    for(int i = 1; i<n;i++){
        cout << i << " " << subtree_sum[i] << " " << even_cnt[i] << endl;
    }
    
    // int q; cin >> q;
    // while (q--){
    //     int v ; cin >> v; 0
    //     cout << subtree_sum[v] << endl;
    // }
}


/*
8
1 2
2 4
4 6
4 7
5 8
2 5
1 3
3
2
4
5

*/