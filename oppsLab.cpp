// 1-WAP to change every letter in a giving string with the letter following it in the alphabet
// for ex-
//  A becomes B 
//  P becomes Q 
//  Z becomes A etc.

#include <iostream>
#include <string>
using namespace std;

string change_letter(string str) 
  {
	int code;
	for (int x = 0; x < str.length(); x++)
	{
		code = int(str[x]);
		if (code == 122)
		{
			str[x] = char(97);
		}
		else if (code == 90)
		{
			str[x] = char(65);
		}
		else if (code >= 65 && code <= 90 || code >= 97 && code <= 122)
		{
			str[x] = char(code + 1);
		}
	}
	return str;
 }  

int main() 
{
   string code ;
   cout<<"Enter the string : "<<endl;
   cin>>code;
   cout<<"Changed string is : "<<change_letter(code)<<endl;
   return 0;
}