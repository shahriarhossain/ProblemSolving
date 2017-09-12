//Problem : CodeForces 58A Chat Room (http://codeforces.com/problemset/problem/58/A)
#include <iostream>
using namespace std;

int main() {
    string target = "hello";
    int res=0;
    string s;
    cin>>s;

    int startIndex = 0;

    for(int i=0; i<target.length(); i++)
    {
        for(int j=startIndex; j<s.length(); j++)
        {
            if(target[i]==s[j])
            {
                res++;
                startIndex=j+1;
                break;
            }
        }
    }

    if(res==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

	return 0;
}
