#include<iostream>
using namespace std;

void TOH(int n, char d, char a,char s){
    if( n==1 ){
         cout << "Move Disk " << n << " from " << s << " to " << d << endl;
        return;
    }
    TOH(n-1,s,d,a);
    cout << "Move Disk " << n << " from " << s << " to " << d << endl;
    TOH(n-1,a,s,d);
}


int main(){
int n;
cout<<"Enter the number of disk : ";
cin>>n;
TOH(n,'A','B','C');

return 0;
}

