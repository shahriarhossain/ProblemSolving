#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
    string s;
    int c[26] = { 0 };
    while(getline(cin, s))
    {
        for(int i=0; i<s.length(); i++)
        {
            //If it is upper case, make it lowercase... The input count for corresponding lowercase character value will be increment by one according to the example provided in the input.
            if ((int)s[i]>64 && (int)s[i]<92)
            {
                s[i] = s[i] - 'A' + 'a';
            }
 
            // Special character (Space, # $ % . etc) may come in input, don't process those....
            if((int)s[i]>96 && (int)s[i]<124)
            {
                int index = (int)s[i] - 'a' ;
                c[index] = c[index]  +1;
            }
        }
    }
    for(int i = 0; i<26; i++)
        {
            char ch ;
            ch = i + 'a';
            cout<<ch << " : " << c[i] << "\n";
        }
    return 0;
}