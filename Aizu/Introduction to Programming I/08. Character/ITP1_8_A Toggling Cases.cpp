#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
 
    for(int i=0; i<s.length(); i++)
    {
        if((int)s[i]>=65 && (int)s[i]<=91)    //Ascii value of A = 65
        {
            s[i] = s[i]-'A' + 'a' ;
        }
        else if((int)s[i]>=97 && (int)s[i]<=122)
        {
            s[i] = s[i] - 'a'  +  'A' ;
        }
    }
    cout <<s <<'\n';
    return 0;
}