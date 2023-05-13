#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"\n\n\n********************Leap Year Calculator********************\n\n\n";
    cout<<"\n\nVIT Bhopal";
    cout <<"\n\nEnter a year: ";
    cin >> year;
 
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";
    cout <<"\n\n\n********************THANK YOU********************\n\n\n";
    return 0;
}