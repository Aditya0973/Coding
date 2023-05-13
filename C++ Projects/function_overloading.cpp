#include <iostream>

using namespace std;

class addition
{
    public:
    void add(int,int);
    void add(float,float);
};
void addition::add(int a,int b)
{
 cout<<a+b<<endl;
}
void addition::add(float a,float b)
{
 cout<<a+bendl;
}
int main()
{
    addition a1;
    a1.add(10,20);
    a1.add(10.2f,20.3f);
    
return 0;
}