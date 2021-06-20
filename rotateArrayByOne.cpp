//Given an array, cyclically rotate the array clockwise by one. 

#include <iostream>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define fr(i, n, a) for(int i=n-2; i>=a; i--)

int main()
{
    int n;
    cin>>n;
    int arr[n];
    fo(i, 0, n){
        cin>>arr[i];
    }
    int last = arr[n-1];
    fr(i, n, 0){
        arr[i+1] = arr[i];
    }
    arr[0]=last;

    fo(i, 0, n){
        cout<<arr[i]<<" ";
    }  

}