
#include<iostream>
#include<stdlib.h> // Include this header for rand() function
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void randomPivot(int arr[], int start, int end){
    int num = start + rand() % (end - start + 1);
    swap(&arr[num], &arr[end]); 
}
int partition(int arr[], int start, int end){
    randomPivot(arr, start, end);
    int pivot = arr[end];
    int i = start - 1;
    for(int j = start; j < end; j++){ 
        if(arr[j] <= pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return i + 1;
}
void quickSort(int arr[], int start, int end){
    if(start < end){
        int p = partition(arr, start , end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
void printArray(int arr[], int s){
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int *arr = new int[n]; // Dynamic allocation of array

    for(int i = 0; i < n; i++){
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Unsorted array is : ";
    printArray(arr, n);
    cout << endl;

    quickSort(arr, 0 , n-1);
    
    cout << "Sorted array is : ";
    printArray(arr, n);

   delete[] arr; // Free the dynamically allocated memory

    return 0;
}

