#include<bits/stdc++.h>

using namespace std;

int main()
{
    int w,i,j, sum=0,counts=0;
    cin>>w;

    for (i=1,j=w-1; i<w&&j>0; i++,j--)
    {
        sum=i+j;

        if(sum==w && i%2==0 && j%2==0)
        {
            counts++;
        }
    }

    if(counts>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
