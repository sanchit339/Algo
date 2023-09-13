#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int M = 1e9+7;
vector<int>g[N];
int sub_treeSum[N];

void dfs(int vertex , int par = -1){
    sub_treeSum[vertex] += vertex;
    for(auto child : g[vertex]){
        if(child == par) continue;
        dfs(child , vertex);
        sub_treeSum[vertex] += sub_treeSum[child];
    }
}


int main(){
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x , y ; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    long long ans = 0;
    for(int i = 2 ; i <= n + 1 ; ++i){
        int part1 = sub_treeSum[i];
        int part2 = sub_treeSum[1] - part1;
        ans = max(ans , (part1 *1ll * part2) % M);
    }
    cout << ans << endl;
}