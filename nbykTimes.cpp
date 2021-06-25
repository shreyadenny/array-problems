//Given an array of size n, find all elements
// in array that appear more than n/k times.
// For example, if the input arrays is
// {3, 1, 2, 2, 1, 2, 3, 3} and k is 4,
// then the output should be [2, 3]. 
//Note that size of array is 8 (or n = 8),
// so we need to find all elements that
// appear more than 2 (or 8/4) times. 
//There are two elements that appear more 
//than two times, 2 and 3. 

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

void findNbyKElements(vector<int> in, int n, int k){
    int occ = n/k;
    map<int, int> m1;
    fo(i, 0, n){
        m1[in[i]]++;
    }
    for(int t=0; t<m1.size(); t++){
        if(m1[t] > occ){
            cout<<t<<" ";
        }
    }
}

int main(){
    int input;
    int k;
    cin>>k;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    int n = in.size();
    findNbyKElements(in, n, k);
}