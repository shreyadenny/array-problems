/*
Given a matrix of size r*c. Traverse the matrix in spiral form.
*/


#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for(int i=a; i<n; i++)
#define pb push_back 

vector<int> printSpiral(vector<vector<int>> A, int r, int c){
    int T,B,L,R,dir;
    T=0;
    B=A.size()-1;
    L=0;
    R=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}

void printMatrix(int r, int c, vector<vector<int>> matrix){
    cout<<"hey";
    fo(i, 0, r){
        fo(j, 0, c){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printVector(vector<int> ans){
    fo(i, 0, ans.size()){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int r, c;
    cin>>r>>c;
    int temp;
    vector<vector<int>> matrix(r);
    fo(i,0,r){
        fo(j,0,c){
            cin>>temp;
            matrix[i].pb(temp);
        }
    }
    
    // printMatrix(r, c, matrix);
    printVector(printSpiral(matrix, r, c));

}