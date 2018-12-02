#include <iostream>
using namespace std;

int searchArray( string targetName, string targetArray[], int sizeOfArray ){
    int i=0;
    for ( int i=0; i<sizeOfArray; i++ ) {
        if ( targetArray[i] == targetName ) {
            return i;
        }
        if ( i >= (sizeOfArray - 1 )) { 
            return 7;
        }
    }

}

void printAllNames ( string targetArray[], int size ) {
    cout << "The elements of the array are: \n";
    for (int i=0; i<size; i++ ) {
        if (targetArray[i] != "") {
            cout<<targetArray[i] << " , ";
        }
    }
    cout << endl;
}

void deleteName ( string targetArray[], string targetName, int size ) {
    bool isTheNameEvenHere = false;
    int arrayIndexToDelete;

    for (int i=0; i<size; i++ ) {
        if ( targetArray[i] == targetName ) {
            isTheNameEvenHere = true;
            arrayIndexToDelete = i;
        }
    }
    if ( isTheNameEvenHere == false ) {
        cout << "sorry, the name doesnt exist in the list. ";
    }
    else {
        cout << "Deleting the name " << targetName << " at index " << arrayIndexToDelete << endl;
        targetArray[arrayIndexToDelete] = "";
    }

}

int main() {
    string firstNameArray[7] = {"Jim", "Tuyet", "Ann", "Roberto", "Crystal", "Valla", "Mathilda"};
    // cout << "General Kenobi!";

    printAllNames( firstNameArray, 7 );

    cout << "What name would you like to delete? " ;
    string tgtName;
    cin >> tgtName;

    // cout << "Deleting the name " << tgtName << endl;
    deleteName( firstNameArray , tgtName, 7);

    cout << endl << "The new array contains the followiing: \n";
    printAllNames( firstNameArray, 7 );


}
