#include<iostream>
using namespace std;
int main()
{
    //*******float ,double and long double litreals*****
    float e=24.8;
    long double d=24.8;
    cout<<"The size of 24.8 is:"<<sizeof(24.8)<<endl;
    cout<<"The size of 24.8f is:"<<sizeof(24.8f)<<endl;
    cout<<"The size of 24.8F is:"<<sizeof(24.8F)<<endl;
    cout<<"The size of 24.8l is:"<<sizeof(24.8l)<<endl;
    cout<<"The size of 24.8L is:"<<sizeof(24.8L)<<endl;
    cout<<endl;

    //********* reference varibale******
    float x=345;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    //***** typecasting****
    // convert one data type to anathor data type

    int a=45;
    float z=45.9;
    int c=int(b);
    cout<<"the value of a is:"<<(float)a<<endl;
    // anathor way to write
    cout<<"the value of a is:"<<float (a)<<endl;

    cout<<"the value of z is:"<<(int)z<<endl;



    return 0;
    }
    