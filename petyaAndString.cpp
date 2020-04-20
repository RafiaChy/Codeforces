#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    int f;
  if(s.length()== s1.length())
  {
     int n=s.length();

     for(int i=0; i<n; i++)
     {
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);

            if(s[i]>s1[i])
            {
                f=1;
                break;
            }
            else if(s[i]==s1[i])
            {
                f=0;

            }
            else if(s[i]<s1[i])
            {
                f=-1;
                break;
            }

     }

  }

    cout<<f<<endl;

    return 0;
}
