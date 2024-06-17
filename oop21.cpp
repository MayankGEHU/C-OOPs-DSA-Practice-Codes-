#include<iostream>
#include<fstream>
using namespace std;

typedef struct student
{
    int id;
    string name;
}
student;

void write_data()
{
    ofstream outFile("student.txt", ios::app);
    if(!outFile.is_open())
    {
        cerr<<"Error in opening file !!"<<endl;
        return;
    }

    student std;
    cout<<"Enter student id and name : ";
    cin>>std.id>>std.name;

    outFile<<std.id<<" "<<std.name<<endl;
    cout<<"Student details successfully wirtten in file\n"<<endl;

    cout<<"Id : "<<std.id<<"Name : "<<std.name<<endl;
    outFile.close();
}

int main()
{
    write_data();
    return 0;
}

// wap using ofstream class to enter student details as student id and student name and display tha data 