//Problem : CodeForces 263A Beautiful Matrix (http://codeforces.com/problemset/problem/263/A)
#include <iostream>
using namespace std;

int main() {
    int m[5][5];
    int result = 0;
    //populating matrix
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>m[i][j];
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(m[i][j]==1)
            {
                int r1 = i>=2 ? i-2 : 2-i;
                int r2 = j>=2 ? j-2 : 2-j;
                result = r1 + r2;
            }
        }
    }
    cout<<result<<endl;
	return 0;
}
