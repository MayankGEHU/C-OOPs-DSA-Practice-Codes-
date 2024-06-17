// #include<iostream>
// #include<cmath>
// using namespace std;

// int jumpSearch(int arr[], int n, int item) {
//     int i = 0;
//     int m = sqrt(n);
//     while (arr[min(m, n) - 1] < item) {
//         i = m;
//         m += sqrt(n);
//         if (i >= n)
//             return -1;
//     }
//     while (arr[i] < item) {
//         i++;
//         if (i == min(m, n))
//             return -1;
//     }
//     if (arr[i] == item){
//         return i;
//     }
//     return -1;
// }

// int main() {
//     int time;
//     cout << "Enter the number of cases: ";
//     cin >> time;

//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cout << "Enter the element of array: ";
//         cin >> arr[i];
//     }

//     int key;
//     for (int i = 0; i < time; i++) {
//         cout << "Enter the key: ";
//         cin >> key;

//         int ans = jumpSearch(arr, size, key);
//         if (ans != -1) {
//             cout << "Element found at index " << ans;
//             cout << endl;
//         } else {
//             cout << "Element not found";
//             cout << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int partition(int arr[], int low, int high, int& comparisons, int& swaps) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     while (i < j) {
//         while (arr[i] <= pivot && i < high) {
//             i++;
//             comparisons++;
//         }
//         while (arr[j] > pivot) {
//             j--;
//             comparisons++;
//         }
//         if (i < j) {
//             swap(arr[i], arr[j]);
//             swaps++;
//         }
//     }
//     swap(arr[low], arr[j]);
//     swaps++;
//     return j;
// }

// void quickSort(int arr[], int low, int high, int& comparisons, int& swaps) {
//     if (low < high) {
//         int partitionIndex = partition(arr, low, high, comparisons, swaps);
//         quickSort(arr, low, partitionIndex - 1, comparisons, swaps);
//         quickSort(arr, partitionIndex + 1, high, comparisons, swaps);
//     }
// }

// void printArray(int arr[], int n) {
//     cout << "Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int t;
//     cout << "Enter the number of test cases: ";
//     cin >> t;

//     while (t--) {
//         int n;
//         cout << "Enter the number of elements: ";
//         cin >> n;

//         int arr[n];
//         cout << "Enter the elements:" << endl;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int comparisons = 0, swaps = 0;
//         quickSort(arr, 0, n - 1, comparisons, swaps);

//         cout << "Sorted array: ";
//         printArray(arr, n);
//         cout << "Number of comparisons: " << comparisons << endl;
//         cout << "Number of swaps: " << swaps << endl;
//     }
//     return 0;
// }
