
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];


void DFS(int vertex){ // to start from which vertex   ... as not constant starts from the start vertex

    // Take action on vertex after entering the vertex

    for(int child : graph[vertex]){ // itr to all the con of the node

        // Take action on child before entering the child node

        DFS(child);

        // Take action on child after exiting child node
    }

    // Take action on vertex before exiting the vertex

}