#include <iostream>
using namespace std;

void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int s) {
    for (int i = 0; i < s; i++) {
        cout << " " << arr[i];
    }
    cout << endl; // Add a new line after printing the array
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << " Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    insertion(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
