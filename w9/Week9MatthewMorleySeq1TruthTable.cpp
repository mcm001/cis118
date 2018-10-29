#include <iostream> //Fixed include statement
using namespace std;

int main () {
  bool A=0;
  bool B=0;
  bool C=0;


  while(1){
      cout << "Type A, then B, then C: ";
    cin >> A;
    cin >> B;
    cin >> C;
    cout << "result: " << ((A or B) and C) << "\n";
  }


}