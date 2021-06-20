//Given an array of integers, and a number ‘sum’,
// find the number of pairs of integers in the
// array whose sum is equal to ‘sum’.
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)

int findPair(int n, int arr[], int sum){
    int ans=0;
    map<int, int> m;
    fo(i, 0, n){
        m[arr[i]]++;
        // cout<<m[arr[i]]<<" ";
    }
    fo(j, 0, n){
        ans = ans + m[sum - arr[j]];
        if(sum - arr[j] == arr[j]){
            ans--;
        }
    }
    return ans/2;
    }
    


int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    fo(i, 0, n){
        cin>>arr[i];
    }

    cout<<findPair(n, arr, sum)<<endl;
}