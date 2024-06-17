#include <iostream>
using namespace std;
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

    // dynamically allocation
    minku *b = new minku;
    b->sethealth(79);
    b->setlevel(7);
    cout<<"health is : "<<(*b).gethealth()<<endl;
    cout<<"level is : "<<(*b).getlevel()<<endl;
    // or
    cout<<"health is : "<< b->gethealth()<<endl;
    cout<<"level is : "<< b->getlevel()<<endl;

    return 0;
}
