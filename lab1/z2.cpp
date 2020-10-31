#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //Dodanie naszego argumentu do tablicy "argument"
    char *argument = argv[1];

    //Sprawdzenie czy podane słowo jest polindromem
    for (int i = 1; i < (argc - 1) / 2; i++)
    {
        if (argument[i] != argument[argc - i])
        {
            cout << argument << " nie jest polindromem" << endl;
            return 0;
        }
    }

    cout << argument << " jest polindromem" << endl;
    return 0;
}