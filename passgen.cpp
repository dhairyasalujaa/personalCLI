#include <iostream>
#include <vector>
#include "commands.h"
using namespace std;
void passgen()
{
    string password;
    int passlen;
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    cout << "Enter password length: ";
    cin >> passlen;
    cin.ignore(10000, '\n');
    if (passlen < 4 || passlen > 64)
    {
        cout << "Password length must be between 4 and 64";
        return;
    }
    for (int i = 0; i < passlen; i++)
    {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }
    cout << password << '\n';
}