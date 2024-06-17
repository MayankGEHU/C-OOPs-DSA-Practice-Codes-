//---------------------const member function ---------------------
/*

#include <iostream>
using namespace std;
class minku
{
    int val;
    public:

        minku(int x = 0)
        {
            val = x;
        }
        int getValue() const
        {
            return val;

        }
    };

int main()
{
    minku m1(20);
    minku m2(30);

    cout<<"The value of object m1 is :"<<m1.getValue()<<endl;
    cout<<"The value od object m2 is :"<<m2.getValue()<<endl;

    return 0;
}

*/

//-------------- constant data member in a class----------------------

/*

#include<iostream>
using namespace std;
class ABC

{
    public:
    const int x ;

    ABC(int y):x(y)
    {
        cout<<"The value of y is : "<<y<<endl;
    }
};

int main(){
    ABC m(10);
    cout<<"The value of constant data member 'x' is : "<<m.x<<endl;

return 0;
}

*/

//-------------- constant object in a class----------------------

#include <iostream>
using namespace std;
class ABC
{
    public:
    int x;

    ABC()
    {
        x = 10;
    }
};


int main()
{
    const ABC obj;
    cout<<"The value of x is : "<<obj.x<<endl;

    return 0;
}
