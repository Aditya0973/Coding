#include <iostream>

using namespace std;

class Wall
{
    public:
    
    Wall(int l,int b)
    {
     cout<<l*b<<endl;
    }
    Wall(float l,float b)
    {
     cout<<l*b<<endl;
    }
    Wall(int l,float b)
    {
     cout<<l*b<<endl;
    }
    
};

int main()
{
float t=10.2;
Wall w(5,20);
Wall w1(2.5f,2.5f);
Wall w3(5,2.5f);
if(t==10.2f)
cout<<"True";

}