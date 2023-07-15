#include<iostream>
using namespace std;
// M * M * M * ..... (N-1) TIMES M*
int power(int n , int m){
    if(m == 0) return 1; // anything pow zero 1
    return power(n , m-1)*n;
}

int power2(int n , int m ){
    if(m == 0){
        return 1;
    }
    if(m%2 == 0){
        return power2(n*n , m/2);
    }
    else{
        return power2( n*n , (m-1)/2)*n;
    }
}
int main(){
    int n , m ;  
    cin >> n >> m;
    int ans = power2(n , m);
    cout << ans << endl;
}

