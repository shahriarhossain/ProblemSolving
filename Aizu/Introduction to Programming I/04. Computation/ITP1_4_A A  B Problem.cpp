#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int a, b;
	double c;
	cin>>a>>b;
	c = (double)a/b;
	cout<<fixed<<setprecision(5) <<a/b << " " << a%b << " " << c <<endl;
	return 0;
}