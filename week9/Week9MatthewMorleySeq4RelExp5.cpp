#include <iostream> //Fixed include statement
using namespace std;

int main () {
  while (1){
    float age;
    float height;
    cout << "\n What is your age? ";
    cin >> age;
    cout << "What is your height in ft? ";
    cin >> height;

    if (age > 18 && age == 18 && height > 5) {
      cout << "A person’s age is greater then and equal to 18 and the person is taller than 5 feet.";
    }
    if (age < 18 || height < 6) {
      cout << "A person is younger than 18 or the person is shorter than 6 feet.";

    }
    if (height > 6 && height < 7 && age > 18 && age < 65) {
      cout << "A person is between 6 and 7 feet, and between 18 and 65 years old";
    }
    if (age != 0) {
      cout << "A person’s age is not 0. ";
    }
    if (age == 18 || age == 29 || age == 42) {
      cout << "A person age is 18 or 29 or 42.";
    }


  }


}