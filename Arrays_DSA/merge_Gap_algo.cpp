#include<bits/stdc++.h>
using namespace std;

/*
    sawp the element of edge from the gap 
*/

void gap_algo(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size() , m = arr2.size();
    int gap = ((n + m + 1) / 2);
    int i , j;
    while (gap > 0){
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
        gap = gap / 2 + (gap % 2); // cimplete one window and update gap
    }
    
}
/*
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
*/

/*
// for first array 
        for(i = 0 ; i + gap  < n1 ; ++i)
            if (arr1[i] > arr1[i + gap])
                    swap(arr1[i], arr1[i + gap]);
        
        // for both array take care of j
        for(j = gap > n1 ? gap - n1 : 0 ; i < n1 && j < n2 ; ++i , ++j)
            if(arr1[i] > arr2[j])
                swap(arr1[i] , arr2[j]);

        // for the 3rd array
        if( j < n2 ){
            for(j = 0 ; j + gap < n2 ;++j)
                if(arr2[j] > arr2[j + gap])
                    swap(arr2[j] , arr2[gap+j]);
        }
*/