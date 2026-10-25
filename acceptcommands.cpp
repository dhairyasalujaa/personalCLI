#include <iostream>
#include <vector>
#include "commands.h"
using namespace std;
// accepting commands

void commands(const string &cmd)
{
    if (cmd == "help")
    {
        cout << '\n';
        cout << "Available commands: help, about, credits, calc, version, typetest, exit\n";
    }
    else if (cmd == "about")
    {
        cout << '\n';
        cout << "This is a practice command line interface built in C++ by dhairya.\n";
    }
    else if (cmd == "exit")
    {
        cout << '\n';
        cout << "Exiting\n";
    }
    else if (cmd == "credits")
    {
        cout << '\n';
        cout << "Credits go to dhairya for building this CLI.\n";
    }
    else if (cmd == "version")
    {
        cout << '\n';
        cout << "Dhairya CLI version 0.1\n";
    }
    else if (cmd == "calc")
    {
        cout << "type excalc to stop calculator\n";
        calc();
    }
    else if (cmd == "passgen")
    {
        passgen();
    }
    else if (cmd == "typetest")
    {
        typing();
    }
    else
    {
        cout << '\n';
        cout << "Unknown command. Try using 'help' \n";
    }
}
// end of accepting commands