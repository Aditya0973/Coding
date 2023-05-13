#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i,rem,even=0,odd=0;
    cout<<"Enter Five No. ";
    for(i=0;i<5;i++)
    cin>>arr[i];
    for(i=0;i<5;i++)
    {
    rem=arr[i]%2;
    if(rem==0)
    even++;
    else
    odd++;
    }
    cout<<"Number of even numbers "<<even<<endl;
    cout<<"Number of odd numbers "<<odd<<endl;
return 0;
}