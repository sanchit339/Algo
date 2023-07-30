/*
    https://codeforces.com/contest/218/problem/B
*/

#include<bits/stdc++.h>
using namespace std;


int n , m; // global coz no multiple inp and can be accessed at every pt of program
int arr[1005];

// for max 2 2 2 ==> 2 2 1 => 2 1 1 (--) and push back
int maxi(){
    priority_queue<int>pq; // 10 , 9 , 8 , 7 , 6 , 5 ....
    int max_sum = 0;
    for(int i = 0 ; i < m ; i++){
        pq.push(arr[i]);
    }
    for(int i = 0 ; i < n ; i ++){
        int curr = pq.top();
        max_sum += curr;
        pq.pop();
        pq.push(--curr);
    }
    return max_sum;
}

// for mini 2 2 2 ==> 1 2 2 ==> 2 2 ==> 1 2 ==> 2 ==> 1 
int mini(){
    priority_queue< int , vector<int> , greater<int> > pq; // 1 2 3 4 5 ....
    int min_sum = 0;
    for(int i = 0 ; i < m ; i++){
        pq.push(arr[i]);
    }

        for(int i = 0 ; i < n ; i ++ ){
            if(pq.top() == 0) pq.pop();  // while (pq.top()==0) pq.pop(); didnt get it
            int curr = pq.top();
            min_sum += curr;
            pq.pop();
            pq.push(--curr);
        }
    
    return min_sum;
}

int main(){
    scanf("%d %d" , &n, &m);
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &arr[i]);
    }

    int ans_max = maxi();
    int ans_mini = mini();

    cout << ans_max << " " << ans_mini ;
}