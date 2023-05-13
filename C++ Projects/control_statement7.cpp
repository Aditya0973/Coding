#include <iostream>

using namespace std;

int main()
{
    int n,i=2,x;
cout<<"Enter a number ->";
cin>>n;

while(i<=n-1)
{  
x=n%i;
    if(x==0)
    {
    cout<<"Not a prime number"; 
    break;   
    }
i=i+1;
}
if(i==n)
{
cout<<"It is a Prime Number";
}


return 0;
}