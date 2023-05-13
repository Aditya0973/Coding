#include <iostream>

using namespace std;

int main()
{
    int exp,sal,hra,allow,ec;

    
    cout<<"Enter Experience and salary";
    cin>>exp>>sal;
    
    if(exp>=10)
    {
      hra=(sal*5)/100;
      allow=3000;
      ec=1000;
      sal=sal+5000+hra+allow+ec;

    }
    else
    {
      hra=(sal*3)/100;
      allow=1000;
      ec=500;
      sal=sal+2000+hra+allow+ec;

    }
    cout<<"Your Salary="<<sal; 
return 0;

}