//Given an array of positive and negative numbers,
// find if there is a subarray (of size at-least one) with 0 sum.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

bool subArray(int n, vector<int> in){
    // int j = 0;
    // // cout<<n<<endl;
    //  int i;
    // int sum;
    // while(sum != 0 && j<n){
    //     sum = in[j];
    //     // cout<<sum<<" "<<i<<" "<<j<<endl;
    //     i = j+1;
    //     while(sum!=0 && (i<n)){
    //         sum = sum + in[i];
    //         // cout<<sum<<" "<<i<<" "<<j<<endl;
    //         i++;
    //     }
    //     j++;
    // }
    // if(sum==0){
    // return true;}
    // else{ return false;}
    map<int, int> m1;
    m1[in[0]]++;
    int sum = in[0];
    fo(i, 1, n){
        sum = sum + in[i];
        m1[sum]++;
        if(m1[sum]>1 || sum == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int input;
    
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    int n = in.size();
    if(subArray(n, in)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
