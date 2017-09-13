//Problem : CodeForces 266A Stones on the Table (http://codeforces.com/problemset/problem/266/A)
#include <iostream>

using namespace std;

int main() {
    int len;
    cin>>len;
    string s;
    cin>>s;
    int count =0;
    for(int i=1; i<len; i++)
    {
        if(s[i-1]==s[i])
        {
            count++;
        }
    }

    cout<<count<<endl;
	return 0;
}
