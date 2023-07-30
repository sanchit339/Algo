#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,to_find; //size,to_find 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    cin>>to_find;

    cout << upper_bound(v.begin() , v.end()  , to_find)-v.begin();
}