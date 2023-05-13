#include <iostream>

using namespace std;

class Box
{
    public:
    int length;
    private:
    void setlength(int);
    public:
    void print();

};
class Rectangle
{
    public:
    void printdata();
};
void Rectangle::printdata()
{
    Box a;
    cout<<"in rect "<<a.length;
}
void Box::setlength(int l)
{
    length=l;
}
void Box::print()
{
    setlength(20);
    cout<<length;
}
int main()
{
   
    Box b;
    Rectangle r;
   // b.setlength(10);
    b.print();
    r.printdata();
return 0;
}