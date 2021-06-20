//Given an array, a[], and an element x,
// find a number of occurrences of x in a[].

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

int main()
{
    vector<int> arr;
    int n, k, count=0;
    cin>>n>>k;
    // cout<<k;
    fo(i, 0, n){
        int temp;
        cin>>temp; 
        arr.pb(temp);      
    }
    map<int, int> m;
    int j=0;
    while(j<n){

        m[arr[j]]++;
        j++;
        
        // cout<<m[arr[i]]<<" ";
    }
    int ans = m[k];
    cout<<ans<<endl;
}
