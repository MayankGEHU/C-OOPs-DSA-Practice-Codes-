// virtual base classes
// ---------------------------This program contains an error and will not compile.
/*

#include <iostream>
using namespace std;

class base {
public:
  int i;
};

// My_Sub_Class1 inherits base.
class My_Sub_Class1 :  public base {
public:
  int j;
};

// My_Sub_Class2 inherits base.
class My_Sub_Class2 : public base {
public:
  int k;
};

--------My_Sub_Class3 inherits both My_Sub_Class1 and My_Sub_Class2.
   This means that there are two copies of base
   in My_Sub_Class3! -------
   
class My_Sub_Class3 : public My_Sub_Class1, public My_Sub_Class2 {
public:
  int sum;
};

int main()
{
  My_Sub_Class3 ob;

  ob.i = 10;  // this is ambiguous; which i???
  ob.j = 20;
  ob.k = 30;

  // i ambiguous here, too
  ob.sum = ob.i + ob.j + ob.k;

  // also ambiguous, which i?
  cout << ob.i << " ";

  cout << ob.j << " " << ob.k << " ";
  cout << ob.sum;

  return 0;
}


*/


// ----------------------------This program uses explicit scope resolution to select i.

/*
#include <iostream>
using namespace std;

class base {
public:
   int i;
};

// My_Sub_Class1 inherits base.
class My_Sub_Class1 :  public base {
public:
   int j;
};

// My_Sub_Class2 inherits base.
class My_Sub_Class2 : public base {
public:
   int k;
};

//--------My_Sub_Class3 inherits both My_Sub_Class1 and My_Sub_Class2.
    This means that there are two copies of base
    in My_Sub_Class3! --------

class My_Sub_Class3 : public My_Sub_Class1, public My_Sub_Class2 {
public:
   int sum;
};

int main()
{
  My_Sub_Class3 ob;

   ob.My_Sub_Class1::i = 10;  // scope resolved, use My_Sub_Class1's i
   ob.j = 20;
   ob.k = 30;

   // scope resolved
   ob.sum = ob.My_Sub_Class1::i + ob.j + ob.k;

   // also resolved here
   cout << ob.My_Sub_Class1::i << " ";

   cout << ob.j << " " << ob.k << " ";
   cout << ob.sum;

  return 0;
}


*/


// ---------------------------------This program uses virtual base classes.


#include <iostream>
using namespace std;

class base {
public:
   int i;
};

// My_Sub_Class1 inherits base as virtual.
class My_Sub_Class1 : virtual public base {
public:
   int j;
};

// My_Sub_Class2 inherits base as virtual.
class My_Sub_Class2 : virtual public base {
public:
   int k;
};

/* My_Sub_Class3 inherits both My_Sub_Class1 and My_Sub_Class2.
    This time, there is only one copy of base class. */
class My_Sub_Class3 : public My_Sub_Class1, public My_Sub_Class2 {
public:
   int sum;
};

int main()
{
  My_Sub_Class3 ob;

  ob.i = 10;  // now unambiguous
  ob.j = 20;
  ob.k = 30;

   // unambiguous
  ob.sum = ob.i + ob.j + ob.k;

  // unambiguous
  cout << ob.i << " ";

  cout << ob.j << " " << ob.k << " ";
  cout << ob.sum;

  return 0;
}