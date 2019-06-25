#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n, x;
	int mina = INT_MAX;
	int maxa = -INT_MAX;
	cin>>n;
	long long s = 0 ;
	
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x > maxa) {  maxa = x ; }
		if(x < mina) {  mina = x ; }
		s += x;
	}

	cout<<mina << " " << maxa << " " <<s <<endl;
	return 0;
}
