#include<iostream>
using namespace std;

bool isSquare(int x){
    int lo = 0 , hi = x;
    while (lo<=hi){
        int mid = lo + (hi - lo)/2;
        int ans = mid*mid;
        if(ans == x){
            return true;
        }
        if(ans < x){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return false;
}

int main(){
    int x; cin >> x;
    cout << isSquare(x) ;
}