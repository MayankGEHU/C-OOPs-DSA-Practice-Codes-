//--------------------------Write a C++ program to append new data to an existing text file
#include <iostream>
#include <fstream>
#include <string>


// Function to display the content of a file
void displayFileContent(const std::string & filename) {
  std::ifstream file(filename);
  std::string line;

  if (file.is_open()) {
    std::cout << "File content:" << std::endl;
    while (std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Failed to open the file." << std::endl;
  }
}

int main() {

  displayFileContent("new_test.txt");
  std::cout << std::endl;
  std::ofstream outputFile;
  // Open the file in append mode
  outputFile.open("new_test.txt", std::ios::app);
  displayFileContent("new_test.txt");
  std::cout << std::endl;
  if (outputFile.is_open()) {
    std::string newData;

    std::cout << "Enter the data to append: ";
    // Read the new data from the user
    std::getline(std::cin, newData);
    // Append the new data to the file
    outputFile << newData << std::endl;
    outputFile.close();
    std::cout << "Data appended successfully." << std::endl;
    displayFileContent("new_test.txt");
    std::cout << std::endl;

  } else {
    std::cout << "Failed to open the file." << std::endl;
  }

  return 0;
}
