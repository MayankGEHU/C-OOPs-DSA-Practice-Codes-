#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
            break;
        }
    } return -1;
}
int main(){
    int time;
    cout<<"Enter the time of cases"<<endl;
    cin>>time;
    for(int i=0; i<time; i++){
        
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<size ;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    int ans=linearsearch(arr, size, key);
    if(ans==1){
        cout<<"element found"<<endl;
    } else {
        cout<<"elemnt not found"<<endl;
      }
    } return 0;
}









