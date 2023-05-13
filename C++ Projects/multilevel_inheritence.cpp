#include <iostream>

using namespace std;

class employee
{
    public:

    int empid;

    void input_data()
    {
        cout<<"Enter Employee id: "<<endl;
        cin>>empid;
    }
    
};

class salary : public employee
{
    public:
    float bs;
    float da;
    float hra;
    float ts;

    void da_hra()
    {
        da=bs*0.8f;
        hra=bs*0.1f;
        ts=bs+da+hra;
        cout<<ts<<endl;
    }

    void input_salary()
    {
        cout<<"Enter Basic Salary: "<<endl;
        cin>>bs;
        
    }
    

};
class overtime : public salary 
{
    public:
    int th;
    float rh;
    float fs;

    void input_hours()
    {
        cout<<"Enter Total Hours: "<<endl;
        cin>>th;
        cout<<"Enter Rate Hours: "<<endl;
        cin>>rh;
    }

    void final_salary()
    {
        fs=ts+(th*rh);
    }

    void output_salary()
    {
        cout<<"employee id is "<<empid<<endl;
    
        cout<<"Final Salary: "<<fs<<endl;
    }
};



int main()
{
    overtime o;
    o.input_data();
    o.input_salary();
    o.da_hra();
    o.input_hours();
    o.final_salary();
    o.output_salary();
    
return 0;
}