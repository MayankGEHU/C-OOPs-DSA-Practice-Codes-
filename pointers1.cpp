#include <iostream>
using namespace std;

int main()
{
    /*

        int num = 5;
        cout<<"Num is : "<<num<<endl;
        //-- Addresh of operartor (&)
        cout<<"Addres of num is : "<<&num<<endl;

        int* ptr = &num;
        cout<<"Value is : "<<*ptr<<endl;
        cout<<"addres is : "<<ptr<<endl;
        double d = 4.3;
        double *p2 = &d;
        cout<<"value is : "<<*p2<<endl;
        cout<<"addres is : "<<p2<<endl;

        cout<<"Size of integer is : "<<sizeof(num)<<endl;
        cout<<"Size of pointer is : "<<sizeof(ptr)<<endl;

        cout<<"size of pointer p2 is : "<<sizeof(p2)<<endl;
        return 0;

    */
    /*

    int i =5;
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p = 0;
    p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;

    */

    //-- it dosn't change the value of num
    int num = 5;
    int a = num;
    a++;

    //-- it change the value of num;
    int *p = &num;
    cout << "value before is : " << num << endl;
    (*p)++;
    cout << "value after increment : " << num << endl;

    //--- copy a ponter

    int *q = p;
    cout << q << "_" << p << endl;
    cout << *q << "_" << *p << endl;

    //--- importance concept
    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;

    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"Before t : "<<t<<endl;

    //-- it decrement the addres , it go to the next location.
    t = t + 1;
    cout<<"After t : "<<t<<endl;

    return 0;
}