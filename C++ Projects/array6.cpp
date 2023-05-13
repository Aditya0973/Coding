#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i,x,a=0;
    cout<<"Enter Five No. ";
    for(i=0;i<5;i++)
    cin>>arr[i];

    cout<<"\nValue are ";
    for(i=0;i<5;i++)
    cout<<arr[i]<<"\t";

    cout<<"\nCount digit of: ";
    cin>>x;
    for(i=0;i<5;i++)
    if(x==arr[i])
    a++;
    cout<<"\nNumber of times "<<x<<" occurs is: "<<a;

    
return 0;
}