/*
Given an odd integer n, 
find a matrix of size n x n with following conditions: 

Each cell contains an integer from 1 and n (inclusive).
No integer appears twice in the same row or the same column.
All 1’s must be at every possible distance from the center 
of the matrix. The center of a n x n square is cell ((n-1)/2, (n-1)/2)
 for odd n.
*/

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

int arr[100][100];

void fillRemaining(int i, int j, int n)
{
    // Initialize value to be filled
    int x = 2;
 
    // Fill all values below i as 2, 3, ...p
    for (int k = i + 1; k < n; k++)
        arr[k][j] = x++;
 
    // Fill all values above i
    // as p + 1, p + 2, .. n
    for (int k = 0; k < i; k++)
        arr[k][j] = x++;
}

void printMatrix(int n){
    fo(i, 0, n){
        fo(j, 0, n){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void uniqueMatrix(int n){
    int l=0; 
    int r=n-1;
    fo(i, 0, n){
        if(i%2==0){
            arr[i][r]=1;
            fillRemaining(i, r, n);
            r--;

        }
        else{
            arr[i][l]=1;
            fillRemaining(i, l, n);
            l++;
        }
    }
    printMatrix(n);
}

int main(){
    int n;
    cin>>n;
    uniqueMatrix(n);
}