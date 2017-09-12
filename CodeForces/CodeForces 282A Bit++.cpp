//Problem : CodeForces 282A Bit++
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
    int x = 0;
    cin>>t;
    string op;
    while(t--)
    {
        cin>>op;
        if(op=="X++" || op== "++X")
            x++;
        if(op=="X--" || op== "--X")
            x--;
    }

    cout<<x<<endl;

	return 0;
}
