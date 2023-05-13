#include <iostream>

using namespace std;

int main()
{
    int F,C;
    
    cout<<"\n\n\n\t\t ********************TEMPERATURE CONVERTER********************\n\n\n";

    cout<<"\t\t Enter Fahrenheit Value ->";
    cin>>F;
    C=(F-32)*5/9;
    cout<<"\t\t Fahrenheit into Celsius ->"<<C;

    cout<<"\n\n\t\t Enter Celsius Value ->";
    cin>>C;
    F=(C*9/5)+32;
    cout<<"\t\t Celsius into Fahrenheit ->"<<F;


    cout<<"\n\n\n\t\t *************************THANK YOU***************************\n\n\n";
return 0;
}