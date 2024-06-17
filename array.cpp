#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the size of the array"<<endl;
   cin>>n;
   int arr[n];
   cout<<"enter the elements of an array";
   for(int i=0;i<n;i++){
    cin>>arr[i];// decleration
}
cout<<"the elements of the array is ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
}