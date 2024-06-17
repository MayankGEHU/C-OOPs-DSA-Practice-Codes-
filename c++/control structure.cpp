/* c++ control structure
1-sequence structure
2-selection structure(first we get entry in program then ask a condition then exit from the program)
3-loop structure(first get entry them check condition if it is true then take action and get back on loop and continusuly repeat this procces when the statement are false its will exit from loop)


1- if-else statement
int i=0;
if(i<e){
    cout<<i;
    i++;
}

2- if-else ladder

3- switch case
syntex- switch(expression)
{
    case 1:
    {
        action1;
    }
    case 2:
    {
        action 2;
    }
    default:
    {
        action 3;
    }
}

*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age:"<<endl;
    cin>>age;
    //selection structure- if-else ladder code



    // if(age<18)
    // {
    //     cout<<"you canot come into a party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"you will get a kid pass "<<endl;
    // }
    // else
    // {
    //     cout<<"you will come"<<endl;
    // }


    //selection structure:swithc case structure
    switch (age)
    {
    case 18:
    cout<<"you are 18"<<endl;
        break;

         case 6:
    cout<<"you are 22"<<endl;
        break;

         case 2:
    cout<<"you are 1"<<endl;
        break;
    
    default:
    cout<<"you are not special"<<endl;
        break;
    }


    return 0;
}
