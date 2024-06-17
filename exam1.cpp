#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two sorted subarrays
void merge(vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    
    // Create temporary arrays
    vector<int> left(n1);
    vector<int> right(n2);
    
    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];
    
    // Merge the temporary arrays back into arr[low..high]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = low; // Initial index of merged subarray
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergeSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find the middle point
        int mid = low + (high - low) / 2;
        
        // Sort first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        
        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

int main() {
    vector<int> arr = {29, 12, 55, 17, 28, 35, 27, 48, 33, 52, 45, 14};
    int n = arr.size();
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
   
}