#include <iostream>

using namespace std;

class enrollment
{
    public:
    int rno;
    char name[20];
    protected:
    void input_data()
    {
        cout<<"Enter roll no: "<<endl;
        cin>>rno;
        cout<<"Enter name: "<<endl;
        cin>>name;
    }

};

class marks : public enrollment
{
    public:
    int Total_marks;
    int marks_obtained;
    marks()
    {
        Total_marks=100;
    }
    void input_marks()
    {
        input_data();
        cout<<"Enter marks obtained: "<<endl;
        cin>>marks_obtained;
    }
    void output_data()
    { 
        cout<<"Roll no: "<<endl;
        cout<<rno<<endl;
        cout<<"Name: "<<endl;
        cout<<name<<endl;
        cout<<"Total Marks: "<<endl;
        cout<<Total_marks<<endl;
        cout<<"Marks Obtained: "<<endl;
        cout<<marks_obtained<<endl;

    }
};
int main()
{
    marks m;
    m.input_marks();
    m.output_data();
return 0;
}