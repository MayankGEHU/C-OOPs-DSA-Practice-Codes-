#include<iostream>
using namespace std;


// an array is a collection of items of similar type stored in contigious memory locatiion.
// sometime, simple variable is not enough hold all the data 
int main(){
    int i;

    // first way to write an array
    int marks[4]={20,32,43,65};
    cout<<"this is marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;

    // you can chnage value of an array

    //second way to write an array
    int mathmarks[4];
    cout<<"this is math marks"<<endl;
    mathmarks[0]=123;
    mathmarks[1]=23;
    mathmarks[2]=2223;
    mathmarks[3]=13;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

 // array marks printing through loop
    for ( i = 0; i <4; i++)
    {
        cout<<"the value of marks:"<<i<<"is"<<marks[i]<<endl;
    }
    

    
return 0;
}