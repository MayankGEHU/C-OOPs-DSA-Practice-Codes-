#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key, int index){
 if(arr[0] == key){
    return index;
 }
 else if(index < size -1){
    return(linearSearch(arr -1, size-1,key, index+1 ));
 }
 else{
    return -1;
 }
}
int main(){
int bhg_ja;
cout<<"Enter the case : ";
cin>>bhg_ja;
cout<<endl;

int size;
cout<<"Enter the size of array : ";
cin>>size;
cout<<endl;

int arr[size];
cout<<"Enter the element you want to insert : ";
for(int i =0; i < size; i++){
   cin>>arr[i];
}

int key;
for(int i = 0; i < bhg_ja; i++){
   cout<<"Enter key :";
   cin>>key;

  int index = linearSearch(arr, size, key, 0);
  if(index != -1){
   cout<<"The Element "<< key<<" in found at index "<< index <<"..."<<endl;
  }
  else{
   cout<<"Element is not found";
  }
}
return 0;
}





