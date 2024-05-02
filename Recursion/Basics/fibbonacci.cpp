#include<bits/stdc++.h>
using namespace std;

int fibbo(int n){
    //base case
    if(n <= 1)
        return n;
    
    return fibbo(n - 1) + fibbo(n - 2);
}
int main(){
    int n = 10;
    cout << fibbo(n);
}