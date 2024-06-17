//-------------------------array of objects----------------------------------


#include <iostream>
using namespace std;

class Book
{
    public:
    char name[50];
    int cost;

    void getDetails();
    void putDetails();
};

void Book::getDetails()
{
    cout<<"Enter tha name of book : ";
    cin>>name;
    cout<<"Enter the cost of book :  ";
    cin>>cost;
}

void Book::putDetails()
{
    cout<<name<<" " ;
    cout<<cost<<" " ;
    cout<<endl;
}

int main()
{
    Book b[100];
    int n,i;

    cout<<"Enter total num of books  : ";
    cin>>n;


    for(i=0; i<n;i++)
    {
        b[i].getDetails();
    }
    cout<<"Details of books : "<<endl;

    for(i=0;i<n;i++)
    {
        b[i].putDetails();
    }

    return 0;
}