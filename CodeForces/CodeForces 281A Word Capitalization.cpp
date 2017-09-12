//Problem: CodeForces 281A Word Capitalization (http://codeforces.com/problemset/problem/281/A)
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin>>s;

	for(int i=0; i<s.length(); i++)
    {
        if(i==0)
        {
            if(int(s[i])>=97 && int(s[i])<123)
            {
                cout<<char(s[i]-32);
            }
            else
            {
                cout<<char(s[i]);
            }
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;

	return 0;
}
