#include <iostream>

using namespace std;

int main()
{
int i,j,sum=0;
int arr[3][3];
cout<<"Enter 3*3 values"<<endl;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cin>>arr[i][j];
       
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        cout<<arr[i][j]<<"\t";
    cout<<endl;
        
    }
    for(i=0;i<3;i++)
    {
        sum=0;
       for(j=0;j<3;j++)
       sum=arr[i][j]+sum;
    cout<<"Row sum "<<sum<<endl;
    
    }

return 0;
}