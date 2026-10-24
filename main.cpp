#include <iostream>
#include <vector>
#include "commands.h"
using namespace std;

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