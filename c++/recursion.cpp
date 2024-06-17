/*
Recursion : function call itself , and call again and again whenever the base condtion meet
*/

#include<iostream>
using namespace std;
/*
//------------ factorial (using recursion)

int factorial(int n){
    if(n <= 1){ 
        return 1;
    }
return n * factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter a num:";
    cin>>a;
    cout<<"The factorial of "<< a << " is: "<<factorial(a)<<endl;
    return 0;
}

*/


//----------------------recursion calculate fibonacci sequence

int Fib( int n){
    if(n<2){
        return 1;
    }
    return Fib(n-2) + Fib(n-1);
}

int factorial(int n){
    if(n <= 1){ 
        return 1;
    }
return n * factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter a num:";
    cin>>a;
  cout<<"The term in fibonacci sequence in the position" <<a<< " is : " <<Fib(a)<<endl;
    return 0;
}
