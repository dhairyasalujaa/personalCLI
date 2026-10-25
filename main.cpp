#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "commands.h"
using namespace std;

// main
int main()
{
    srand(time(nullptr));
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