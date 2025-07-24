#include <bits/stdc++.h>
using namespace std;

// stack (push // pop)
// queue (enqueue // dequeue)

// stack
// Parenthesis cheaker
// NGE (next greater element)

// queue 
// bfs in graph etc; 


int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // emptying
    while(!s.empty()){ // while stack is not empty
        cout<<s.top()<<endl;  // for our Convenience we have used it 
        s.pop();
    }
}

// queue code

// int main(){
//     queue<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     // emptying
//     while(!s.empty()){ // while stack is not empty
//         cout<<s.front ()<<endl;  // for our Convenience we have used it 
//         s.pop();  // same as stack 
//     }
// }