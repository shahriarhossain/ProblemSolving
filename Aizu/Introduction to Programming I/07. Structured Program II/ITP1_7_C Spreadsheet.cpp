#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  
int main() {
    int r, c;
    cin>>r>>c;
    int a[r+1][c+1];
 
    //taking input
    for(int i=0; i<r; i++)
    {
        int rsum ;
        rsum = 0;
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
            rsum +=a[i][j];
        }
        a[i][c] = rsum;
    }
 
 for(int i=0; i<=c; i++)
    {
        int csum = 0;
        for(int j=0; j<r; j++)
        {
            csum +=a[j][i];
        }
        a[r][i] = csum;
    }
 
    for(int i=0; i<=r; i++) 
    {
        for(int j=0; j<=c; j++)
        {
            cout<<a[i][j] << (j!=c ? " " : "" );
        }
        cout<<endl;
     }
}