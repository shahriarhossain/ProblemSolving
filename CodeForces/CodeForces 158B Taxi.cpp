//Problem : CodeForces 158B Taxi
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    int nos;
    //int c1, c2, c3, c4, count =0; //his will not work in C++
    int c1=0, c2=0, c3=0, c4=0, count=0 ;

    while(t--)
    {
        cin>>nos;

        if(nos==1)
        {
           c1++;
        }
        else if (nos==2)
        {
            c2++;
        }
        else if(nos==3)
        {
            c3++;
        }
        else
        {
            c4++;
        }
    }

    if(c3>=c1)
    {
        if(c2*2<4 && c2*2!=0)
            count=c3 + c4+ 1;
        else
            count=c3 + c4+ ceil((c2*2)/4.0);
    }
    if(c3<c1)
    {
        int c2c1Count = c2*2 + (c1-c3);
        if(c2c1Count<4)
            count = c3 + c4 + 1;
        else
            count = c3 + c4 + ceil(c2c1Count/4.0);
    }

    cout<<count<<endl;

	return 0;
}
