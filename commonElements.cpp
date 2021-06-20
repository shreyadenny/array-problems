//Given three arrays sorted in non-decreasing order,
// print all common elements in these arrays.

#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back

void findCommon(int a, int p[], int b, int q[], int c, int r[]){
    map<int, int> m1;
    map<int, int> m2;
    map<int, int> m3;

    fo(i, 0, a)
    {
        m1[p[i]]++;
    }
    fo(i, 0, b)
    {
        m2[q[i]]++;
    }
    fo(i, 0, c)
    {
        m3[r[i]]++;
    }

    fo(i, 0, a)
    {
        if(m1[p[i]]>0 && m2[p[i]]>0 && m3[p[i]]>0){
            cout<<p[i]<<" ";
            m1[p[i]]=0;
        }
    }
}

int main(){
      int a, b, c;
      cin>>a;
      int p[a];
      fo(i, 0, a){
          cin>>p[i];
      }
      cin>>b;
      int q[b];
      fo(i, 0, b){
          cin>>q[i];
      }
      cin>>c;
      int r[c];
      fo(i, 0, c){
          cin>>r[i];
      }  

      findCommon(a, p, b, q, c, r);     

}