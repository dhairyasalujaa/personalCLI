#include <iostream>
using namespace std;

// welcome
void welcome()
{
    cout << R"LOGO(
$$$$$$$\  $$\   $$\  $$$$$$\  $$$$$$\ $$$$$$$\ $$\     $$\  $$$$$$\
$$  __$$\ $$ |  $$ |$$  __$$\ \_$$  _|$$  __$$\\$$\   $$  |$$  __$$\
$$ |  $$ |$$ |  $$ |$$ /  $$ |  $$ |  $$ |  $$ |\$$\ $$  / $$ /  $$ |
$$ |  $$ |$$$$$$$$ |$$$$$$$$ |  $$ |  $$$$$$$  | \$$$$  /  $$$$$$$$ |
$$ |  $$ |$$  __$$ |$$  __$$ |  $$ |  $$  __$$<   \$$  /   $$  __$$ |
$$ |  $$ |$$ |  $$ |$$ |  $$ |  $$ |  $$ |   $$|   $$ |    $$ |  $$ |
$$$$$$$  |$$ |  $$ |$$ |  $$ |$$$$$$\ $$ |  $$ |   $$ |    $$ |  $$ |
\_______/ \__|  \__|\__|  \__|\______|\__|  \__|   \__|    \__|  \__|
)LOGO";

    cout << "\nDhairya CLI" << " built by dhairya\n";
    cout << "Type help, about or exit.\n\n";
}
// end of welcome

// accepting commands

void commands(const string &cmd)
{
    if (cmd == "help")
    {
        cout << '\n';
        cout << "Available commands: help, about, credits, version, exit\n";
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