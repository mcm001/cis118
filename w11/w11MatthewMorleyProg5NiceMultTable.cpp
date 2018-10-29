#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    for (int x = 1; x <= 12; x++) {  // Switched operators to <= 10 rather than > 0
		for (int y = 1; y <=12; y++) {
			cout << setw(4) << y*x  ;
		}
		cout << endl;
    }
    return 0;
}
