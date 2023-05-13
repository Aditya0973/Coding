#include <iostream>

using namespace std;

int main()
{
    int  y,l=1,x=1,i,j,k,sp=20;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=sp;k++)
        {
            cout<<" ";
        }
            for(j=x;j<=i;j++)
            {
              for(y=1;y<=l;y++)
           cout<<j<<" ";
             }
             l=l+2;
             x=x+1;
       sp=sp-2;
    cout<<endl;
    }
return 0;
}