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
     cout<<"Area of circle: "<<(3.14*(r*r))<<endl;
    }
    void Find_Area(int l)
    {
     cout<<"Area of square: "<<l*l<<endl;
    }    
};

int main()
{
int choice;
int l,b;
float r;
int s;
Area a;
cout<<"\n 1.rectangle area \n";
cout<<"\n 2.circle area \n";
cout<<"\n 3.square area \n";
cout<<"\n Enter choice: \n";
cin>>choice;

switch (choice)
{
case 1:
    cout<<"\n Enter length and breadth: \n";
    cin>>l;
    cin>>b;
    a.Find_Area(l,b);
    break;

case 2:
    cout<<"\n Enter radius: \n";
    cin>>r;
    a.Find_Area(r);
    break;

case 3:
    cout<<"\n Enter side: \n";
    cin>>s;
    a.Find_Area(s);
    break;    

default:
cout<<"Wrong choice";
}
}