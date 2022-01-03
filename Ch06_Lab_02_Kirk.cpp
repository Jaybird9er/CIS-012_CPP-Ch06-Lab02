#include <iostream>
#include <windows.h>
using namespace std;

// function prototypes
int isVowel (char &y);

int main ()
{
    // variables
    char letter;
    char ans;

    // inputs
    do
    {
        system ("cls");
        cout << "Enter a character between a and z (or A and Z): ";
        cin >> letter;
        while ((letter < 'A' || letter > 'Z') && (letter < 'a' || letter > 'z'))
        {
            cout << "Invalid input." << endl;
            cout << "Please enter a character between a and z (or A and Z)." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Enter a character between a and z (or A and Z): ";
            cin >> letter;
        }
        cout << letter << " is a vowel: ";
        cout << isVowel(letter) << endl;
        cout << endl;
        cout << "Do you want to repeat this program?" << endl;
        cout << "Y/N" << endl;
        cout << "> ";
        cin >> ans;
        while ((ans != 'Y' && ans != 'y') && (ans != 'N' && ans != 'n'))
        {
            cout << "Invalid input." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Do you want to repeat this program?" << endl;
            cout << "Y/N" << endl;
            cout << "> ";
            cin >> ans;
        }
    }
    while (ans == 'Y' || ans == 'y');

    return 0;
}

// functions
int isVowel (char &y)
{
    static_cast<int>(y);
    if (y == 'A' || y == 'a')
    {
        return 1;
    }
    else if (y == 'E' || y == 'e')
    {
        return 1;
    }
    else if (y == 'I' || y == 'i')
    {
        return 1;
    }
    else if (y == 'O' || y == 'o')
    {
        return 1;
    }
    else if (y == 'U' || y == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
