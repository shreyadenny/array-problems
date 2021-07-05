/*
Given two arrays: arr1[0..m-1] and arr2[0..n-1].
 Find whether arr2[] is a subset of arr1[] or not.
  Both the arrays are not in sorted order. 
  It may be assumed that elements in both array are distinct.
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

bool checkSubarray(int ar1[], int m, int ar2[], int n){
    map<int, int> m1;
    fo(i, 0, m){
        m1[ar1[i]]++;
    } 
    fo(i, 0, n){
        if(m1[ar2[i]]>0){
            m1[ar2[i]]--;
        }
        else{
            return 0;
        }
    }
    return 1;

}

void printArray(int arr[], int n){
    fo(i, 0, n){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int m, n;
    cin>>m>>n;
    int ar1[m], ar2[n];
    fo(i, 0, m){
        cin>>ar1[i];
    }

    fo(i, 0, n){
        cin>>ar2[i];
    }

    if(checkSubarray(ar1, m, ar2, n))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}