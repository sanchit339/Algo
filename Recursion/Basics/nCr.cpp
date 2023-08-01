#include<iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}
int ncr(int n , int r){
    int num , den;
    num = fact(n);
    den = fact(r) * fact(n-r);
    return num/den;
}
int main(){
    int n , r;
    cin >> n >> r; 
    /*
        the formula is n!/ r!(n-r)! 3 calls 
    */
    int ans = ncr(n ,r);
    cout << ans ;
}