/*
    principle:-  the first goes.. first comes out
    imlemented using queue 
    maintain a visited array 
    put non visited in queue
    pop and traverse the node which came from the queue 
    put the children of the node in the queue 
    keep traversing the queue
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];

int vis[N] , level[N];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty())
    {
        int curr_int = q.front();
        q.pop();
        for(int child : graph[curr_int])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[curr_int] + 1;
            }
        }
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
}