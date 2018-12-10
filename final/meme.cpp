#include <iostream>
using namespace std;

int p1CellCount = 0;
int p2CellCount = 0;

void printArr(int arr[8][8]) {
    cout << "\n[ ][1][2][3][4][5][6][7][8]\n";
    for (int i = 0; i < 8; i++) {
        switch (i) {
            case 0:
                cout << "[A]";
                break;
            case 1:
                cout << "[B]";
                break;
            case 2:
                cout << "[C]";
                break;
            case 3:
                cout << "[D]";
                break;
            case 4:
                cout << "[E]";
                break;
            case 5:
                cout << "[F]";
                break;
            case 6:
                cout << "[G]";
                break;
            case 7:
                cout << "[H]";
                break;
        }
        for (int j = 0; j < 8; j++) {
            cout << "[";
            cout << arr[i][j];
            cout << "]";
        }
        cout << endl;
    }
}

int convCharToNum(char input) {
    int letterNum;
    switch (input) {
        case 'A':
        case 'a':
            letterNum = 0;
            break;
        case 'B':
        case 'b':
            letterNum = 1;
            break;
        case 'C':
        case 'c':
            letterNum = 2;
            break;
        case 'D':
        case 'd':
            letterNum = 3;
            break;
        case 'E':
        case 'e':
            letterNum = 4;
            break;
        case 'F':
        case 'f':
            letterNum = 5;
            break;
        case 'G':
        case 'g':
            letterNum = 6;
            break;
        case 'H':
        case 'h':
            letterNum = 7;
            break;
        default:
            cout << "Error, not valid input\n";
            letterNum = 10;
    }
    return letterNum;
}

bool isNumber(int in) {
    if (in < 0) {
        return true;
    } else {
        return false;
    }
}

void chooseCells(int arr[8][8]) {
    char letter, yn;
    int number = 10, letterNum = 10;
    while (true) {
        for (int i = 0; i < 8; i++) {
            letterNum = 10;
            while (letterNum == 10) {
                cout << "Enter cell " << (i + 1) << " (ie. H8): ";
                cin >> letter >> number;
                letterNum = convCharToNum(letter);
            }
            arr[letterNum][number - 1] = 1;
        }
        printArr(arr);
        cout << "Is this correct? (y or n): ";
        while (true) {
            cin >> yn;

            if (yn == 'y') {
                break;
            } else if (yn == 'n') {
                break;
            } else {
                cout << "Not y or n. Try again.\n";
            }
        }
        if (yn == 'y') {
            break;
        }
        // system("clear");
    }
    // system("clear");
}

void pickCell(int arr[8][8]) {
    char letter;
    int number, letterNum, loop = 0, loop1 = 0;
    while (loop1 == 0) {
        while (loop == 0) {
            cout << "Enter cell (ie. H8): ";
            cin >> letter >> number;
            letterNum = convCharToNum(letter);
            if (arr[letterNum][number - 1] == 1) {
                cout << "You guessed correctly, go again!\n";
                arr[letterNum][number - 1] = 0;
            } else if (arr[letterNum][number - 1] == 2) {
                cout << "You already guessed this one.\n";
                loop = 1;
                loop1 = 1;
            } else {
                cout << "You guessed incorrectly...\n";
                loop = 1;
                loop1 = 1;
            }
        }
    }
}

// Checking for win, true means array is empty
bool checkArray(int arr[8][8]) {
    int check = 0;
    for (int i = 0; i < 8 * 8; ++i) {
        if (arr[0][i] == 0) {
            // cout << "0";
        } else {
            // cout << "1";
            check = 1;
        }
    }

    if (check == 0) {
        // cout << "\nTrue, Array is empty\n";
        return true;
    } else {
        // cout << "\nFalse, Array has values\n";
        return false;
    }
}

int main() {
    int p1[8][8] = {{0}};
    int p2[8][8] = {{0}};
    int emptyBoard[8][8] = {{0}};
    bool check = false;
    char empty;

    // system("clear");
    cout << "Player 1, choose your cells\n";
    chooseCells(p1);
    cout << "Player 2, choose your cells\n";
    chooseCells(p2);

    while (true) {
        cout << "Player 1's turn!\n";
        pickCell(p2);

        // Check for win condition
        check = checkArray(p2);
        if (check) {
            cout << "Player 1 wins!\n";
            break;
        }
        check = false;

        cout << "Player 2's turn!\n";
        pickCell(p1);

        // Check for win condition
        check = checkArray(p1);
        if (check) {
            cout << "Player 2 wins!\n";
            break;
        }
        check = false;
        // cout << "Loop ended\n";
    }

    return 0;  // End program
}
