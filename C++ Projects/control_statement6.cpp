#include <iostream>  
using namespace std;  
int main()  
{  
   int n,n1=1,n2=2; 
  cout<<"Enter any Number: ";    
 cin>>n;    
  while(n2<=n)
  {    
      n1=n1*n2;
      n2=n2+1;  
  }    
  cout<<"Factorial is: "<<n1<<endl;  
  return 0;  
}  