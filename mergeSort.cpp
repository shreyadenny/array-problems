#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int n)
{
    
    int a = m-l+1;
    int b = n-m; 
    int c[a];
    int d[b];

    for(int i=0; i<a; i++)
    {
        c[i] = arr[l + i];
    }
    for(int j=0; j<b; j++)
    {
        d[j] = arr[m + 1 + j];
    }
    
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < a && j < b) {
        if (c[i] <= d[j]) {
            arr[k] = c[i];
            i++;
        }
        else {
            arr[k] = d[j];
            j++;
        }
        k++;
    }
    while(i<a){
        arr[k] = c[i];
        i++;
        k++;
    }
    while(j<b){
        arr[k] = d[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int n, int arr[])
{
    if(l>=n){
        return;
    }
    int mid = (l + n)/2;
    mergeSort(l, mid, arr);
    mergeSort(mid+1, n, arr);
    merge(arr, l, mid, n);

}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    mergeSort(0, n, arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }       
    
}

