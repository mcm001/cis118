#include <iostream>
using namespace std;

int sumNums ( int i ) {
  cout << i << endl;



  if ( i == 10 ) { 
    return i; 
  }
  else 
  {
    sumNums( i + 1 );
  }


}

int main(){
  int x=1;
  cout << sumNums(x);
}