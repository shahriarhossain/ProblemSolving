//Problem: CodeForces 236A Boy or Girl (http://codeforces.com/problemset/problem/236/A)

#include <iostream>
#include <set>
using namespace std;

int main() {
	string s;
	cin>>s;
    set<char> uname;

    for(int i=0; i<s.length(); i++)
    {
        uname.insert(s[i]);
    }

    int distinctCount = uname.size();

    if(distinctCount%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

	return 0;
}
