#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)

int * sortArray(int n, int arr[]){
    
    fo(i, 0, n-1)
    {
        fo(j, i+1, n)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    int *p = sortArray(n, arr);
    fo(i, 0, n){
        cout<<*(p+i)<<" ";
    }

}