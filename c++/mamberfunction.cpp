// Write a  program to create static data member and member function and access them.


#include<iostream>

using namespace std;

class gws
{
public:
	static int staticdata;
	static void staticfunction()
	{
		cout<<"static function\n";
	}
};
int gws::staticdata=71;

int main()
{
	cout<<"Static Data: "<<gws::staticdata<<"\n";
	gws::staticfunction();
	return 0;
}

