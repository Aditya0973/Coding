#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i,sum=0;
    cout<<"Enter Five No. ";
    for(i=0;i<5;i++)
    cin>>arr[i];

    cout<<"Sum is ";
    for(i=0;i<5;i++)
    sum=sum+arr[i];
    cout<<sum;
    
return 0;
}