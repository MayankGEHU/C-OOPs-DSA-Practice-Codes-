#include <iostream>
using namespace std;
// acces privet member from a class
class minku
{
    int level;
    int health;
    char name;

public:
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(int l)
    {
        level = l;
    }
};
int main()
{
    // creating object of class minku
    // statiic allocation
    
    minku m1;
    cout<<"size of m1 is : "<<sizeof(m1)<<endl;
    m1.sethealth(70);
    m1.setlevel(5);
    cout << "health is : " << m1.gethealth() << endl;
    cout << "level is : " << m1.getlevel() << endl;

    return 0;
}
