//------------- pointer to object

#include <iostream>
using namespace std;

class Demo
{
    public:
    void show()
    {
        cout<<" Hello from show function "<<endl;
    }
    void show1()
    {
        cout<<" Hello from show1 function "<<endl;
    }
};


int main()
{
    Demo d;

    Demo *ptr = &d;  // Create a pointer to the object
    ptr->show();  // Access functions using the pointer
    ptr ->show1(); 

    // (&d)->show();   another methode of  Access functions using the pointer
     // (*ptr).show();   another methode of  Access functions using the pointer
    

    d.show();
    d.show1();
    return 0;

}