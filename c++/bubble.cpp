
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}

int main()
{
	 int n;

     cout << "Enter the number of elements: ";
     cin >> n;

    int arr[n];
     cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
         cout << "Element " << i + 1 << ": ";
         cin >> arr[i];
    }

    bubbleSort(arr, n);

     cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    }
	return 0;
}

