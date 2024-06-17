#include<iostream>
using namespace std;
class student{
    public:
    double a , b;
    double result;
    double readnumber(double x, double y)
    {
        a=x;
        b=y;
    }
    double division()
    {
        result = a/b;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The division of the two number is : "<<result<<endl;
    }
};
int main()
{
    student obj;
    obj.readnumber(23, 22);
    obj.division();
    obj.display();
}


