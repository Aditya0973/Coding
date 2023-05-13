#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int i,x,y,a=0;
    cout<<"Enter Five No. ";
    for(i=0;i<5;i++)
    cin>>arr[i];
    cout<<"Value are ";
    for(i=0;i<5;i++)
    cout<<arr[i]<<"\t";
    cout<<"\nFind Number: ";
    cin>>x;
    for(i=0;i<5;i++)
    {
        if(x==arr[i])
        {
           cout<<"Enter for replace number";
           cin>>y;
            arr[i]=y;
        a++;
        }
    }

    if(a==0)
    cout<<"Number was not found"<<endl;
    else
    {
        cout<<"After replacing Values are ";
    for(i=0;i<5;i++)
    cout<<arr[i]<<"\t";
    }
    
return 0;
}