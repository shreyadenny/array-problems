#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)

string reverse(int n, string myString){
    fo(i, 0, n/2){
        char c = myString[i];
        myString[i] =  myString[n-i-1];
        myString[n-i-1] = c;
    }
    return myString;

}

int32_t main()
{
    string ourString;
    cin>>ourString;
    int n = ourString.length();
    
    cout<<reverse(n, ourString);
}