#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int partition(int arr[], int start, int end){
    // Randomly select a pivot index
    srand(time(0));
    int randomIndex = start + rand() % (end - start + 1);
    
    // Swap the randomly selected pivot element with the last element
    int t = arr[end];
    arr[end] = arr[randomIndex];
    arr[randomIndex] = t;

    int pivot = arr[end];
    int i = (start - 1);
    for(int j = start; j <= end - 1; j++){
        if(arr[j] < pivot){
            i++;
            int t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
    }
    int t = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = t;
    return (i + 1);
}

void quickSort(int arr[], int start, int end){
    if(start < end){
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Element "<< i + 1 <<" : ";
        cin>>arr[i];
    }
    cout<<"Unsorted array is : ";
    printArray(arr, n);
    cout<<endl;

    quickSort(arr, 0, n - 1);

    cout<<"Sorted array is : ";
    printArray(arr, n);

    return 0;
}
