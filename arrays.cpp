#include<iostream>
using namespace std;
int getMax(int arr[], int n){
    int max = INT8_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n){
    int min = INT8_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min);
        min = arr[i];
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[100];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"max value is :  "<<getMax(arr,size)<<endl;
    cout<<"min valus is : "<<getMin(arr, size);
}