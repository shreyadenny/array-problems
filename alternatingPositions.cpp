//Given an array of positive and negative numbers,
// arrange them in an alternate fashion such that
// every positive number is followed by negative
// and vice-versa maintaining the order of appearance. 
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back

void swap(int * a, int * b){
    int * temp = a;
    a = b;
    b = temp;
}
void rotate(int i, int j, vector<int> in){
    int temp = in[j];
    int x;
    for(x=j; x>i; x--){
        in[x]=in[x-1];
    }
    in[x] = temp;
      
}
void rearrange(vector<int> in){
   int n=in.size();
   int i = 0;
   while(i<n){
       if(i%2==0 && in[i]>0){
           int j = i+1;
           while(j<n){
               if(in[j]<0){
                   cout<<i<<j<<endl;
                   rotate(i, j, in);                  
                   break;
                   break;
               }
               j++;
           }
       }
       else if(i%2==1 && in[i]<0){
           int j = i+1;
           while(j<n){
               if(in[j]>0){
                   rotate(i, j, in);
                   break;
               }
               j++;
           }

       }
       i++;
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
 

    rearrange(in);

    
}
// void printHi(){
//     cout<<"HI";
// }

// void findAlternate(vector<int> in){
//     int n = in.size();
//     vector<int> positive, negative, ans;
//     fo(i, 0, n){
    
//     if(in[i]<0){
//         negative.pb(in[i]);          
//         }
//         else
//         {
//             positive.pb(in[i]);
//         }
//     }
//     int j = 0;
//     int k = 0;
//     fo(i, 0, n){
//         if(i%2==0 && j<negative.size()){
//             ans.pb(negative[j]);
//             j++;
//         }
//         else{
//             ans.pb(positive[k]);
//             k++;
//         }
//     }
//     // fo(i, 0, positive.size()){
//     //     auto pos = positive.begin() + (i+(i+1));
//     //     ans.insert(pos, negative[i]);
//     // }

//     fo(i, 0, ans.size()){
//         cout<<ans[i]<<" ";
//     }

// }

// int main(){
//     int input;
    
//     vector<int> in;
//     while(cin>>input){
//         in.pb(input);
//     }

//     findAlternate(in);
    
//     // fo(i, 0, ans.size()){
//     //     cout<<ans[i]<<" ";
//     // }
    
// }