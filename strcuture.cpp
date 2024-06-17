// #include<iostream>
// using namespace std;
// // structure: structure is a user define data type it is use for marge different type of data type....  where array is use for marge same type of data type
// // example of structure 

// struct employee
// {
//     /* data */
//     int id;
//     char favchar;
//     float salary;
// };
// int main(){
//     struct employee minku;
//     struct employee subham;
//     struct employee rahul;
//     minku.id=23;
//     minku.favchar='m';
//     minku.salary=2300000000;
//     cout<<"the value is"<<minku.id<<endl;
//     cout<<"the value is"<<minku.favchar<<endl;
//     cout<<"the value is"<<minku.salary<<endl;
//     return 0;
// }


// in term of typedef
//  typedef struct employee
// {
//     /* data */
//     int id;
//     char favchar;
//     float salary;
// } ep;
// int main(){
//     ep minku;
//     ep subham;
//     ep rahul;
//     minku.id=23;
//     minku.favchar='m';
//     minku.salary=2300000000;
//     cout<<"the value is"<<minku.id<<endl;
//     cout<<"the value is"<<minku.favchar<<endl;
//     cout<<"the value is"<<minku.salary<<endl;
//     return 0;
// }





// structure dosn't allow data hiding 
// union: it give better memory manegment
// when you only want to hold data then use structure otherwise use classes

#include<iostream>
using namespace std;

int main(){

     typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pound;
};

ep minku;
union money m1;
m1.rice=34;
cout<<m1.rice<<endl;
return 0;
}