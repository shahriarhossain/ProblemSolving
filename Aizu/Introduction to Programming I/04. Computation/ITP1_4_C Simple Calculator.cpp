#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int a, b; 
	char s;
	while(true)
	{
		cin>>a>>s>>b;
		if(s == '?') break;
		if(s == '+') cout<< a+b <<endl;
		if(s == '-') cout<< a-b <<endl;
		if(s == '*') cout<< a*b <<endl;
		if(s == '/') cout<< a/b <<endl;
	}
	return 0;
}
