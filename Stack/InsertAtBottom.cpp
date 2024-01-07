#include<bits/stdc++.h>
using namespace std;


void solve(stack<int>& st, int x){
    if(st.size() == 0){
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    solve(st , x);
    st.push(temp);
}


stack<int> pushAtBottom(stack<int>& st, int x){
    solve(st , x);
    return st;
}
