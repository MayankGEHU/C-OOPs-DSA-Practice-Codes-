//  Write a c++  program to take an input of object array and sort the strings stored in it.

#include <iostream>
#include <algorithm>
using namespace std;
int MAX_SIZE = 100;
int main()
{
	int n;
	cout << "enter the no of string: ";
	cin >> n;
	string strArray[MAX_SIZE];
	cout << "enter the string" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> strArray[i];
	}
	sort(strArray, strArray + n);
	cout << "sorted string: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << strArray[i] << endl;
	}
	return 0;
}
