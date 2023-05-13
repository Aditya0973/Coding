#include <iostream>  
using namespace std;  
int main()  
{  
   int i,j,n,m,n1,n2,sum=0; 
   cout<<"Enter Base Number: ";
   cin>>m;
   cout<<"Enter n terms: ";    
   cin>>n;    
  for(i=1;i<=m;i++)
  {    
      
      n1=i;
      
      n2=1;

      for()
          {
            n1=n1*(n2+1);
            n2=(n2+1)+1;  
          }

        for(j=1;j<=n;j++)
        {
        n2=n2*n1;
        }

          
        cout<<endl;
        
      sum=sum+n2;
  }    
  cout<<sum<<endl;  
  return 0;  
}  