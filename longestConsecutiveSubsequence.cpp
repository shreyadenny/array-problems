//Given an array of integers, find the length of 
//the longest sub-sequence such that elements
// in the subsequence are consecutive integers,
// the consecutive numbers can be in any order. 

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

int findLongestSubsequence(vector<int> in, int n){
    int count =1;
    map<int, int> m1;
    
    fo(i, 0, n){
        m1[in[i]]++;    }

    fo(i, 0, n){
        int c = 1;
        int j = (in[i]+1);
        while(m1[in[i]-1]==0){
            if(m1[j]>0){
                c++;
            }
            else{
                count = max(c, count);
                break;
            }
            j++;
        }
    }

    return count;
}

int main(){
    int input;
    
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    int n = in.size();
    cout<<findLongestSubsequence(in, n);
}