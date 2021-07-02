//Given an array and a value, find if there
// is a triplet in array whose sum is equal
//to the given value. If there is such a 
//triplet present in array, then print the 
//triplet and return true. Else return false.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

bool tripletSum(int n, vector<int> in, int sum)
{
    fo(i, 0, n-2){
        //cout<<i<<endl;
        int check = sum - in[i];
        //cout<<check<<endl;
        int s = i+1;
        int e = n-1;
        while(s!=e){
            //cout<<s<<endl;
        //cout<<e<<endl;
            //cout<<in[s]+in[e]<<endl;
            if(in[s]+in[e]==check){
                return true;
            }
            else if(in[s]+in[e]>check){
                e--;
            }
            else{
                s++;
            }
        }
    }
    return false;
}

int main(){
    int input;
    int sum;
    cin>>sum;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    int n = in.size();
    sort(in.begin(), in.end());
    cout<<tripletSum(n, in, sum);
}