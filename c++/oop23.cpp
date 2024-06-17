#include <iostream>
using namespace std;
class shape
{
public:
    virtual void print()
    {
        cout << "THIS IS A SHAPE" << endl;
    }
};
class polygon : public shape
{
public:
    void print()
    {
        cout << "POLYGON IS A SHAPE" << endl;
    }
};
class rect : public shape
{
public:
    void print()
    {
        cout << "RECTANGLE IS A POLYGON" << endl;
    }
};
class triangle
{
public:
    void print()
    {
        cout << "TRIANGLE IS A POLYGON" << endl;
    }
};
class square
{
public:
    void print()
    {
        cout << "SQUARE IS A POLYGON" << endl;
    }
};
int main()
{
    shape s;
    s.print();
    polygon p;
    p.print();
    rect r;
    r.print();
    triangle t;
    t.print();
    square sq;
    sq.print();
    return 0;
}

// Class shape banai usme void print k fn banai jo print karega this is a shape.....
// phir class polygon bano jo class shape ko inherit karega aur same fn banao jo print krega polygon is a shape....
//  phir 2 class aur banal rectangle aur triangle with same fn void print jo print krenge rectangle is a polygon
// amd triangle is a polygon respectivly....phir squarw