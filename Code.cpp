#include<bits/stdc++.h>
using namespace std;

int fibbo(int n){
    //base case
    if(n <= 1)
        return n;

    return fibbo(n - 1) + fibbo(n - 2);
}

int main(){
    int n;
    cin >> n;
    // int n = 10;
    cout << fibbo(n);
}


void printVec(vector<int> &v){
    for(auto it : v) cout << it << " ";
}

int main(){
    int n;
    cin >> n;
    
    vector<int> v;
    v.push_back(0);
    v.push_back(1);

    if(n < 3){
        printVec(v);
        return 0;
    }
    for(int i = 2; i < n ; i++){
        int x = v[i - 1] + v[i - 2];
        v.push_back(x);
    }
    printVec(v);
}