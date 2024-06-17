#include<iostream>
using namespace std;

// calculate the volume of a cylinder
int volume(double r, int h)
{
    return(3.14*r*r*h);
}
// caluclate the valume of a cube
int volume(int a)
{
    return(a*a*a);
}
// calculate the volume of ractangular box
int volume(int l, int b, int h){
    return(l*b*h);
}
int main(){
   cout<<"The volume of cylinder of radius 3 and hegiht 6 is "<<volume(3 , 6)<<endl;
   cout<<"The volume of cube of 2 is "<<volume(2)<<endl;
   cout<<"The volume of ractangular box of 3 , 5 and 6 is "<<volume(3 , 5, 6)<<endl;
   return 0;
}

