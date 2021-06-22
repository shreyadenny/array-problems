//Write an efficient program to find the sum of contiguous
// subarray within a one-dimensional array of numbers that
// has the largest sum. 

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

void contiguousSubarray(int n, vector<int> in){
    int max_so_far = INT_MIN;
    int max_end_here = 0;
fo(i, 0, n){
max_end_here += in[i];
if(max_so_far<max_end_here){
    max_so_far = max_end_here;
}
if(max_end_here<0){
    max_end_here=0;
}
}
cout<<max_so_far;
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }

    int n = in.size();
    contiguousSubarray(n, in);
}