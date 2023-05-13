#include <iostream>

using namespace std;

int main()
{
    int i,j,k=5;
    /*for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }*/
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=k;j++)
        {
         cout<<j<<" ";
        }
        k--;
        cout<<endl;
    }
return 0;
}