/*

switch case--------------


#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;

    char op;

    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
        cout<< (a+b) <<endl;
        break;

        case '-':
        cout<< (a-b) <<endl;
        break;

        case '*':
        cout<< (a*b) <<endl;

        break;
    }


    return 0;


}

*/


//-----------------------------is prime number or not (function)

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter the number you want to check : ";
    cin>>n;

    if(isPrime(n))
    {
        cout<<"is prime number "<<endl;
    }
    else
    {
        cout<<"is not prime number "<<endl;
    }

    return 0;
}