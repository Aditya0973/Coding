#include <iostream>  
using namespace std;  
int main()  
{  
int n,r;
int e=0,o=0;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n>0)    
  {    
     r=n%10;      
     n=n/10; 
        if ( r % 2 == 0)
        e++;
        else
        o++;
  }    
  cout<<e<<"\t";
  cout<<o<<"\t";
    
return 0;  
}  