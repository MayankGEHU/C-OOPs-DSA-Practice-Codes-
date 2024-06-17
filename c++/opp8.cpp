//-----------------------member function

#include <iostream>  
using namespace std;  
  
class Dice {  
   public:  
      double L;         // a dice's length  
      double B;        // a dice's breadth  
      double H;         // a dice's height  
  
      // Member functions declaration  
      double getVolume(void);  
      void setL(double length);  
      void setB(double breadth);  
      void setH(double height);  
};  
  
// Member functions definitions  
double Dice::getVolume(void) {  
   return L * B * H;  
}  
  
void Dice::setL(double length)   
{  
   L = length;  
}  
void Dice::setB(double breadth) {  
   B = breadth;  
}  
void Dice::setH(double height) {  
   H = height;  
}  
  
// Main function  
int main() {  
   Dice Dice1;                // Declare Dice1 of type Dice  
   Dice Dice2;               // Declare Dice2 of type Dice  
   double volume = 0.0;     // here the volume of a Dice is stored  
   
   // dice 1 specification  
   Dice1.setL(6.0);   
   Dice1.setB(7.0);   
   Dice1.setH(5.0);  
  
   // Dice 2 specification  
   Dice2.setL(12.0);   
   Dice2.setB(13.0);   
   Dice2.setH(10.0);  
  
   // volume of Dice 1  
   volume = Dice1.getVolume();  
   cout << "Volume of Dice1 : " << volume <<endl;  
  
   // volume ofDice 2  
   volume = Dice2.getVolume();  
   cout << "Volume of Dice2 : " << volume <<endl;  
   return 0;  

} 



//-----------------------------------function overloading

/*
#include <iostream>
using namespace std;
class Addition
 {
    public:
    int sum(int a,int b) 
    {
        return a+b;
    }
    int sum(int a,int b, int c) 
    {
       return a+b+c;
    }
 };
int main(void)
{
    Addition obj;
    cout<<obj.sum(20, 15)<<endl;
    cout<<obj.sum(81, 100, 10);
    return 0;
}


*/