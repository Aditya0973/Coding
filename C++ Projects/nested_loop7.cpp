#include <iostream>

using namespace std;

int main()
{
    int i,j,k,sp=20;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=sp;k++)
        {
            cout<<" ";
        }
            for(j=1;j<=(i*2)-1;j++)
            {

           cout<<j<<" ";
             }
       sp=sp-2;
    cout<<endl;
    }
return 0;
}