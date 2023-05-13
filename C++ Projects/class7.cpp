#include <iostream>

using namespace std;

class Wall
{
    public:
    int length;
    int breadth;
    
    Wall(int l,int b)
    {
     length=l;
     breadth=b;
     cout<<length*breadth;
    }
    
};

int main()
{

Wall w(5,20);

}