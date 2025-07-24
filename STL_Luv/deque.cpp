#include<bits/stdc++.h>
using namespace std;

int main(){

    // doubally ended queue
    deque<int>d;
    int n = 10, count = 0;
    for(int i=0;i<n;i++){
        ++count;
        d.push_back(count);
    }
    for(auto i:d) cout << i << " ";
    cout << endl;
    cout << "from front " << endl;    
    cout << d.front();
    cout << "from back" << endl;
    cout << d.back() << endl;

    d.pop_back();
    d.pop_front();

    cout << "after the above task done " << endl;
    for(auto i:d) cout << i << " ";

    // standard sort dont work 
    // d.sort(d.begin() , d.end());
}