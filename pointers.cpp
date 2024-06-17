// pointer hold the address of other variables


#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b=&a;

    b=&a;


    // &-->(address of) operator
    // *-->dereference operator
     cout<<"address of a is:"<<&a<<endl;
    cout<<"address of b is:"<<b<<endl;

    cout<<"the value at address b is:"<<*b<<endl;

    // pointer to pointer
    // it store anathor pointer address
    int **c=&b;
    cout<<"the address of b is:"<<&b<<endl;
    cout<<"the  address of b is:"<<c<<endl;
    cout<<"value at address c is:"<<*c<<endl;
    cout<<"value at address value_at(value_at(c) is:):"<<**c<<endl;

    
return 0;
}