#include <iostream>

int main() {
    try {
        // Some code that may throw different types of exceptions
        int numerator, denominator, result;

        std::cout << "Enter numerator: ";
        std::cin >> numerator;

        std::cout << "Enter denominator: ";
        std::cin >> denominator;

        if (denominator == 0) {
            throw "Division by zero is not allowed!";
        }

        result = numerator / denominator;

        // Simulating another type of exception
        if (result < 0) {
            throw std::out_of_range("Result is out of range");
        }

        std::cout << "Result: " << result << std::endl;

    } catch (const char* errorMessage) {
        std::cerr << "Caught exception: " << errorMessage << std::endl;

    } catch (const std::out_of_range& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;

    } catch (...) {
        std::cerr << "Caught unknown exception" << std::endl;
    }

    return 0;
}
