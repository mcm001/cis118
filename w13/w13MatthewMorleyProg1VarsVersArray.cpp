// Programmer Explain the results
#include <iostream> //include libraries
using namespace std;
#include <iomanip>
int main () {
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    int var5 = 0;
    int var6 = 0;
    int var7 = 0;

    cout << "what is var1? ";
    cin >> var1;
    cout << "what is var2? ";
    cin >> var2;

    cout << "what is var3? ";
    cin >> var3;

    cout << "what is var4? ";
    cin >> var4;

    cout << "what is var5? ";
    cin >> var5;

    cout << "what is var6? ";
    cin >> var6;

    cout << "what is var7? ";
    cin >> var7;

    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    cout << var4 << endl;
    cout << var5 << endl;
    cout << var6 << endl;
    cout << var7 << endl;

    string data[6];
    for (int i=0;i<=6;i++) {
      cout << "what is var " << i << " going to be? ";
      cin >> data[i];

    }
    cout << "-------------------------------";
    for (int i=0;i<=6;i++) {
      cout << data[i];
    }
}