#include<iostream>
using namespace std;





// function : 

// int sum(int a,int b){
//     int c = a+b;
//     return c;

// }
// int main(){
//     int num1, num2;
//     cout<<"Enter first num:"<<endl;
//     cin>>num1;
//     cout<<"Enter second num:"<<endl;
//     cin>>num2;
//     cout<<"sum is:"<<sum(num1,num2);
//     return 0;
// }


// function prototype: it tell to compiler the function are coming and what value it return.. then compiler prepare to compile program.

// syntex:
// type function-name(argguments);
// int sum(int a,int b);-->acceptable
// int sum(int a, b);--> not acceptable
// int sum(int ,int );-->acceptable


// int sum(int a,int b);

// int main(){
//     int num1, num2;
//     cout<<"Enter first num:"<<endl;
//     cin>>num1;
//     cout<<"Enter second num:"<<endl;
//     cin>>num2;
//     cout<<"sum is:"<<sum(num1,num2);
//     return 0;
// }



// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }


//  formal parameter: the parameter which are made in function
// ex---- int a and int b

//  actual parameter: the parameter are the value which are pass to the function
//  ex---- num1 and num2 






int sum(int a,int b);
void g(void);

// or void g();-->accepetable

int main(){
    int num1, num2;
    cout<<"Enter first num:"<<endl;
    cin>>num1;
    cout<<"Enter second num:"<<endl;
    cin>>num2;
    cout<<"sum is:"<<sum(num1,num2);
     g();
    return 0;
}



int sum(int a,int b){
    int c = a+b;
    return c;
}

void g()
{
    cout<<"\nhello mayank";
}