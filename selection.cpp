#include <iostream> 
using namespace std; 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
    } 
} 
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int c,i;
    cout<<"Enter the cases : ";
    cin>>c;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

  for(i = 0; i < c; i++){
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Unsorted Array: ";
    printArray(arr, n);
    cout << endl;

    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    cout << endl;
  }
    return 0;
}