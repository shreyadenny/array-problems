#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)

void insertionSort(int n, int arr[]){
    
    fo(i, 1, n){
        int key = arr[i];
        int j = i - 1;
        while(0<=j){
            if(key<arr[j]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;                
            }
            j--;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    fo(i, 0, n){
        cin>>arr[i];
    }
    insertionSort(n, arr);
    fo(i, 0, n){
        cout<<arr[i]<<" ";
    }
}