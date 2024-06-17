//-----------static data member-------------------

/*

#include<iostream>
using namespace std;

class Minku
{
    public:
    static int timeiscomplete;

};
// initilize static key word outside the class

int Minku::timeiscomplete = 5;

int main(){
    cout<<Minku::timeiscomplete<<endl;

return 0;
}

*/
#include <iostream>
#include<string.h>
using namespace std;

class Student
{
    int rollNo;
    char name[10];
    int marks;

    public:

    static int objectCount;

    Student()
    {
        objectCount++;
    }

    void getData()
    {
        cout<<"Enter roll number : ";
        cin>>rollNo;

        cout<<"Enter name : ";
        cin>>name;

        cout<<"Enter marks : ";
        cin>>marks;

        cout<<endl;
    }

    void putData()
    {
        cout<<"Roll NO is  : "<<rollNo<<endl;
        cout<<"Name is  : "<<name<<endl;
        cout<<"Marks is : "<<marks<<endl;
        cout<<endl;
    }

};

int Student::objectCount=0;

int main()
{
    Student s1;
    s1.getData();
    s1.putData();

    Student s2;
    s2.getData();
    s2.putData();

    Student s3;
    s3.getData();
    s3.putData();

    cout<<"total object is : "<<Student::objectCount<<endl;

    return 0;
}