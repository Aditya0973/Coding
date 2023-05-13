#include <iostream>

using namespace std;

int main()
{
    int n,r,x,sum=0,q;
    cout<<"Enter A Number ->";
    cin>>n;
    q=n;
    do
    {
    r=q%10;
    q=q/10;
    x=r*r*r;
    sum=sum+x;
    }while(q!=0);
    cout<<sum<<"\t";
    
    if(n==sum)
    cout<<" It is a Armstrong number";
    else
    cout<<"It is not armstrong number";
return 0;
}