#include<iostream>
using namespace std;

int main()
{
    int num;
    try 
    {
        cout<<"Enter tha number to check for it's validity : ";
        cin>>num;

        if(num == 0)
            throw logic_error("Zero not alllowed");
        else if (num < 0)
            throw out_of_range("Negative numbers are not allowed");
        cout<<"Number : "<<num<<" is valid"<<endl;        
    }

    catch(logic_error&e)
    {
        cerr<<"Logical error : "<<e.what()<<endl;
    }

    catch(out_of_range&e)
    {
        cerr<<"Out of range error : "<<e.what()<<endl;
    }

    catch(runtime_error&e)
    {
        cerr<<"An unexcepted error occure"<<endl;
    }
    return 0;
}



// wap to show use of multiple catch statement