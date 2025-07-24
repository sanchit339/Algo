//  eliminate duplicate using XOR operator

/*
    find an element in an array containing odd count other elements have even count
*/

// TC O(N) and SC O(1)
// we can also use hashing but SC(n);

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans^=x;
    }
    cout<<ans;
}


// input 1 1 1 2 3 4 4 5 5 3 2
// ans = 1;