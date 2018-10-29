#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
    int choice;
    cout << "What game mode do you want to play?\n Single Player, you vs computer (1),\n Multiplayer Computer, you vs a computer (2),\n Mutliplayer Player, two player versus mode (3),\n Multiplayer Internet, you vs another person on the Internet (4),\n or Exit (5)?\n ";
    cin >> choice;
    cout << endl;
    switch ( choice ) {
        case 1:
            cout << "You chose Single Player" << endl;
            break;
        case 2:
            cout << "You chose multi player - computer" << endl;
            break;
        case 3:
            cout << "You choose multi player - player" << endl;
            break;
        case 4:
            cout << "You choose multi player - internet" << endl;
            break;
        case 5:
            cout << "You choose to exit" << endl;
            break;
        default:
            cout << "You choose an invalid choice" << endl;
            break;
    }

}
