#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

double read_double()
{
    double num;
    cout << "Enter a number of type double : ";
    cin >> num;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw invalid_argument("Invlid input !! Enter a double number ");
    }
    return num;
}

double calculate_division(double a, double b)
{
    if (b == 0)
    {
        throw runtime_error("Division by zero is undefined");
    }

    return a / b;
}

int main()
{
    try
    {
        double num1 = read_double();
        double num2 = read_double();

        double result = calculate_division(num1, num2);
        cout << num1 << " / " << num2 << " / " << result << endl;
    }
    catch (invalid_argument &e)
    {
        cerr << "Invalid argument exception :" << e.what() << endl;
    }
    catch (runtime_error &e)
    {
        cerr << "Runtime error exception : " << e.what() << endl;
    }
    return 0;
}

/*
wap with the following
a.... A function to read double type numbers from keyboard
b.... A function to calculate the divison of two numbers
c.... A try block to throw an exception when a wrong type of data is keyed in
d.... A try block to delete and throw an exception if the condition "devide by 0" occurs
e.... Appropriate catch block to handle the exception thorwn
*/
