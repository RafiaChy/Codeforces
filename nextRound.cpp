#include<bits/stdc++.h>
#include<vector>


using namespace std;

int main()
{
        int n, k,p, counts=0;
        vector<int>v;


        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            cin>>p;
            v.push_back(p);

        }
    for( int i=0; i<n; i++)
    {
        sort(v.begin(), v.end(), greater<int>());



       if(v[i]!=0)
      {

            if(v[k-1]==v[i]|| v[k-1]<v[i])
                {
                    counts++;
                }
       }

    }
    cout<<counts<<endl;


    return 0;
}
