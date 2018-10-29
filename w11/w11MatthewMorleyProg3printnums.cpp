#include<iostream>
using namespace std;
int main() {
for( int i = 1; i <= 10; i ++) { // fixed typo on int, named variable
        cout << "i = " << i << endl;
    }
    return 0;
}
// This code will run forever printing I
// I fixed the condition so it prints 1 to 10