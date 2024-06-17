// CPP Program to demonstrate the use of copy constructor
// and assignment operator

//--------------------copy assignemnt operator
#include <iostream>
using namespace std;

class Test
{
public:
    Test() {}
    Test(const Test &t)
    {
        cout << "Copy constructor called " << endl;
    }

    Test &operator=(const Test &t)
    {
        cout << "Assignment operator called " << endl;
        return *this;
    }
};

// Driver code
int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;
    getchar();
    return 0;
}


//--------------------------destructor -------------------------------
#include <iostream>
using namespace std;

class Hero
{
    public:
    Hero()
    {
        cout<<"constructor bhai called"<<endl;
    }
    ~Hero()
    {
        cout<<"destructor bhai called"<<endl;
    }


};
int main()
{
    Hero h1;
    Hero *b = new Hero();
    delete b;

    return 0;
}