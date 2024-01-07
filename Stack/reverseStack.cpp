#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &st , int x){
    if(st.size() == 0){
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();

    InsertAtBottom(st , x);
    st.push(temp);
}

void reverseStack(stack<int> &st) {
    if(st.empty()) return;

    int temp = st.top();
    st.pop();

    reverseStack(st); 
    InsertAtBottom(st , temp);
}