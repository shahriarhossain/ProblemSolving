#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int x; 
	vector<int> v(3);
	cin>>v[0]>>v[1]>>v[2];

//	vector<int> v;
//	for(int i=0 ; i<3; i++)
//	{
//		cin>>x;
//		v.push_back(x);
//	}

	sort(v.begin(), v.end());
	int c = 0;
	for(auto it = v.begin(); it !=v.end(); it++)
	{
		c++;
		if(c==v.size()) cout << *it ;
		else cout << *it << " ";
	}
	//cout << v[0] << " " << v[1] << " " << v[2];
        cout<<'\n';
	return 0;
}