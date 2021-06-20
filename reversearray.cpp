//Given an array (or string), 
//the task is to reverse the array/string.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)

int * reverse(int n, int arr[]){

    fo(i, 0, n/2)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return arr;

}

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];

    fo(i, 0, n)
    {
        cin>>arr[i];
    }    
    int *p = reverse(n, arr); 
    fo(i, 0, n)
    {
        cout<<*(p+i)<<" ";
    }
}