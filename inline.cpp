#include<iostream>
using namespace std;

/*

inline : when we make a function inline then compiler replace function call with the code of function in compile time,
... when static variables are used then don't use inline function
... at the time of recursion don't use inline function
....it is a request to compiler 

*/

// -------------------------------------inline function-code
/*

inline int product(int a, int b){
   return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    // code replece with a,b
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;

return 0;
}

*/



// -------------------------------------static variable-code

/*

 int product(int a, int b){
    static int c=0;  // this line exicute only one
    c=c+1;           // next time this function is run, the vakue of c will be retained
   return a*b+c;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;
    cout<<"the product of a and b is:"<<product(a,b)<<endl;

return 0;
}

*/


//-------------------------------------default argunment-code
// default argunment always  write after complsury argunment
float MoneyRecieved(int CurrentMoney, float factor=1.04 ){
    return CurrentMoney*factor;
}
int main(){
    int money=100000;
  cout<<"if you have:"<<money<<"RS in your banck accoutn, you will recieve:"<<MoneyRecieved(money)<<"RS after 1 year"<<endl;
  cout<<" for VIP if you have:"<<money<<"RS in your banck accoutn, you will recieve:"<<MoneyRecieved(money, 1.1)<<"RS after 1 year"<<endl;
return 0;
}