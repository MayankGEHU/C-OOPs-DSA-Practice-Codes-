#include<iostream>
using namespace std;

int binarySearch(int arr[], int low,int high, int key ){
    if(low <= high){
        int mid = (low + high)/2;


        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, low, mid -1, key);
        }
        else{
            return binarySearch(arr, high, mid + 1, key);
        }
        
    }
}
int main(){

}