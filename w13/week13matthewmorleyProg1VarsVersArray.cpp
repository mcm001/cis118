#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    int var5 = 0;
    int var6 = 0;
    int var7 = 0;
    int var8 = 0;
    int var9 = 0;
    int var10 = 0;
    int var11 = 0;
    int var12 = 0;
    int var13 = 0;
    int var14 = 0;
    int var15 = 0;
    int var16 = 0;
    int var17 = 1;

    cout << "what is var1?" << endl;
    cin >> var1;
    cout << "what is var2?" << endl;
    cin >> var2;
    cout << "what is var3?" << endl;
    cin >> var3;
    cout << "what is var4?" << endl;
    cin >> var4;
    cin >> var5;
    cout << "what is var6?" << endl;
    cin >> var6;
    cout << "what is var7?" << endl;
    cin >> var7;

    cout << "what is var8?" << endl;
    cin >> var8;

    cout << "what is var9?" << endl;
    cin >> var9;

    cout << "what is var10?" << endl;
    cin >> var10;

    cout << "what is var11?" << endl;
    cin >> var11;

    cout << "what is var12?" << endl;
    cin >> var12;

    cout << "what is var13?" << endl;
    cin >> var13;

    cout << "what is var14?" << endl;
    cin >> var14;

    cout << "what is var15?" << endl;
    cin >> var15;

    cout << "what is var16?" << endl;
    cin >> var16;

    cout << "what is var17?" << endl;
    cin >> var17;


    cout << "var1 is " << var1 << endl;
    cout << "var2 is " << var2 << endl;
    cout << "var3 is " << var3 << endl;
    cout << "var4 is " << var4 << endl;
    cout << "var5 is " << var5 << endl;
    cout << "var6 is " << var6 << endl;
    cout << "var7 is " << var7 << endl;
    cout << "var8 is " << var8 << endl;
    cout << "var9 is " << var9 << endl;
    cout << "var10 is " << var10 << endl;
    cout << "var11 is " << var11 << endl;
    cout << "var12 is " << var12 << endl;
    cout << "var13 is " << var13 << endl;
    cout << "var14 is " << var14 << endl;
    cout << "var15 is " << var15 << endl;
    cout << "var16 is " << var16 << endl;
    cout << "var17 is " << var17 << endl;

    int array[17];
    int arrayvar;
    for (int x=0; x<=16; x++) {
        cout << "what should element " << x << " be? \n";
        cin >> arrayvar ;
        array[x] = arrayvar;
    }

    for (int x=0;x<=17;x++) {
        cout << "element " << x << " is " << array[x] << endl;
    }

    
}
