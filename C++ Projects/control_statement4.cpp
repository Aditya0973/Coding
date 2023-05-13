#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    
    cout<<"Enter first number"<<endl;

    cin>>n1;
    cout<<"Enter second number"<<endl;

    cin>>n2;
    if(n1<n2)
    {
    while (n1<n2-1)
    {
       n1=n1+1;
    cout<<n1<<"\t";
    }

    }
    else if(n1>n2)
    {
     while (n1>n2+1)
    {
       n1=n1-1;
    cout<<n1<<"\t";
    }
    
    }

    else
    {
    cout<<"Both numbers are equal";

    }
return 0;
}