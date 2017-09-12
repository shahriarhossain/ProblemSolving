//Problem: CodeForces 96A Football (http://codeforces.com/problemset/problem/96/A)

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin>>s;
    int contiguous  =1;
    bool res =0;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1])
        {
            contiguous ++;
            if(contiguous ==7)
            {
                cout<<"YES"<<endl;
                res = 1;
                break;
            }
        }
        else
            contiguous =1;
    }
    if(res==0)
    {
      cout<<"NO"<<endl;
    }

	return 0;
}
