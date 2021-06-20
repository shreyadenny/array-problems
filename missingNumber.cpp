//You are given a list of n-1 integers
// and these integers are in the range
// of 1 to n. There are no duplicates 
//in the list. One of the integers is
// missing in the list. Write an efficient
// code to find the missing integer.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int totSum = (n*(n+1))/2;
    // cout<<totSum;
    int sum =0;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        
    }
    for(int i=0; i<n-1; i++){
        sum = sum + arr[i];
    }
    // cout<<sum;
    int ans = totSum - sum;
    cout<<ans<<endl;
}