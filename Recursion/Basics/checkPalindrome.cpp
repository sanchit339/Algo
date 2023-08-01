#include<iostream>
using namespace std;

bool check(string s , int i , int n){
    //base case
    if(i >= n / 2) return true;

    if(s[i] != s[n - i - 1]) return false;

    return check( s , i + 1 , n);
}

int main(){
    string s = "MADAM";

    cout << check(s , 0 , s.size());
}