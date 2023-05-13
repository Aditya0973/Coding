#include <iostream>

using namespace std;

class Employee
{
    public:
    int emp_ID;
    string emp_name;
    int salary;
    int years;

    void input()
    {
        cout<<"Enter Employee ID: ";
        cin>>emp_ID;
        cout<<"Enter Employee Name: ";
        cin>>emp_name;
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Enter Years: ";
        cin>>years;
    }

    void output()
    {
      cout<<"Output is: \n";  
      cout<<emp_ID<<"\t";  
      cout<<emp_name<<"\t";
      cout<<salary<<"\t";
      cout<<years<<"\t"; 
    }     

    void salary_grade()
    {
        int sum;
    if(salary>=10000 && years>=10)
    sum=salary+5000;
    else if(salary<10000 && years>=10)
    sum=salary+7000;
    else if(salary>=10000 && years<10)
    sum=salary+3000;
    else if(salary<10000 && years<10)
    sum=salary+4000;
    else
    cout<<"Wrong Input";
    cout<<"Now total salary is "<<sum;
    }

};

int main()
{
    Employee E;
    E.input();
    E.output();
    E.salary_grade();
   
return 0;
}