#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    string x;
    while(cin>>x && x!="0")
    {
        int sum = 0;
        for(int i=0; i<x.length(); i++)
        {
            sum += x[i] - '0' ;
        }
        cout<<sum<<'\n' ; 
    }
     
    return 0;
}