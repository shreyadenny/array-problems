//Given an array of integers,
// find the first repeating element in it.
// We need to find the element that occurs
// more than once and whose index of first occurrence is smallest. 

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back

void finRep(vector<int> in){
    map<int , int> m1;
    fo(i, 0, in.size()){
        m1[in[i]]++;
    }
    fo(i, 0, in.size()){
        if(m1[in[i]]>1){
            cout<<in[i]<<" ";
            return;
        }
    }
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    finRep(in);
}