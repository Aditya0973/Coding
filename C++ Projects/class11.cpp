#include <iostream>

using namespace std;

class Wall
{
    public:
    
    Wall(int l)
    {
     cout<<"Square: "<<l*l<<endl;
    }
    ~Wall()//destructor
    {
        cout<<"Bye";
    }
    
};
int main()
{
Wall w(6);

}