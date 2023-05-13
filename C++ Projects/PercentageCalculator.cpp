#include <iostream>

using namespace std;

int main()
{
       float marks1,marks2,marks3,marks4,marks5,add,divi,total_marks,Percentage;
    
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
    
    add=marks5+marks4+marks3+marks2+marks1;
    total_marks=500;
    Percentage=add/500*100;
    
    cout<<"\n\n\t\t Marks Obtained= "<<add<<endl<<endl;
    cout<<"\t\t Total Marks= "<<total_marks<<endl<<endl;
    cout<<"\t\t YOUR Percentage= "<<Percentage<<endl<<endl;
    
    cout<<"\n\n\n\t\t *************************THANK YOU***************************\n\n\n";
    // single line 
    /*
    multiple line 
    */

    return 0;
}

