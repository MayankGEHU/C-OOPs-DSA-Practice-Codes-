#include<iostream>
using namespace std;

void divison(int a, int b)
{
    try 
    {
        if(b == 0)
        throw b;
        else 
        cout<<" a/b = "<<(float)a/b<<"\n";
    }
    catch(int)
    {
        cout<<"Caught an exception as first throwing \n";
        throw;
    }    
}

int main()
{
    int a,b;
    cout<<"Enter tha value of a & b : ";
    cin>>a>>b;
    try
    { 
        divison (a,b);
    }

    catch(int)
    {
        cout<<"Caught an exception as rethrowing \n";
    }
    return 0;
}


//wap to demostrate the concept of re-throwing an exception