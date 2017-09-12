//Problem: CodeForces 486A Calculating Function (http://codeforces.com/problemset/problem/486/A)

#include <iostream>
using namespace std;

int main() {
    long long  n;
    	long long res = 0;

        cin>>n;

        if(n%2==0)
        	res = n/2;
      	else
        	res = -((n+1)/2);
	cout<<res;

	return 0;
}
