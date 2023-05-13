#include <iostream>

using namespace std;

class student
{
    public:
    int rno;
    int marks_obtained;
    int total_marks;
    char grade;

    void input(int,int);
    void output();
    student();
    void find_grade();
};
void student::input(int r,int mo)
{
    rno=r;
    marks_obtained=mo;
}
void student::output()
{
    cout<<"roll number: "<<rno<<endl;
    cout<<"Marks obtained : "<<marks_obtained<<endl;
    cout<<"Total Marks: "<<total_marks<<endl;
    cout<<"Grade: "<<grade<<endl;   
}
student::student()
{
    rno=0;
    marks_obtained=0;
    total_marks=500;
    grade='F';
}
int main()
{
    int rno,mo;
    int i;
    int j;
 student s[3];
 cout<<"Enter three records:\n ";
 for(i=0;i<3;i++)
 {
     cout<<"Enter "<<i+1<<"record -> "<<endl;
     cout<<"\n Enter roll no.: ";
     cin>>rno;
     cout<<"\n Enter marks obtained: ";
     cin>>mo;
     s[i].input(rno,mo);
 }
       for(j=0;j<3;j++)
        {
        cout<<"\n Records are: #"<<j+1<<endl;
        s[j].output();
        }
 
 
    
return 0;
}