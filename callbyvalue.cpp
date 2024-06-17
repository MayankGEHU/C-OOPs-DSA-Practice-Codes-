#include<iostream>
using namespace std;


/* this code will not swap a and b

int sum(int a, int b){
    int c = a + b;
    return c;
}
void swap(int a, int b){    //  temp    a     b
    int temp = a;           //  4       4     5
    a = b;                  //  4       5     5 
    b = temp;               //  4       5     4
}
int main(){ 
    int x = 4, y = 5;
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
   swap(x,y);
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
return 0;
}



 output 
the program dosn't swap two num
the value of a is:4the value of b is:5
 the value of a is:4the value of b is:5
*/





/*-----------------call by reference by pointers-----------------*/

// the mathode to swap is use pointers  reference
// this code will swap two num


/*


int sum(int a, int b){
    int c = a + b;
    return c;
}


void swapPointers(int* a, int* b){      //  temp    a     b
    int temp = *a;                      //  4       4     5
    *a = *b;                            //  4       5     5 
    *b = temp;                          //  4       5     4
}
int main(){ 
    int x = 4, y = 5;
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
   swapPointers(&x,&y);
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
return 0;
}


 output
 the value of x is:4the value of y is:5
the value of x is:5the value of y is:4
*/






/*-----------------call by reference using c++ reference variable-----------------*/
int sum(int a, int b){
    int c = a + b;
    return c;
}


void swapReferenceVar(int &a, int &b){      //  temp    a     b
    int temp = a;                      //  4       4     5
    a = b;                            //  4       5     5 
    b = temp;                          //  4       5     4
}
int main(){ 
    int x = 4, y = 5;
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
   swapReferenceVar(x,y);
   cout<<"the value of x is:"<<x<<"the value of y is:"<<y<<endl;
return 0;
}


// output
// the value of x is:4the value of y is:5
// the value of x is:5the value of y is:4
