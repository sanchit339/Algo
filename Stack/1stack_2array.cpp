#include<iostream>
using namespace std;

// [ | | | | | | | | | | | ]
// ------->        <--------
// one array       one array
// from right      from left

// both will have the properties same as left to right and right to left 

class array_impl{
    // for final implementation
    public:
        int *arr;
        int top1 , top2;
        int size;
    
    array_impl(int size)
    {
        this -> size = size;
        arr = new int[size];
        top1 = -1 , top2 = size;
    }

    // push1 
    void push1(int element)
    {
        if(top1 < top2)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "NO space left" << endl;
        }
    }

    //push2
    void push2(int element)
    {
        if(top2 > top1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "No space left" << endl;
        }
    }

    //top1 array1
    int top1()
    {
        if(top1 > -1)
        {
            return arr[top1];
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1;
        }
    }

    //top1 array1
    int top2()
    {
        if(top2 < size)
        {
            return arr[top2];
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1;
        }
    }

    //pop1 array1
    int pop1()
    {
        if(top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1; 
        }
    }
    //pop2 array2
    int pop2()
    {
        if(top2 < size)
        {
            int ans = arr[top2];
            top1++;
            return ans;
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1; 
        }
    }
};