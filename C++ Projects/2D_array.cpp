#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int arr[3][5];

    cout<<"Enter 3*5 values"<<endl;
    for(i=0;i<3;i++)
    {
       for(j=0;j<5;j++)
       {
           cin>>arr[i][j];
       }     
    }

    cout<<"Values are ";
    for(i=0;i<3;i++)
    {
       for(j=0;j<5;j++)
       {
           cout<<arr[i][j]<<"\t";
       }    
       cout<<endl;

    }    
    
return 0;
}