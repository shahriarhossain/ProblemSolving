#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  
int main() {
    int n, x;
    while(cin>>n>>x && !(n==0 && x==0))
    {
        int c=0; //initialization must be inside while i.e. when a test case start processing.
        for(int i=1; i<=n-2; i++)
        {
             for(int j=i + 1; j<=n-1 ; j++)
             {
                for(int k = j + 1; k<=n; k++)
                {
                    if(i+j+k == x) c++;
                }
            }
        }
    cout<<c<<endl;
    }
}