//Given an array of n elements that 
//contains elements from 0 to n-1, 
//with any of these numbers appearing any
// number of times. Find these repeating 
//numbers in O(n) and using only constant memory space.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back

int main(){
    int n;
    cin>>n;
    int arr[n];
    fo(i, 0, n){
        cin>>arr[i];
    }
    // cout<<"hello";
    vector<int> ans;
        int i;
        for(i=0; i<n; i++){
        if(arr[abs(arr[i])] >= 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else{   
            ans.push_back(abs(arr[i]));
            // cout<<(arr[0]);
        }      
    }
    if(i==n && ans.empty()){
        ans.push_back(-1);
    }
    fo(i, 0, ans.size()){
        cout<<ans[i]<<" ";
    }
}
