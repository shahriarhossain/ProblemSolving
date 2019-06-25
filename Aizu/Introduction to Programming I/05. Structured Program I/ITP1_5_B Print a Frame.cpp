#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int h, w;
	while(cin>>h>>w && !(h==0 && w==0))
	{
		for(int i=0; i<h; i++)
		{
			for(int j=0; j<w; j++)
			{
				if(i==0 || i==h-1) { cout<<"#"; continue; }
				if( (i!=0 &&  j==0) ||  (i!=0 && j==w-1) || (h-1!=0 &&  j==0) ||  (h-1!=0 && j==w-1) ) { cout<<"#"; } 				
				else { cout<<"."; }
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
