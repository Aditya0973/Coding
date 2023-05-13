#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout<<"Enter amount ->";
    cin>>amount;

    switch (amount)
    {
    case 1:
    cout<<"Your Rupee note choice is 1";
    break;
    
    case 2:
    cout<<"Your Rupee note choice is 2";
    break;

    case 5:
    cout<<"Your Rupee note choice is 5";
    break;
    
    case 10:
    cout<<"Your Rupee note choice is 10";
    break;
    
    default:
    cout<<"Wrong choice";
    }


return 0;
}