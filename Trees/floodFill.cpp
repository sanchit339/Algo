#include<bits/stdc++.h>
using namespace std;

//this is a matrix question

// here vertex is replced by i , j
void dfs(int i , int j , int initialColor ,int finalColor , vector<vector<int>>& image){
    int n = image.size();
    int m = image[0].size();
    if(i < 0 || j < 0) return; // invalid nodes eliminate
    if(i >= n || j >= m) return;
    if(image[i][j] != initialColor)return; // elminate if the invalid node so , visited array not required

    image[i][j] = finalColor;
    dfs(i-1 , j , initialColor , finalColor , image);
    dfs(i+1 , j , initialColor , finalColor , image);
    dfs(i , j+1 , initialColor , finalColor , image);
    dfs(i , j-1 , initialColor , finalColor , image);

}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int initailColor = image[sr][sc]; // row , col ** starting from this pixel bola hai
    if(initailColor != color) // just normal edge case is same then dont dfs
        dfs(sr, sc , initailColor ,color , image);
    
    return image;
        
}