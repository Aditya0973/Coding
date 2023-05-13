#include <iostream>

using namespace std;

int main()
{
    int exp,sal;
    
    cout<<"Enter Experience and salary";
    cin>>exp>>sal;
    
    if(exp>=10)
    sal=sal+5000;
    else
    sal=sal+2000;
    cout<<"sal"<<sal;
return 0;

}