#include <iostream>
using namespace std;

string getName() {
    cout << "What is your name?\n";
    string firstName;
    cin >> firstName;
    return firstName;
}

int getAge() {
    cout << "What is your age?\n";
    int age;
    cin >> age;
    return age;
}

void printInfo ( string firstName, int age ) {  
    cout << "Your name is " << firstName << " and you are " << age << " years old. :D \n";
}


int main() {
    printInfo(getName(), getAge() );
}


