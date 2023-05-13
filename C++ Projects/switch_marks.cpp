#include <iostream>

using namespace std;

int main()
{
    int marks1,marks2,marks3,marks4,marks5,total_marks;
    float Percentage;
    
    cout<<"\n\n\n\t\t ********************Percentage Calculator********************\n\n\n";
    cout<<"\n\n\t\t Enter Math's Marks  -> ";
    cin>>marks1;
    cout<<"\n\n\t\t Enter Science's Marks -> ";
    cin>>marks2;
    cout<<"\n\n\t\t Enter English's Marks -> ";
    cin>>marks3;
    cout<<"\n\n\t\t Enter Computer's Marks -> ";
    cin>>marks4;
    cout<<"\n\n\t\t Enter Hindi's Marks -> ";
    cin>>marks5;
    
    total_marks=marks5+marks4+marks3+marks2+marks1;
    
    Percentage=(total_marks*100)/500;
    cout<<"\nTotal marks"<<total_marks;
    cout<<"\nYour percentage"<<Percentage;
    if( (Percentage>=90) && (Percentage<=100) )
    cout<<"\nA+";
    else if( (Percentage>=75) && (Percentage<90) )
    cout<<"\nA";
    else if( (Percentage>=60) && (Percentage<75) )
    cout<<"\nB+";
    else if( (Percentage>=50) && (Percentage<60) )
    cout<<"\nB";
    else if( (Percentage>=0) && (Percentage<50) )
    cout<<"\nFail";
    else 
    cout<<"\nWrong input"; 

return 0;
}