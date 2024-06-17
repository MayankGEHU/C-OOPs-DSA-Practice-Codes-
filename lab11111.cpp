#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1; // Incremented i to low + 1
    int j = high;
    while (i <= j) { // Changed while condition to i <= j
        while (arr[i] < pivot && i <= high) { // Added check i <= high
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) { // Added check j >= low + 1
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
            i++; // Incremented i after swap
            j--; // Decremented j after swap
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Unsorted array is : ";
    printArray(arr, n);
    cout << endl;

    quicksort(arr, 0, n - 1);

    cout << "Sorted array is : ";
    printArray(arr, n);

    return 0;
}
