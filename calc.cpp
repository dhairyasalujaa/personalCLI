#include <iostream>
#include <vector>
#include "commands.h"
using namespace std;
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