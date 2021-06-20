#include <bits/stdc++.h>
using namespace std;

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void sort(int n, int arr[]){
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]<arr[i])
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
        
}