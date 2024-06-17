#include<iostream>
#include<fstream>

using namespace std;

typedef struct Student
{
    int id;
    string name;
}
Student;

void display_data()
{
    ifstream inFile("Student.txt");
    if(!inFile.is_open())
    {
        cerr<<"Error in opening file !"<<endl;
        return;
    }

    Student std;

    cout<<"Student details: "<<endl;

    while(inFile>>std.id>>ws&&getline(inFile, std.name))
    {
        cout<<"Student ID : "<<std.id<<" Name : "<<std.name<<endl;
    }
    inFile.close();
}
int main()
{
    cout<<"Getting details from file...."<<endl;
    display_data();
    return 0;
}

// wap using ifstream class to display student details as student id and student name