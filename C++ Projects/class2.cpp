#include <iostream>

using namespace std;

class student
{
    public:
    int rno;
    string name;
    int sub1;
    int sub2;
    int sub3;
    void input()
    {
        cout<<"Enter roll no.,name,subject 1,subject 2,subject 3 marks: ";
        cin>>rno;
        cin>>name;
        cin>>sub1;
        cin>>sub2;
        cin>>sub3;
    }

    void output()
    {
        cout<<"output is\n";
        cout<<rno<<"\t";
        cout<<name<<"\t";
        cout<<sub1<<"\t";
        cout<<sub2<<"\t";
        cout<<sub3<<"\t";

    }

    int sum()
    {
        int sum;
        sum=sub1+sub2+sub3;
        return sum;
    }

    void average()
    {
        int x;
        x=sum();
        cout<<"\nAverage is:"<<x/3;
    }

    void percentage()
    {
        int x;
        float p;
        x=sum();
        p=(x*100)/300;
        cout<<"\nPercentage is: "<<p;

    }
};

int main()
{
    student s;
    s.input();
    s.output();
    s.average();
    s.percentage();
}
