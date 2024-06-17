#include<iostream>
using namespace std;

void insert(int arr[], int n){
    int i, j, temp;
    for(i = 1; i < n; i++){ // Changed condition from n - 1 to n
        temp = arr[i];
        j = i - 1; // Initialize j properly
        while(j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void printArray(int arr[], int size){
     for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
     }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Unsorted array is: ";
    printArray(arr, n);
     
    insert(arr, n);

    cout << "\nSorted array is: ";
    printArray(arr, n);
}
