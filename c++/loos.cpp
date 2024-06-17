#include<iostream>
using namespace std;
int main()
{
/* loops in c++
1- for loop
2- while loop
3- do-while loop
  */


 /*
 for loop
 
 for looop syntx
 
 for(initilization; condition; updation
 {
    loop body(c++ code)
 }

 for loop is use for performing a task repetively
*/

/*
code (for loop)


 int i;
 for(i=0;i<=100;i++)
 {
     cout<<i<<endl;
 }
*/

//example of infinite for loop

/*
 int i;
 for(i=0;23<100;i++)
 {
     cout<<i<<endl;
 }
 */



/* while loop */

// syntex :
// while ( condition )
// {
//     /* code */ statment
// }
/*
int i=1;
while (i<=40)
{
    cout<<i<<endl;
    i++;
}
*/
//example of infinite while loop
/*
int i=1;
while (true)
{
    cout<<i<<endl;
    i++;
}
*/


/* do-while loop */

// syntex:
// do
// {
//     /* code */
// } while (/* condition */);

int i=1;
do
{
    cout<<i<<endl;
    i++;
} 
while (false);

// first execute do then check condition




 return 0;
}
