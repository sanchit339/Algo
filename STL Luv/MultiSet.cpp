#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> x;
    x.insert(4);
    x.insert(2);
    x.insert(3);
    x.insert(1);
    x.insert(5);
    x.insert(3);
    x.erase(4);
    auto it = x.lower_bound(4);
    // if (it != x.end() && *it == 4) {
    //     cout << "It exists";
    // } else {
    //     cout << "It doesn't exist";
    // }

    for(auto i:x) cout << i << " " ;
}
