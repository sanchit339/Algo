// Queries of 10^7
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);


int main()
{
    IOS;
    tie;
    int n;
    cin >> n;
    vector<int> ans;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        { // initially all true so 2 also true {first iteration}
            ans.push_back(i);
            for (int j = i * 2; j < N; j += i)
            { // making multiple of the number from 2 false
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}