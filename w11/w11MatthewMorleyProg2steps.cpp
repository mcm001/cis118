#include <iostream> //Fixed include statement
#include <iomanip>
using namespace std;

int main ( ) {
    for (int x = 5; x<25; x=x+5) {

        cout << setw(x)<< "* O  \n";
        cout << setw(x)<< "*/|\\ \n";
        cout << setw(x)<< "*/ \\ \n";
        cout << setw(x)<< "*****\n";

    }


}
