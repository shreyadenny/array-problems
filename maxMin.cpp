//Given an array, write functions
// to find the minimum and maximum elements in it. 
#include <bits/stdc++.h>
using namespace std;

#define fo(i, a, n) for(int i=a; i<n; i++)
 
int max(int size, int arr[])
{
    int max = arr[0];
    
    fo(i, 0, size)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;

}
int min(int size, int arr[])
{
   
    int min = arr[0];
    fo(i, 0, size)
    {
       
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;

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
    cout<<max(n, arr)<<endl;
    cout<<min(n, arr)<<endl;
    
}