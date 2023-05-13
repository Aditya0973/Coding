#include <iostream>

using namespace std;

class Wall
{
    public:
    
    Wall(int l)
    {
     cout<<"Square: "<<l*l<<endl;
    }
    Wall(int l,int b)
    {
     cout<<"Multiply: "<<l*b<<endl;
    }
    Wall(int l,int b,int h)
    {
     cout<<"Sum: "<<l+b+h<<endl;
    }
    Wall(int l,int b,int h,int j)
    {
     cout<<"(a*b)+(c*d): "<<(l*b)+(h*j)<<endl;
    }
    ~Wall()
    {
    cout<<"Hi";
    }
};
int main()
{
Wall w(6);
Wall w1(6,4);
Wall w3(6,4,5);
Wall w4(6,4,5,5);
}