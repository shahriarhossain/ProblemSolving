#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    string s, p; 
    getline(cin, s);
    getline(cin, p);
 
    int sLen = s.length();
    int pLen = p.length();
 
    if(pLen>sLen) return 0; //User can pass bigger pattern then text
 
    for(int i = 0; i<= s.length() - pLen; i++)
    {
        if(s.substr(i, pLen)==p)
        {
            cout<<i<< "\n" ; 
        }
    }
    return 0;
}