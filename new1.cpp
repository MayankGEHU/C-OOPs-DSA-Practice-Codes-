#include <iostream>
#include <algorithm>

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int l = left + 1;
    int r = right;
    while (l <= r) {
        if (arr[l] < pivot && arr[r] > pivot) {
            std::swap(arr[l], arr[r]);
            l++;
            r--;
        }
        if (arr[l] >= pivot) {
            l++;
        }
        if (arr[r] <= pivot) {
            r--;
        }
    }
    std::swap(arr[left], arr[r]);
    return r;
}

int kth_Largest_Element(int arr[], int n, int k) {
    int left = 0, right = n - 1, kth;
    while (1) {
        int idx = partition(arr, left, right);
        if (idx == k - 1) {
            kth = arr[idx];
            break;
        }
        if (idx < k - 1) {
            left = idx + 1;
        } else {
            right = idx - 1;
        }
    }
    return kth;
}

int main() {
    int n, k;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int kth_largest = kth_Largest_Element(arr, n, k);
    std::cout << "The " << k << "th largest element is: " << kth_largest << std::endl;

    return 0;
}
