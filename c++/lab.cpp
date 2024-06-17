//wap read tha student details such as student id and student name froma a file and write the contains in the another file .


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to write student details to a file
void writeStudentDetails(const string& LAB) {
    ofstream outputFile(LAB);

    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return;
    }

    // Writing student details to the file
    outputFile << "76,Mayank\n";
    outputFile << "47,prerna \n";
    outputFile << "36,khushi\n";

     outputFile.close();

    cout << "Student details written to the file successfully." << endl;
   
}

// Function to read student details from a file
void readStudentDetails(const string& LAB) {
    ifstream inputFile(LAB);

    if (!inputFile.is_open()) {
        cout<< "Error opening input file." << endl;
        return;
    }

    // Reading and printing student details from the file
    string gehu;
    while (getline(inputFile, gehu)) {
        cout << "Read from file: " << gehu<< endl;
    }

    inputFile.close();
    cout<<"Student deatils read from the file  successfully"<<endl;
}

int main() {
    const string LAB = "student_details.txt";  
    // Replace with your desired file path

    // Writing student details to the file
    writeStudentDetails(LAB);

    // Reading student details from the file
    readStudentDetails(LAB);

    return 0;
}
