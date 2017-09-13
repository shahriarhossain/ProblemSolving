//Problem: CodeForces 467A George and Accommodation (http://codeforces.com/problemset/problem/467/A)

#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
    int count = 0;
    int p, q;
    while(n--)
    {
        cin>>p>>q;
        if(q-p>=2) //since George and Alex wants to stay together
        {
            count++;
        }
    }
    cout<<count<<endl;

	return 0;
}
