
/*

 Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic. An object can be defined as a data field that has unique attributes and behavior.

 procedures oriented programming :
 a programming model derived from structural programming. It follows the concept of the calling procedure. The procedures, also called functions, routines, or subroutines, consist of a series of computational steps that they need to carry out.

 extantion of structure in c is called class
 strucure has limitaion: mambers are public
 classes can have methode and properties
 classe can make few members as public and public

/object - isntense of class
/class -  uer difine data type
/class is type of template which hold multiple objects

 object - isntense of class
 class -  uer difine data type
*/
#include <iostream>
using namespace std;

class employ
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c); // decleration
    void getData()
    {
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
        cout << "the value of c is:" << c << endl;
        cout << "the value of d is:" << d << endl;
        cout << "the value of e is:" << e << endl;
    }
};

void employ ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employ mayank;
    mayank.d = 12;
    mayank.e = 30;
    mayank.setData(2, 4, 5);
    mayank.getData();

    return 0;
}