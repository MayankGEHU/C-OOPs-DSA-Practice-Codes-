//-----------------inheritance code---
#include <iostream>
using namespace std;

class vechile
{
public:
    string color;
    int max_speed;

    string getcolor()
    {
        return color;
    }

    int getmax_speed()
    {
        return max_speed;
    }

    void setcolor(string c)
    {
        color = c;
    }

    void setmax_speed(int sp)
    {
        max_speed = sp;
    }
};

class car : public vechile
{
    int num_gears;
};
class bicycle : public vechile
{
    bool is_foldable;
};

class truck : public vechile
{
    int max_weight;
};

int main()
{

    car c;
    c.setcolor("BALCK");
    c.setmax_speed(200);

    cout << " Color of car is : " << c.color << endl;
    cout << " max_speed of car is : " << c.max_speed << endl;

    cout << endl;

    bicycle b;
    b.setcolor("White");
    b.setmax_speed(50);

    cout << " color of bycycle is : " << b.color << endl;
    cout << " max_speed of bycycl is : " << b.max_speed << endl;
    cout << endl;

    truck t;
    t.setcolor("Red");
    t.setmax_speed(150);

    cout << " Color of truck is : " << t.color << endl;
    cout << " mac_speed or truck is : " << t.max_speed << endl;

    return 0;
}

// From above, we can see that two of the properties: Colour and MaxSpeed, are the same for every object. Hence, we can combine all these in one parent class and make three classes their subclass. This property is called Inheritance.