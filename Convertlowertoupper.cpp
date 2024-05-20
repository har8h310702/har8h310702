#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter a character : ";
    cin >> character;

    if (islower(character))
    {
        char uppercaseCharacter = toupper(character);
        cout << "uppercase version : " << uppercaseCharacter << endl;
    }
    else if(isupper(character))
    {
        char lowercaseCharacter = tolower(character);
        cout << "lowercase version : " << lowercaseCharacter << endl;
    }
    else
    {
        cout << "Not an alphabatic character" << endl;
    }
    return 0;
}