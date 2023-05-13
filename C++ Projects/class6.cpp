#include <iostream>

using namespace std;

class Student
{
    public:
    int marks;
    Student()
    {
        marks=10;
        //cout<<marks;
    }

};

int main()
{
Student s;
cout<<s.marks;
}