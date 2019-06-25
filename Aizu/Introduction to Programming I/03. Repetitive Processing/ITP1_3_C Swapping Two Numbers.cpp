#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int x, y;

    //approach 1
    //cin>>x>>y;
    //while(!(x==0 && y==0))

    //apprach 2
    //while(true){ cin>>x>>y; if(x==0 && y==0) break;}    

    //approach 3
    while(cin>>x>>y && !(x==0 && y==0))
	{
		if( x > y) cout << y << " " << x << endl;
		else cout << x << " " << y << endl;
	}
	return 0;
}