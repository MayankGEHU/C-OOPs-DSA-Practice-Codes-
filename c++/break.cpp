#include<iostream>
using namespace std;
int main(){
    int i;
    for ( i = 0; i < 4; i++)
    {
        if(i==2)
        {
            break;
        }
         cout<<i<<endl;
    
    }
    // break stop execution of program when 2 is come


    for ( i = 0; i < 4; i++)
    {
        if(i==2)
        {
           continue;
        }
         cout<<i<<endl;
    
    }
    // continu skip 2 and print
    // 0 1 3 as a outpu
return 0;
}