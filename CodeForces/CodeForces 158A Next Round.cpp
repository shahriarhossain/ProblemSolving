//Problem : CodeForces 158A Next Round
#include <iostream>
using namespace std;

int main() {
    int n, k;
    int count = 0;
    cin>>n>>k;
    int p[n];


    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }

    if(p[k-1]!=0)
    {
        for(int i=0; i<sizeof(p)/sizeof(p[0]); i++)
        {
            if(p[i]>=p[k-1])
                count+=1;
        }
    }
    else
    {
        for(int i=0; i<sizeof(p)/sizeof(p[0]); i++)
        {
            if(p[i]>p[k-1])
                count+=1;
        }
    }

    cout<<count<<endl;

	return 0;
}
