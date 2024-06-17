#include<iostream>
using namespace std;

// Function to find the maximum element in the array
int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
// Function to perform Counting Sort
void countSort(int arr[], int n) {
    // Find the maximum element to determine the size of count array
    int max = getMax(arr, n);

    // Create a count array to store count of each element
    int count[max + 1];
    for(int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Store count of each element in count array
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Modify count array such that count[i] contains
    // the position of the element in the sorted array
    for(int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
    // Create an output array
    int output[n];
    for(int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    // Copy the sorted elements into the original array
    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
// Function to print the elements of the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    printArray(arr, n);

    // Perform Counting Sort
    countSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

