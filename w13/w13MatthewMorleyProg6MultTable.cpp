// Programmer Explain the results
#include <iostream> //include libraries
using namespace std;
#include <cmath>
#include <iomanip>
int main () {
  int multiTable[10][10] = {0};
  cout << endl;
  for ( int y=0;y<=10;y++) {
    for (int x = 0; x <= 10; x++ ) {
      multiTable[x][y]=(x*y);
    }
  }
  for ( int y=0;y<=10;y++){
    for (int x = 0; x <= 10; x++ ) {
      cout << setw(10) << multiTable[x][y];
    }
    cout << endl;

  }

}