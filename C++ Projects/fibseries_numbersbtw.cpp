#include <iostream>

using namespace std;

int main()
{
    int n,n1=0,n2=1,x;
    int i=1;
    
    cout<<"\nEnter Term ->";
    cin>>n;
    cout<<n1<<"\t"<<n2;
    while (i<n-1 )
    {
        x=n1+n2;
       i=i+1;
       cout<<"\t"<<x;
           n1=n2;
           n2=x;
    }
return 0;
}