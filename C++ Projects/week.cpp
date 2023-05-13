#include <iostream>

using namespace std;

int main()
{
    char week;

    cout<<"M for Monday\n";
    cout<<"T for Tuesday\n";
    cout<<"W for Wednesday\n";
    cout<<"H for Thursday\n";
    cout<<"F for Friday\n";
    cout<<"S for Saturday\n";
    cout<<"U for Sunday\n";

    cout<<"Enter week character ->";
    cin>>week;
    if(week=='M')
    cout<<"Today is Monday";
    else if(week=='T')
    cout<<"Today is Tuesday";
    else if(week=='W')
    cout<<"Today is Wednesday";
    else if(week=='H')
    cout<<"Today is Thursday";
    else if(week=='F')
    cout<<"Today is Friday";
    else if(week=='S')
    cout<<"Today is Saturday";
    else if(week=='U')
    cout<<"Today is Sunday";
    else
    cout<<"Please enter correct character";
return 0;
}