#include<bits/stdc++.h>
using namespace std;
const int M = 1e3+10; // max size of global 2d array 
int arr[M][M];
long long Pf[M][M];
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            Pf[i][j]=arr[i][j]+Pf[i-1][j]+Pf[i][j-1]-
        } 
    }
}