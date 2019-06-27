#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    string s, p; 
    cin>>p;
    int pLen = p.length();
    int count = 0;
     
    while(cin>>s)
    {
       if(s == "END_OF_TEXT") break;
       if(s.length()<p.length()) continue;
       for(int i=0; i<s.length(); i++)
       {
            if((int)s[i]>64 && (int)s[i]<92)
            {
                s[i] = s[i]-'A' + 'a';
            }
       }
 
       if(s==p)
       {
            count++;
       }
    }
 
    cout<<count<<"\n";
     
    return 0;
}