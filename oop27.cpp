
//---------------. Writing and Reading Binary Data

#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int number;
    double value;
};

int main() {
    // Writing binary data to a file
ofstream binaryOutFile("data.bin",ios::binary);

    if (binaryOutFile.is_open()) {
        Data data{42, 3.14};
        binaryOutFile.write(reinterpret_cast<char*>(&data), sizeof(Data));

        binaryOutFile.close();
    cout << "Binary data written to the file successfully." <<endl;
    } 
    else
     {
        cerr << "Error opening the binary file for writing." <<endl;
    }

    // Reading binary data from a file
ifstream binaryInFile("data.bin",ios::binary);

    if (binaryInFile.is_open()) {
        Data readData;
        binaryInFile.read(reinterpret_cast<char*>(&readData), sizeof(Data));

    cout << "Number: " << readData.number <<endl;
    cout << "Value: " << readData.value <<endl;

        binaryInFile.close();
    } else {
    cerr << "Error opening the binary file for reading." <<endl;
    }

    return 0;
}
