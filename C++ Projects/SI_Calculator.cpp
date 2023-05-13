#include<iostream>
using namespace std;

int main()
{
	int p,r,t;
	float i;
    cout<<"\n\n\n\t\t ********************Simple Interest Calculator********************\n\n\n";
	cout<<"\t\t Enter the Principle: ";
	cin>>p;
	cout<<"\t\t Enter the Rate of Interest: ";
	cin>>r;
	cout<<"\t\t Enter the Time: ";
	cin>>t;
	i=(p*r*t)/100.0;
	cout<<"\t\t The Simple interest is: "<<i;
    cout<<"\n\n\n\t\t *************************THANK YOU***************************\n\n\n";
	return 0;
}