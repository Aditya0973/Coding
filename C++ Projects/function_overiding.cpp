#include <iostream>

using namespace std;

class base
{
    public:
    void print()
    {
        cout<<" Base class \n";
    }
};
class derived : public base
{
    public:
   virtual void print()
    {
        cout<<"Derived class";
    }
};

int main()
{
    /*derived d,d1;
    d.print();
    d1.base :: print();*/

    derived dr;
    base &bs=dr;
    bs.print();
    dr.print();
return 0;
}