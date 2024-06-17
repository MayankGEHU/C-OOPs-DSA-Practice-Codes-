// Write a program to remove the character from 1st string which are present in 2nd string.



#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1,str2;
	cout<<"enter the first string: ";
	cin>>str1;
	
	cout<<"enter the second string: ";
	cin>>str2;
	
	for(char c : str2)
	{
		size_t found = str1.find(c);
		while(found!=string::npos)
		{
			str1.erase(found , 1);
			found=str1.find(c);
		}
	}
	cout<<"Resuling string: "<<str1<<"\n";
	return 0;
}
