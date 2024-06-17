//------------------------------------------------------Diamond problem

// Code Illustration of the Diamond Problem
// Below we have represented the above example of diamond-shaped inheritance programmatically. The code is given below:


/*
#include<iostream>
using namespace std;
class Person { //class Person
public:
    Person(int x)  
	{ 
		cout << "Person::Person(int) called" << endl; 
		}
};
 
class Father : public Person { //class Father inherits Person
public:
    Father(int x):Person(x) 
	  {
       cout << "Father::Father(int) called" << endl;
    }
};
 
class Mother : public Person { //class Mother inherits Person
public:
    Mother(int x):Person(x) 
	{
        cout << "Mother::Mother(int) called" << endl;
    }
};
 
class Child : public Father, public Mother  { //Child inherits Father and Mother
public:
    Child(int x):Mother(x), Father(x) 
	  {
        cout << "Child::Child(int) called" << endl;
    }
};
 
int main() {
    Child child(30);
}

*/


/*
Now you can see the ambiguity here. The Person class constructor is called twice:
once when the Father class object is created and next when the Mother class object is created. 
The properties of the Person class are inherited twice, giving rise to ambiguity.
Since the Person class constructor is called twice, the destructor will also be called twice 
when the Child class object is destructed.
Now if you have understood the problem correctly, let’s discuss the solution to the Diamond Problem.

*/


//------------fix dimond problem

/*
The solution to the diamond problem is to use the virtual keyword. 
We make the two parent classes (who inherit from the same grandparent class) into virtual classes 
in order to avoid two copies of the grandparent class in the child class.

Let’s change the above illustration and check the output:

Code Illustration to Fix the Diamond Problem

*/



#include<iostream>
using namespace std;
class Person { //class Person
public:
    Person() 
    {
         cout << "Person::Person() called" << endl; 
    } //Base constructor
    Person(int x)
     { 
        cout << "Person::Person(int) called" << endl; 
     }
};
 
class Father : virtual public Person { //class Father inherits Person
public:
    Father(int x):Person(x) 
      {
       cout << "Father::Father(int) called" << endl;
    }
};
 
class Mother : virtual public Person { //class Mother inherits Person
public:
    Mother(int x):Person(x) 
    {
        cout << "Mother::Mother(int) called" << endl;
    }
};
 
class Child : public Father, public Mother  { //class Child inherits Father and Mother
public:
    Child(int x):Mother(x), Father(x) 
    {
        cout << "Child::Child(int) called" << endl;
    }
};
 
int main()  {
    Child child(30);
}



/*
Here we have used the virtual keyword when classes Father and Mother inherit the Person class. 
This is usually called “virtual inheritance,
" which guarantees that only a single instance of the inherited class (in this case, the Person class) is passed on.

In other words, the Child class will have a single instance of the Person class, shared by both the Father and Mother classes. 
By having a single instance of the Person class, the ambiguity is resolved.

*/
