#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+10; 
int n;
ll m;
ll tree[N];

bool isWoodSufficient(int h){ // the amount of wood getting collected
    ll wood = 0;
    for(int i=0;i<n;i++){
        if(tree[i]>=h){
            wood+=tree[i]-h; //collected wood after cutting
        }
    }
    return wood>=m; // required one (m)
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    ll lo = 0,hi = 1e9,mid;
    while((hi-lo)>1){
        mid = (hi+lo)/2;
        // T T T T F F F F F
        cerr<<mid<<endl;
        if(isWoodSufficient(mid)){ // if true .. go find the last true 
            lo = mid;
        }
        else{ // got false so find the 1st F
            hi = mid - 1;
        }
    }
    if(isWoodSufficient(hi)){ // for checking the max height use high
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
}


