#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,i,j, countsk=0;
    int a[3];
    cin>>n;

    for(i=0; i<n; i++)
    {
        int counts=0;
        for(j=0; j<3; j++)
        {
            cin>>a[j];

            if(a[j]==1)
            {
                counts++;
                if(counts==2)
                {
                    countsk++;
                }
            }
        }
    }

    cout<<countsk<<endl;



    return 0;

}
