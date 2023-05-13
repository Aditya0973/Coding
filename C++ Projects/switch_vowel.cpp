#include <iostream>

using namespace std;

int main()
{
    char character;
    cout<<"Enter character ->";
    cin>>character;

    switch (character)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    cout<<"Your Character is a vowel";
    break;

    default:
    cout<<"Your Character is a consonant";
    }


return 0;
}