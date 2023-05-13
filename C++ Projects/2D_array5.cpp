#include <iostream>

using namespace std;

int main()
{
int i,j,sum=0;
int x[3][3];
cout<<"Enter 3*3 values for matrix"<<endl;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cin>>x[i][j];
       
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cout<<x[i][j]<<"\t";
    cout<<endl<<endl;
    }
    
    for(i=0;i<3;i++)
    {
    
       for(j=i;j<=i;j++)
       sum = x[i][j] + sum;
    }
    cout<<"Diagonal sum "<<sum<<endl;
    
    



return 0;
}