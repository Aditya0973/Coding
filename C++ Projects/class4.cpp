#include <iostream>

using namespace std;

class Box
{
public:
int length;
int breadth;
int height;

int getvolume();
void setlength(int);
void setbreadth(int);
void setheight(int);
};

void Box::setlength(int l)
{
    length=l;
}
void Box::setbreadth(int b)
{
    breadth=b;
}
void Box::setheight(int h)
{
    height=h;
}

int Box::getvolume()
{
    int volume;
    volume=length*breadth*height;
    return volume;
}

int main()
{
    int v;
    Box b;
    b.setlength(10);
    b.setbreadth(20);
    b.setheight(10);
    v=b.getvolume();
    cout<<"Volume is "<<v;
    cout<<"Length = "<<b.length;
return 0;
}