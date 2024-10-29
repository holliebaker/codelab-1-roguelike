/*
    Converts an arabic number between 1 and 13 into roman numeral.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool running = true;
    bool win = false;

    // while the game is running and the user has not won
    do {
        // print the map
        cout << "Print the map" << endl;

        // take user input
        string cmd;
        cin >> cmd;

        // perform an action based on user input
        switch (cmd[0]) { // gets the first character from a strng
            case 'w':
                cout << "Move up" << endl;

                break;
            case 'a':
                cout << "Move left" << endl;

                break;
            case 's':
                cout << "Move right" << endl;

                break;
            case 'd':
                cout << "Move down" << endl;

                break;
            case 'x':
                cout << "Activate current square of the map." << endl;

                break;
            case 'q':
                cout << "Quit!" << endl;
                running = false;

                break;
            default:
                cout << "Unknown command." << endl;
        }

        // check if the user has won the game
    } while (running && !win); // false if the game is not running OR the user has won

    // print out whether the user has won or lost
    if (win) {
        cout << "YOU WIN!!" << endl;
    } else {
        cout << "YOU LOSE." << endl;
    }

    return 0;
}
