//Problem : CodeForces 118A String Task
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if((int)s[i]<97) //if uppercase then convert it to lowercase A=65, a=97
        {
           s[i]+=32;
        }

        if(!(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'))
        {
            cout<<"."<<s[i];
        }
    }

	return 0;
}
