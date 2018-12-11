#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>  
#include <stdlib.h>   
#include <unistd.h>

using namespace std;

int intarray1[16][16];
string strarray1[16][16];
int intarray2[16][16];
string strarray2[16][16];
string guessarray1[16][16];
string guessarray2[16][16];

int rowchoice;
int colchoice;

int choices = 8;
int remainP1 = 8;
int remainP2 = 8;
// int doOneMoreTurn = 0;
int whoseTurn = 1;

void initArray() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            strarray1[x][y] = "[ ]";
            intarray1[x][y] = 0;
            strarray2[x][y] = "[ ]";
            intarray2[x][y] = 0;
            guessarray1[x][y] = "[ ]";
            guessarray2[x][y] = "[ ]";

        }
    }

    strarray1[0][0] = "[ ]";
    strarray1[0][1] = "[1]";
    strarray1[0][2] = "[2]";
    strarray1[0][3] = "[3]";
    strarray1[0][4] = "[4]";
    strarray1[0][5] = "[5]";
    strarray1[0][6] = "[6]";
    strarray1[0][7] = "[7]";
    strarray1[0][8] = "[8]";
    strarray1[0][9] = "[9]";
    strarray1[0][10] = "[10]";
    strarray1[0][11] = "[11]";
    strarray1[0][12] = "[12]";
    strarray1[0][13] = "[13]";
    strarray1[0][14] = "[14]";
    strarray1[0][15] = "[15]";

    strarray1[1][0] = "[A]";
    strarray1[2][0] = "[B]";
    strarray1[3][0] = "[C]";
    strarray1[4][0] = "[D]";
    strarray1[5][0] = "[E]";
    strarray1[6][0] = "[F]";
    strarray1[7][0] = "[G]";
    strarray1[8][0] = "[H]";
    strarray1[9][0] = "[I]";
    strarray1[10][0] = "[J]";
    strarray1[11][0] = "[K]";
    strarray1[12][0] = "[K]";
    strarray1[13][0] = "[M]";
    strarray1[14][0] = "[N]";
    strarray1[15][0] = "[O]";


    strarray2[0][0] = "[ ]";
    strarray2[0][1] = "[1]";
    strarray2[0][2] = "[2]";
    strarray2[0][3] = "[3]";
    strarray2[0][4] = "[4]";
    strarray2[0][5] = "[5]";
    strarray2[0][6] = "[6]";
    strarray2[0][7] = "[7]";
    strarray2[0][8] = "[8]";
    strarray2[0][9] = "[9]";
    strarray2[0][10] = "[10]";
    strarray2[0][11] = "[11]";
    strarray2[0][12] = "[12]";
    strarray2[0][13] = "[13]";
    strarray2[0][14] = "[14]";
    strarray2[0][15] = "[15]";

    strarray2[1][0] = "[A]";
    strarray2[2][0] = "[B]";
    strarray2[3][0] = "[C]";
    strarray2[4][0] = "[D]";
    strarray2[5][0] = "[E]";
    strarray2[6][0] = "[F]";
    strarray2[7][0] = "[G]";
    strarray2[8][0] = "[H]";
    strarray2[9][0] = "[I]";
    strarray2[10][0] = "[J]";
    strarray2[11][0] = "[K]";
    strarray2[12][0] = "[K]";
    strarray2[13][0] = "[M]";
    strarray2[14][0] = "[N]";
    strarray2[15][0] = "[O]";

    guessarray2[0][0] = "[ ]";
    guessarray2[0][1] = "[1]";
    guessarray2[0][2] = "[2]";
    guessarray2[0][3] = "[3]";
    guessarray2[0][4] = "[4]";
    guessarray2[0][5] = "[5]";
    guessarray2[0][6] = "[6]";
    guessarray2[0][7] = "[7]";
    guessarray2[0][8] = "[8]";
    guessarray2[0][9] = "[9]";
    guessarray2[0][10] = "[10]";
    guessarray2[0][11] = "[11]";
    guessarray2[0][12] = "[12]";
    guessarray2[0][13] = "[13]";
    guessarray2[0][14] = "[14]";
    guessarray2[0][15] = "[15]";
    guessarray2[1][0] = "[A]";
    guessarray2[2][0] = "[B]";
    guessarray2[3][0] = "[C]";
    guessarray2[4][0] = "[D]";
    guessarray2[5][0] = "[E]";
    guessarray2[6][0] = "[F]";
    guessarray2[7][0] = "[G]";
    guessarray2[8][0] = "[H]";
    guessarray2[9][0] = "[I]";
    guessarray2[10][0] = "[J]";
    guessarray2[11][0] = "[K]";
    guessarray2[12][0] = "[K]";
    guessarray2[13][0] = "[M]";
    guessarray2[14][0] = "[N]";
    guessarray2[15][0] = "[O]";

    guessarray1[0][0] = "[ ]";
    guessarray1[0][1] = "[1]";
    guessarray1[0][2] = "[2]";
    guessarray1[0][3] = "[3]";
    guessarray1[0][4] = "[4]";
    guessarray1[0][5] = "[5]";
    guessarray1[0][6] = "[6]";
    guessarray1[0][7] = "[7]";
    guessarray1[0][8] = "[8]";
    guessarray1[0][9] = "[9]";
    guessarray1[0][10] = "[10]";
    guessarray1[0][11] = "[11]";
    guessarray1[0][12] = "[12]";
    guessarray1[0][13] = "[13]";
    guessarray1[0][14] = "[14]";
    guessarray1[0][15] = "[15]";
    guessarray1[1][0] = "[A]";
    guessarray1[2][0] = "[B]";
    guessarray1[3][0] = "[C]";
    guessarray1[4][0] = "[D]";
    guessarray1[5][0] = "[E]";
    guessarray1[6][0] = "[F]";
    guessarray1[7][0] = "[G]";
    guessarray1[8][0] = "[H]";
    guessarray1[9][0] = "[I]";
    guessarray1[10][0] = "[J]";
    guessarray1[11][0] = "[K]";
    guessarray1[12][0] = "[K]";
    guessarray1[13][0] = "[M]";
    guessarray1[14][0] = "[N]";
    guessarray1[15][0] = "[O]";

}

void printArray1() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            cout << setw(4) << strarray1[x][y];
        }
        cout << endl;
    }     
}

void printArray2() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            cout << setw(4) << strarray2[x][y];
        }
        cout << endl;
    }     
}

void printguess1() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            cout << setw(4) << guessarray1[x][y];
        }
        cout << endl;
    }  
}

void printguess2() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            cout << setw(4) << guessarray2[x][y];
        }
        cout << endl;
    }  
}

int charToInt(char charicter) {
    int charint;
    charint = (int) charicter  - 88 - 8;
    if (charint <= 0) {
        charint = charint + 32;
    }
    return charint;
}
        
int strToInt( string str ) {
    int strint;
    strint = atoi(str.c_str()); //value = 45 
    return strint;
}

// void updateRowCol(string input) {
//     char row = input[0];
//     string collumn = input.erase(0,1);
//     int rowint = charToInt(row) - 1;
//     int colint = strToInt(collumn) - 1;
//     rowchoice = rowint;
//     colchoice = colint;
// }

void chooseAcell1() {
    cout << "Enter an coordinate (for example, O15)" << endl;
    string choice;
    cin >> choice;
    char row = choice[0];
    string collumn = choice.erase(0,1);
    // cout << " you chose row " << row << " and collumn " << collumn << endl;
    
    int rowint = charToInt(row) - 1;
    int colint = strToInt(collumn) - 1;

    cout << "Your row: " << rowint << " your collumn: " << colint << endl;
    
    rowchoice = rowint;
    colchoice = colint;

    cout << "int array value used to be " << intarray1[rowint+1][colint+1] << endl;

    intarray1[rowint+1][colint+1] = 1;
    strarray1[rowint+1][colint+1] = "[x]";

    cout << "Now it's " << intarray1[rowint+1][colint+1] << endl;
}

void chooseAcell2() {
    cout << "Enter an coordinate (for example, O15)" << endl;
    string choice;
    cin >> choice;
    char row = choice[0];
    string collumn = choice.erase(0,1);
    // cout << " you chose row " << row << " and collumn " << collumn << endl;
    
    int rowint = charToInt(row) - 1;
    int colint = strToInt(collumn) - 1;

    cout << "Your row: " << rowint << " your collumn: " << colint << endl;
    
    rowchoice = rowint;
    colchoice = colint;

    intarray2[rowint+1][colint+1] = 1;
    strarray2[rowint+1][colint+1] = "[x]";

    cout << "int array value used to be " << intarray2[rowint+1][colint+1] << endl;

    intarray1[rowint+1][colint+1] = 1;
    strarray1[rowint+1][colint+1] = "[x]";

    cout << "Now it's " << intarray2[rowint+1][colint+1] << endl;

}


void doP1turn(){
    printguess1();
    cout << "P1: guess a cell (for example, O15)";
    string choice;
    cin >> choice;

    char row = choice[0];
    string collumn = choice.erase(0,1);
    // cout << " you chose row " << row << " and collumn " << collumn << endl;
    
    int rowint = charToInt(row) ;
    int colint = strToInt(collumn) ;
    cout << "You chose: " << rowint << ", " << colint << endl;
    int state = intarray2[rowint][colint];
    cout << "current state at that coordinate: " << state << endl;
    
    if (state == 1) {
        cout << "guess correct!\n";
        remainP2 = remainP2 - 1;
        cout << "Now you have to find " << remainP2 << " more cells!\n";
        intarray2[rowint][colint] = 2;
        guessarray1[rowint][colint] = "[P]";
        whoseTurn = 1;
    } else if ( state == 2) {
        cout << "you already guessed here\n";
        whoseTurn = 1;
        unsigned int usecs = 2000;
        usleep(usecs);
    }
    else {
        cout << "guess wrong\n";
        whoseTurn = 2;
    }
    // cout << "whoseTurn: " << whoseTurn << endl;

}

void doP2turn(){
    printguess2();
    cout << "P2: guess a cell (for example, O15)";
    string choice;
    cin >> choice;

    char row = choice[0];
    string collumn = choice.erase(0,1);
    // cout << " you chose row " << row << " and collumn " << collumn << endl;
    
    int rowint = charToInt(row) ;
    int colint = strToInt(collumn) ;
    cout << "You chose: " << rowint << ", " << colint << endl;
    int state = intarray1[rowint][colint];
    cout << "current state at that coordinate: " << state << endl;
    
    if (state == 1) {
        cout << "guess correct!\n";
        remainP2 = remainP2 - 1;
        cout << "Now you have to find " << remainP2 << " more cells!\n";
        intarray1[rowint][colint] = 2;
        guessarray2[rowint][colint] = "[P]";
        whoseTurn = 2;
    } else if ( state == 2) {
        cout << "you already guessed here\n";
        whoseTurn = 2;
        unsigned int usecs = 2000;
        usleep(2000);
    }
    else {
        cout << "guess wrong\n";
        whoseTurn = 1;
    }
    // cout << "whoseTurn: " << whoseTurn << endl;

}



int main() {

    string guess;


    initArray();
    // player2.initArray();

    system("clear");

    printArray1();
    cout << "Player 1: Choose 8 cells to mark: \n";
    for ( int i=0; i<choices; i++) {
        chooseAcell1();
        system("clear");
        printArray1();
    }
    system("clear");

    printArray2();
    cout << "Player 2: Choose 8 cells to mark: \n";
    for ( int i=0; i<choices; i++) {
        chooseAcell2();
        system("clear");
        printArray2();
    }
    // system("clear");


    system("clear");

    while ( true ) {
        // cout << "hi";
        // cout << "whoseTurn: " << whoseTurn << endl;

        if (remainP2 <= 0) {
            cout << "P2 is dead! Long live p2";
            return 0;
        }
        if (remainP1 <= 0) {
            cout << "P1 is dead! Long live p1";
            return 0;
        }

        if ((whoseTurn == 1)) {
            system("clear");
            cout << "p1s turn" << endl;
            doP1turn();
        }

        if ((whoseTurn == 2)) {
            system("clear");
            cout << "p2s turn" << endl;
            doP2turn();
        }

        // if (whoseTurn = 0) { cout << "game over\n" ; return 0; } 

    }



}