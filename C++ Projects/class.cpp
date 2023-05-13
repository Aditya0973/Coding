#include <iostream>

using namespace std;

class number
{
    public:
    int x;
    int y;
    void add()
    {
        cout<<"Enter two numbers: ";
        cin>>x>>y;
        cout<<x+y;
    }
};

int main()
{
    number n1;
    n1.add();
return 0;
}