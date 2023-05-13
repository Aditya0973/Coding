#include <iostream>

using namespace std;

int main()
{
 string name;
 char ch;
 cout<<"Enter a name";
 //cin>>name;
 getline(cin,name);
 name.push_back(' ');
 cout<<"Enter a character";
 cin>>ch;
 name.push_back(ch);
 cout<<name;   
return 0;
}