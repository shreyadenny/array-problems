//Given an array arr[] and size of array 
//is n and one another key x, and give you
// a segment size k. The task is to find
// that the key x present in every segment
// of size k in arr[].

#include <bits/stdc++.h>
using namespace std;
 
bool findxinkwindowSize(int arr[], int x, int k, int n)
{
    int i;
    for (i = 0; i < n; i = i + k) {
 
        // Search x in segment starting
        // from index i.
        int j;
        for (j = 0; j < k; j++)
            if (arr[i + j] == x)
                break;
 
        // If loop didn't break
        if (j == k)
           return false;
    }
 
    // // If n is a multiple of k
    // if (i == n)
    //    return true;
 
    // // Check in last segment if n
    // // is not multiple of k.
    // int j;
    // for (j=i-k; j<n; j++)
    //   if (arr[j] == x)
    //       break;
    // if (j == n)
    //    return false; 
      
    return true;
}
 
// main driver
int main()
{
    int arr[] = { 5, 8, 7, 1, 8, 3, 0} ;
    int x = 8, k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (findxinkwindowSize(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}