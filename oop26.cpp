#include <iostream>
#include <fstream>
#include <cctype> // For toupper and tolower functions
using namespace std;

int main() {
    // Input file stream
    ifstream inputFile("input.txt");

    // Check if the input file exists
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    // Output file stream
    ofstream outputFile("output.txt");

    // Check if the output file is successfully created
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to create the output file." << endl;
        inputFile.close();
        return 1;
    }

    // Process each character in the input file
    char ch;
    while (inputFile.get(ch)) {
        // Change the case of letters
        if (isupper(ch))
         {
            ch = tolower(ch);
        } 
        else if (islower(ch)) 
        {
            ch = toupper(ch);
        }

        // Write the modified character to the output file
        outputFile.put(ch);
    }

    // Close the file streams
    inputFile.close();
    outputFile.close();

    cout << "Content copied and case changed successfully." << endl;

    return 0;
}