#include <iostream>

using namespace std;

int main()
{
 string name;
 int count=0;
 cout<<"Enter a name";
 getline(cin,name);
 std::string::iterator it;
 for(it=name.begin();it!=name.end();it++)
 {
     if(*it == 'a')
     count++;
     cout<<*it<<"\t";
 }
 cout<<count;
 cout<<endl;
/* std::string::reverse_iterator it1;
 for(it1=name.rbegin();it1!=name.end();it1++)
 cout<<*it1<<"\t";*/
return 0;
}