#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number1,number2,res;
    char sign;
    
    
    
    cout<<"+ for addition\n";
    cout<<"- for subtraction\n";
    cout<<"* for multiplication\n";
    cout<<"/ for division\n";
    cout<<"'%' for remainder\n";
    cout<<"s for square\n";
    cout<<"c for cube\n";
    cout<<"q for square root\n";
    cout<<"Enter sign ->";
    cin>>sign;

    switch (sign)
    {
    case '+':
    cout<<"Enter First Number  -> ";
    cin>>number1;
    cout<<"Enter Second Number -> ";
    cin>>number2;
    res= number1 + number2;
    cout<<"Your addition is"<<res;
    break;
    
    case '-':
    cout<<"Enter First Number  -> ";
    cin>>number1;
    cout<<"Enter Second Number -> ";
    cin>>number2;
    res= number1 - number2;
    cout<<"Your subtraction is"<<res;
    break;

    case '*':
    cout<<"Enter First Number  -> ";
    cin>>number1;
    cout<<"Enter Second Number -> ";
    cin>>number2;
    res= number1 * number2;
    cout<<"Your multiplication is"<<res;
    break;
    
    case '/':
    cout<<"Enter First Number  -> ";
    cin>>number1;
    cout<<"Enter Second Number -> ";
    cin>>number2;
    res= number1 / number2;
    cout<<"Your division is"<<res;
    break;

    case '%':
    cout<<"Enter First Number  -> ";
    cin>>number1;
    cout<<"Enter Second Number -> ";
    cin>>number2;
    res= number1 % number2;
    cout<<"Your remainder is"<<res;
    break;

    case 's':
    cout<<"Enter a Number  -> ";
    cin>>number1;
  
    res= number1 * number1;
    cout<<"Your square is"<<res;
    break;

    case 'c':
    cout<<"Enter a Number  -> ";
    cin>>number1;
    res= number1 * number1 * number1;
    cout<<"Your cube is"<<res;
    break;

    case 'q':
    cout<<"Enter a Number  -> ";
    cin>>number1;
    float r;
    r=sqrt(number1);
    cout<<"Youre Square root is"<<r;
    break;
    
    default:
    cout<<"Wrong choice";
    }


return 0;
}