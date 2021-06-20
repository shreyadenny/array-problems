//Given an array with all distinct elements,
// find the largest three elements.
// Expected time complexity is O(n) and extra space is O(1).

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back

void findDistinctNumbers(vector<int> in){
    int first, second, third;
     first = second = third = INT_MIN;
     if(in.size()<3){
         cout<<"invalid input"<<endl;
         return;
     }
     fo(i, 0, in.size()){
         if(in[i]>first){
             third = second;
             second = first;
             first = in[i];
         }
         else if(in[i]>second){
             third = second;
             second = in[i];
         }
         else if(in[i]>third){
             third = in[i];
         }
     }
     cout<<first<<" "<<second<<" "<<third;
}

int main(){
    int input;
    vector<int> in;
    while(cin>>input){
        in.pb(input);
    }
    findDistinctNumbers(in);
}