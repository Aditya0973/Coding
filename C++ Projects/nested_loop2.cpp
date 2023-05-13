#include <iostream>
using namespace std;

int main()
{
  int num1=100, num2=999, i, num, r, sum;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;

        while()
        {
            r = num % 10;
            sum = sum + r * r * r;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}