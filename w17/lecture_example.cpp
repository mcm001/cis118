#include <iostream>

#include <fstream>

using namespace std;


void write_data(string datain) {

    ofstream data; // create the object called data
    data.open("testfile.txt"); // open the target file  
    data <<  datain; // append datain to data
    data.close(); // close the file

}



int main() {
    string datain = "The temperature is 11c\n"; // define the data we want to write
    write_data(datain); // call our function to write our data
    write_data(datain); // call our function to write our data
    write_data(datain); // call our function to write our data

    // read_data("testfile.txt");

}
