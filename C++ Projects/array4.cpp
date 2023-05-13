#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i,x,a=0;
    cout<<"Enter Five No. ";
    for(i=0;i<5;i++)
    cin>>arr[i];
    cout<<"Enter another value ";
    cin>>x;
    for(i=0;i<5;i++)
    {if(x==arr[i])
    a++;
    }
    if(a!=0)
    cout<<"Number found";
    else
    cout<<"Number was not found";
return 0;
}