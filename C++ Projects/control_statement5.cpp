#include <iostream>

using namespace std;

int main()
{
int n,n1=0,n2=1;
cout<<"Enter a number";
cin>>n;



while(n2<=n)
{
n1=n1+n2;
n2=n2+1;
}


cout<<"sum ->"<<n1;

return 0;
}