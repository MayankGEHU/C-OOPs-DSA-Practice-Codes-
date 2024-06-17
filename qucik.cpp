#include<iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }
    int pivotIndex =  s + count;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if(s < e) {
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Unsorted array is: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}
