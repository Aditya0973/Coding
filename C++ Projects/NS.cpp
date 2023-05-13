#include <iostream>

using namespace std;

int
main ()
{
  int number1, number2;

  cout <<
    "\n\n\n\t\t ********************Number Swapper********************\n\n\n";
  cout << "\n\n\t\t Enter First Number  -> ";
  cin >> number1;
  cout << "\n\n\t\t Enter Second Number -> ";
  cin >> number2;
  cout << "\n\n\t\t Before Swapping:" << endl << endl;
  cout << "\t\t First Number=" << number1 << ",Second Number=" << number2 <<endl << endl;

 
 number1=number1+number2; 
 number2=number1-number2;
 number1=number1-number2;

 
 




  



  cout << "\t\t After Swapping:" << endl << endl;
  cout << "\t\t First Number=" << number1 << ",Second Number=" << number2 <<
    endl << endl;

  cout <<
    "\n\n\n\t\t ********************THANK YOU********************\n\n\n";
  return 0;
}