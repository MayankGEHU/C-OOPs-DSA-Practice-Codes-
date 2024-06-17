#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pos = partition(arr, low, high);

        if (pos - low == k - 1)
            return arr[pos];
        if (pos - low > k - 1)
            return quickSelect(arr, low, pos - 1, k);
        return quickSelect(arr, pos + 1, high, k - pos + low - 1);
    }

    return __INT_MAX__;
}

int kthSmallest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, k);
}

int kthLargest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, n - k + 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "The " << k << "th smallest element is: " << kthSmallest(arr, n, k) << endl;
    cout << "The " << k << "th largest element is: " << kthLargest(arr, n, k) << endl;

    return 0;
}