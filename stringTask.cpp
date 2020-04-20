#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len= s.length();

    for(int i=0; i<len; i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]!=('a')&& s[i]!=('e') && s[i]!=('i')&& s[i]!=('o')&& s[i]!=('u') && s[i]!=('y'))
        {
            printf(".%c",s[i]);

        }

    }



    return 0;

}
