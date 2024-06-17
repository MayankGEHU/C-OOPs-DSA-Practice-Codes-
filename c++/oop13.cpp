//----------Constructors and Destructors in Inheritance
/*

When we are using the constructors and destructors in the inheritance,
parent class  constructors and destructors are accessible to the child class
 hence when we create an object for the child class,
 constructors and destructors of both parent and child class get executed.

*/

#include <iostream>
using namespace std;

class parent // parent class
{
public:
    parent() // constructor
    {
        cout << "Parent class Constructor\n";
    }

    ~parent() // destructor
    {
        cout << "Parent class Destructor\n";
    }
};

class child : public parent // child class
{

public:
    child() // constructor
    {
        cout << "Child class Constructor\n";
    }

    ~child() // destructor
    {
        cout << "Child class Destructor\n";
    }
};

int main()
{
    // automatically executes both child and parent class
    // constructors and destructors because of inheritance
    child c;

    return 0;
}

//--------------------Inheritance in Parametrized Constructor/ Destructor

/*
Whenever you are using the parameterized constructor in the parent
 class it  is mandatory to define a default constructor explicitly
*/

/*
#include <iostream>
using namespace std;

class parent
{

    int x;
    public:

    // parameterized constructor
    parent(int i)
    {
        x = i;
        cout << "Parent class Parameterized Constructor\n";
    }
};

class child: public parent
{

    int y;
    public:

    // parameterized constructor
    child(int j) : parent(j)  //Explicitly calling
    {
        y = j;
        cout << "Child class Parameterized Constructor\n";
    }
};

int main()
{
    child c(10);

    return 0;
}
*/