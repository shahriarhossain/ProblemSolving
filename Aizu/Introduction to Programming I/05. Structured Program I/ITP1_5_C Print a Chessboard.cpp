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
				if( (i%2==0) && ( j%2==0)) { cout << "#"; continue; } 
				if( (i%2==0) && ( j%2!=0)) { cout << "."; continue; } 

				if( (i%2!=0) && ( j%2==0)) { cout << "."; continue; } 
				if( (i%2!=0) && ( j%2!=0)) { cout << "#"; continue; } 
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
