#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>  
#include <stdlib.h>   

using namespace std;

int intarray1[16][16];
string strarray1[16][16];

int intarray2[16][16];
string strarray2[16][16];

int rowchoice;
int colchoice;

int choices = 3;
int remainingp1 = choices;
int remianingp2 = choices;

void initArray() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            strarray1[x][y] = "[ ]";
            intarray1[x][y] = 0;
            strarray2[x][y] = "[ ]";
            intarray2[x][y] = 0;
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


}

void printArray1() {
    for ( int x=0; x<16; x++) {
        for ( int y=0; y<16; y++) {
            cout << setw(4) << strarray1[x][y];
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

void updateRowCol(string input) {
    char row = input[0];
    string collumn = input.erase(0,1);
    int rowint = charToInt(row) - 1;
    int colint = strToInt(collumn) - 1;
    rowchoice = rowint;
    colchoice = colint;
}





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

    intarray1[rowint+1][colint+1] = 1;
    strarray1[rowint+1][colint+1] = "[x]";

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

    // system("clear");
    // player2.printArray();
    // cout << "Player 2: Choose 8 cells to mark: \n";
    // for ( int i=0; i<player2.choices; i++) {
    //     player2.chooseAcell();
    //     system("clear");
    //     player2.printArray();
    // }
    // system("clear");



    while (true) {
        cout << "hi";
    }



}