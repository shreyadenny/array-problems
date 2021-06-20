//Given an array A[] consisting 0s, 1s and 2s.
// The task is to write a function that sorts
// the given array. The functions should put all
// 0s first, then all 1s and all 2s in last.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

int main()
{
    vector<int> arr;
    int n, count=0;
    cin>>n;
    
    fo(i, 0, n){
        int temp;
        cin>>temp; 
        arr.pb(temp);      
    }
    // fo(i, 0, n){
    //     cout<<arr[i]<<" ";
    // }
    map<int, int> m;
    int j=0;
    while(j<n){

        m[arr[j]]++;
        j++;        
        
    }
    // cout<<m[2]<<endl;
        
    fo(i, 0, 3){
        fo(j, 0, m[i]){
            cout<<i<<" ";
        }
    }
   
}
