#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int n = s.size();

    int i = 0 , j = n - 1;
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++ , j--;
    }
    return true;
}

int main(){
    string s1;
    cin >> s1;

    cout << check(s1) << "\n";
}