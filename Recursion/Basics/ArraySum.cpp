#include<iostream>
using namespace std;
int sum(int n , int arr[]){
    if( n < 0) return 0;
    return sum(n-1 , arr) + arr[n];
}
int main(){
    int n ;
    cin >> n ;
    int arr[6] = {1 ,2 , 3 ,4 , 5 , 6};
    cout << sum(n-1 , arr);
}