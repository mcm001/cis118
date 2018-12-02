using namespace std;

#include <iostream>

int main() {

    string names[6];

    for (int x = 0; x <= 5; x++) {
        cout << "Enter name number " << x << ": ";
        cin >> names[x];
    }
        for (int x = 0; x <= 5; x++) { cout << "name number " << x << " is " << names[x] << endl; }

}