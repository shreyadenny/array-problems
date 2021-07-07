/*Write a function which takes an array
and prints the majority element (if it exists),
otherwise prints “No Majority Element”. A 
majority element in an array A[] of size n
is an element that appears more than n/2
times (and hence there is at most one such element). 
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

void majorityElement(vector<int> in){
    int n = in.size();
    map<int, int> m1;
    int ans;
    fo(i, 0, n){
        m1[in[i]]++;
        if(m1[in[i]]>n/2){
            cout<<in[i];
            return;
        }
    }
    cout<<"No majority element found";
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    majorityElement(in);
}