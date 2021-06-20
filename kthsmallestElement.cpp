//Given an array and a number k where k 
//is smaller than the size of the array,
// we need to find the k’th smallest element
// in the given array. It is given that all 
//array elements are distinct.

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
    fo(i, 0, n){
        m[arr[i]]++;
        // cout<<m[arr[i]]<<" ";
    }
    
    int ans;
    for(auto j = m.begin(); j != m.end(); j++){
        count += (j->second);
        // cout<<count<<" ";
        
        if(count >= k)
        {
            ans = (j->first);
            cout<<ans;
            break;
        }
    }
    
    // cout<<ans;

}