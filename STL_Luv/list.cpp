#include<bits/stdc++.h>
using namespace std;

int main(){

    // implements the   { bidirectional linked list }

    // dynamic allocation 

    list <int> l ;
    int n = 10  , count = 0;
    for(int i=0;i<n;i++){
        ++count;
        l.push_back(count);
    }
    for(auto i:l) cout << i << " ";
    cout << endl;
    cout << "from front " << endl;    
    cout << l.front() << endl;
    cout << "from back" << endl;
    cout << l.back() << endl;

    auto it = l.begin();
    it = l.insert(it , 25); //insert at the begin     { O (N) }
    it = l.erase(it); // erase value at the it;

    cout << "after the above task done " << endl;
    for(auto i:l) cout << i << " ";

    // standard sort dont work it has in built sort
    l.sort();
}