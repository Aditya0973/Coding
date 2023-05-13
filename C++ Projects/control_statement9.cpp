#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,r;    
cout<<"Enter a number: ";    
cin>>n;    
    while(n>0)    
    {    
    r=n%10;    
    n=n/10;  
    sum=sum+r;    
    }    
cout<<"Sum of digits is= "<<sum<<endl;    
return 0;  
}  