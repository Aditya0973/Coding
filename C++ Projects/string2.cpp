#include <iostream>

using namespace std;

int main()
{
 string name;
 char ch;
 cout<<"Enter a name";
 getline(cin,name);
 name.pop_back();
 cout<<name;   
return 0;
}