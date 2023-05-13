#include <iostream>

using namespace std;

class Area
{
    public:
    
    void Find_Area(int l,int b)
    { 
     cout<<"Area of rectangle: "<<l*b<<endl;
    }
    void Find_Area(float r)
    {
     cout<<"Area of circle: "<<3.14*(r*r)<<endl;
    }
    void Find_Area(int l)
    {
     cout<<"Area of square: "<<l*l<<endl;
    }    
};

int main()
{
Area a;
a.Find_Area(6,4);
a.Find_Area(3);
a.Find_Area(5);
}