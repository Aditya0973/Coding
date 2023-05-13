#include <iostream>
using namespace std;
int main()
{
char str[100];
int i;
int space=0;
    cout<<"Enter a string\n";
    gets(str);
    for(i=0; i<=str[i]; i++){
 if(str[i]==' ')
 {
    space++;
 }
}
cout<<"Number of spaces: "<<space;
    return 0;
}