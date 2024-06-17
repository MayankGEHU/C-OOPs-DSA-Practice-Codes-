#include<iostream>
using namespace std;
int main()
{
    //arithmatic operator
    int a=3,b=5;
    cout<<"value of a+b is:"<<a+b<<endl;
    cout<<"value of a-b is:"<<a-b<<endl;
    cout<<"value of a*b is:"<<a*b<<endl;
    cout<<"value of a/b is:"<<a/b<<endl;
    cout<<"value of a++ is:"<<a++<<endl;
    cout<<"value of a-- is:"<<a--<<endl;
    cout<<"value of ++a is:"<<a++<<endl;
    cout<<"value of --a is:"<<--a<<endl;
    cout<<endl;

    // comparision operator
    cout<<"This value of a==b:"<<(a==b)<<endl;
    cout<<"This value of a>b:"<<(a>b)<<endl;
    cout<<"This value of a!=b:"<<(a!=b)<<endl;
    cout<<"This value of a<b:"<<(a<b)<<endl;
    cout<<"This value of a>=b:"<<(a>=b)<<endl;
    cout<<"This value of a<=b:"<<(a<=b)<<endl;
    cout<<endl; 

    //logical operators
    cout<<"this value of a==b:"<<((a==b)&&(a<b))<<endl;
    cout<<"this value of a==b:"<<((a==b)||(a<b))<<endl;


    return 0;
}