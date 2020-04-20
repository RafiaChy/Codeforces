#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mat[5][5],counts=0,row=0,col=0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>mat[i][j];

            if(mat[2][2]==1)
            {
                counts=0;
            }
            else if(mat[i][j]==1)
            {
                row=i-2;
                col=j-2;

                if(row<0)
                {
                    row=row*-1;
                }
                if(col<0)
                {
                    col=col*-1;
                }

                counts=row+col;

            }
        }


    }

    cout<<counts<<endl;
    return 0;
}
