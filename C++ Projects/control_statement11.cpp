#include<iostream>

using namespace std;

int main()
{
	int n, temp, r, rev = 0;
	
	cout << "Enter the Number to Check Palindrome or Not =  ";
	cin >> n;
	
	temp = n;
	
	while (temp > 0)
	{
    	r = temp % 10;
    	rev = (rev * 10) + r;
    	temp = temp / 10;
	}
	cout << "\nReverse of given Number = " << rev << "\n\n";
	
	if(n == rev) {
		cout << n << " is a Palindrome Number";
	}	
	else {
		cout << n << " is Not a Palindrome Number";
	}
 	return 0;
}