//----------------------------------- parameterized constructer----------------------------------


/*

#include <iostream>
using namespace std;
class minku
{
    public:
    int value;

    minku(int x)
    {
        value = x;
        cout<<" defalult constructer are  called"<<endl;
    }
    int getlevel()
    {
        return value;
    }
};
int main()
{
    minku h1(10);
    cout<<"the value of x is : "<<h1.getlevel()<<endl;

    return 0;
}

*/

//ex--2



#include <iostream>
using namespace std;

class minku
{
    public:
        int id;
        string name;
        float sallary;
        // parameterized constructor
        minku(int i, string n, float s)
        {
            id = i;
            name = n;
            sallary = s;
        }

        void display()
        {
            cout<<id<<""<<name<<""<<sallary<<endl;
        }
};

int main()
{
    minku m1(76, "mayank", 230);
    minku m2(77, "negi",231);
    m1.display();
    m2.display();

    return 0;
}



//-----------------------------------copy constructor-----------------------------------

#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    
    // parameterized 
    Hero(int h, char l)
    {
        cout<<"parameterized constructor are called"<<endl;
        health = h;
        level = l;
    }
    // copy
    Hero(Hero& Negi)
    {
        cout<<"copy constructor are called"<<endl;
        health = Negi.health;
        level = Negi.level;

    }

    void print()
    {
        cout<<"health is : "<<health<<endl;
        cout<<"level is : "<<level<<endl;
    }
};

int main()
{
    Hero mayank(100, 'A');
    mayank.print();

    Hero Negi(mayank);
    Negi.print();

    return 0;
}
 