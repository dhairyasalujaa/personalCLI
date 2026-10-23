#include <iostream>
#include <vector>
using namespace std;

// welcome
void welcome()
{
    cout << R"LOGO(
8888888b.  888    888        d8888 8888888 8888888b. Y88b   d88P     d8888 
888  "Y88b 888    888       d88888   888   888   Y88b Y88b d88P     d88888 
888    888 888    888      d88P888   888   888    888  Y88o88P     d88P888 
888    888 8888888888     d88P 888   888   888   d88P   Y888P     d88P 888 
888    888 888    888    d88P  888   888   8888888P"     888     d88P  888 
888    888 888    888   d88P   888   888   888 T88b      888    d88P   888 
888  .d88P 888    888  d8888888888   888   888  T88b     888   d8888888888 
8888888P"  888    888 d88P     888 8888888 888   T88b    888  d88P     888 
               
)LOGO";

    cout << "\nDhairya CLI" << " built by dhairya\n";
    cout << "Type help, about or exit.\n\n";
}
// end of welcome
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
// calculator start
void calc()
{
    double num1, num2;
    string operation;

    while (true)
    {
        cout << "\nEnter first number (or 'excalc' to exit): ";

        string input;
        cin >> input;

        if (input == "excalc")
        {
            cout << "Exiting calculator...\n";
            break;
        }

        // Convert the input into a number
        try
        {
            num1 = stod(input);
        }
        catch (...)
        {
            cout << "Invalid number.\n";
            continue;
        }

        cout << "Enter second number: ";
        if (!(cin >> num2))
        {
            cout << "Invalid number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        if (operation == "+")
            cout << "Result: " << num1 + num2 << '\n';

        else if (operation == "-")
            cout << "Result: " << num1 - num2 << '\n';

        else if (operation == "*")
            cout << "Result: " << num1 * num2 << '\n';

        else if (operation == "/")
        {
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << '\n';
            else
                cout << "Cannot divide by zero.\n";
        }
        else
            cout << "Invalid operation.\n";
    }

    cin.ignore(10000, '\n');
}
// calculator end

// accepting commands

void commands(const string &cmd)
{
    if (cmd == "help")
    {
        cout << '\n';
        cout << "Available commands: help, about, credits,calc, version, exit\n";
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
    else
    {
        cout << '\n';
        cout << "Unknown command. Try using 'help' \n";
    }
}
// end of accepting commands

// main
int main()
{
    welcome();
    string cmd;
    do
    {
        cout << "/DhairyaCLI/v0.1> ";
        getline(cin, cmd);
        commands(cmd);
        // command declarations
    } while (cmd != "exit");
    return 0;
}
// end main