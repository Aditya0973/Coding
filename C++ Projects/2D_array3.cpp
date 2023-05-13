#include <iostream>

using namespace std;

int main()
{
int i,j,sum=0;
int x[3][3];
int y[3][3];
int z[3][3];
cout<<"Enter 3*3 values for first matrix"<<endl;
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

cout<<"Enter 3*3 values for second matrix"<<endl;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cin>>y[i][j];
       
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cout<<y[i][j]<<"\t";
    cout<<endl<<endl;
    }
    
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       z[i][j]=x[i][j]+y[i][j];
    }
cout<<"Addition of two matrices: ";
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       cout<<z[i][j]<<"\t";
       cout<<endl<<endl;
    }   


return 0;
}