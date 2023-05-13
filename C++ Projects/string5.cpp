#include <iostream>

using namespace std;

int main()
{
    int i;
    char ch[30];
    cout<<"Enter a name ";
    //cin>>ch;
    gets(ch);
    //cout<<ch;
    puts(ch);
    cout<<"For 1 by 1 character"<<endl;
    for( i=0;ch[i]!='\0';i++)
    cout<<ch[i]<<"\t";
    cout<<"length= "<<i;
return 0;
}