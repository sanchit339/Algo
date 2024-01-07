#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> s , int n , int cnt){
    if(cnt = n/2){
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s , n , cnt += 1);
    s.push(temp);
}

void deleteMiddle(stack<int> s, int n){
    int cnt = 0;
    solve(s , n , cnt);
}

int main(){
    stack<int>s;
    
}