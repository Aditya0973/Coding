#include <iostream>

using namespace std;

class sports_teacher
{
    public:
    int spm;
    int tspm;

    void input_sportsmarks()
    {
        cout<<"Enter Sports Marks : "<<endl;
        cin>>spm;
        cout<<"Enter Total Sports Marks: "<<endl;
        cin>>tspm;    
    }

};
class subject_teacher
{
    public:
    int sbm;
    int tsbm;

    void input_subjectmarks()
    {
        cout<<"Enter Subject Marks : "<<endl;
        cin>>sbm;
        cout<<"Enter Total Subject Marks: "<<endl;
        cin>>tsbm;    
    }

};
class marks : public sports_teacher,public subject_teacher
{
    public:
    int Total_marks;
    int marks_obtained;
    int percentage;
    void output_marks()
    {
        Total_marks=tsbm+tspm;
        marks_obtained=spm+sbm;
        percentage=(marks_obtained/Total_marks)*100;
        cout<<"Total Marks: "<<Total_marks<<endl;
        cout<<"Marks Obtained: "<<marks_obtained<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }

};

int main()
{
    marks m;
    m.input_sportsmarks();
    m.input_subjectmarks();
    m.output_marks();
return 0;
}