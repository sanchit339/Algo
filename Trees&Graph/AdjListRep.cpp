#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
vector<int>graph[N];

// vector<pair<int , int>>wGraph;
int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; ++i){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

        /*
            wGraph[v1].push_back({v2 , wt});
            wGraph[v2].push_back({v1 , wt});
        */
    }
}
