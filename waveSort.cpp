/*Given an unsorted array of integers,
 sort the array into a wave like array. 
 An array ‘arr[0..n-1]’ is sorted in wave
  form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void waveSort(vector<int> in){
    for(int i=0; i<in.size(); i=i+2){
        if(i>0 && in[i]<in[i-1]){
            swap(&in[i], &in[i-1]);
            // cout<<i<<" "<<in[i]<<" "<<i-1<<" "<<in[i-1]<<" ";
        }
        if(in[i]<in[i+1] && i<in.size()-1){
            swap(&in[i], &in[i+1]);
            // cout<<in[i]<<" "<<in[i+1]<<" ";
        }
    }
    fo(i, 0, in.size()){
        cout<<in[i]<<" ";
    }
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    waveSort(in);
    
}