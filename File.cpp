
#include <iostream>
#include <fstream>  // File handling library

using namespace std;

int main() {
    // Create an ofstream object to write to a file
    ofstream myFile("example.txt");

    // Check if the file is opened successfully
    if (!myFile) {
        cout << "Error: Could not create the file!" << endl;
        return 1; // Exit with an error code
    }

    // Write to the file
    myFile << "Hello, this is a test file.\n";
    myFile << "C++ file handling is easy!\n";

    // Close the file
    myFile.close();

    cout << "File created and data written successfully." << endl;

    return 0;
}
