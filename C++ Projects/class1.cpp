#include <iostream>

using namespace std;

class number
{
    public:
    int sum;
    void add(int x,int y)
    {
     sum=x+y;
     cout<<sum;
    }
};

int main()
{
    int a,b;
    number n;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    n.add(a,b);
return 0;
}