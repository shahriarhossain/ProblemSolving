#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    int w, h, x, y, r;
    cin>>w>>h>>x>>y>>r;
 
    if(x<0 || y<0)  //checking constraint condition since x, y can be less then 0
        {
            cout<<"No" <<endl; 
            return 0 ; 
    } 
 
    if( (x+r)<=w && (y+r)<=h) cout<< "Yes" <<endl;
    else cout <<"No" <<endl;
    return 0;
}