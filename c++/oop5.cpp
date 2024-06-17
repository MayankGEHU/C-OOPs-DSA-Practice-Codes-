//-------------------------------Write a simple program using class in C++ to input subject mark and prints it.

// #include <iostream>
// using namespace std;

// class Marks
// {
//     private:
//     int x;
//     int y;
//     public:
//     void getMarks();
//     void display();

// };
//  void Marks::getMarks()
//  {
//         cout<<"enter sub 1 marks : ";
//         cin>>x;
//         cout<<"enter sub 2 marks : ";
//         cin>>y;
//     }

//     void Marks::display()
//     {
//         cout<<"Marks in sub 1 is : "<<x<<endl;
//         cout<<"Marks in sub 2 is : "<<y<<endl;
//     }
// int main()
// {
//     Marks m;
//     m.getMarks();
//     m.display();

//     return 0;
// }



#include<iostream>
using namespace std;


class Marks
{
    int x;
    int y;

    public:

    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void setx()
    {
        cout<<"enter sub 1 marks : ";
        cin>>x;
    }
    void sety()
    {
        cout<<"enter sub 2 marks : ";
        cin>>y;
    }
    void display()
{
    cout<<"The marks in sub 1 is : "<<x<<endl;
    cout<<"The marks in sub 2 is : "<<y<<endl;

}

};


int main(){
    Marks m;
    m.getx();
    m.gety();
    m.setx();
    m.sety();
    m.display();
    
return 0;
}