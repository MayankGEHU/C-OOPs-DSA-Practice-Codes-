
#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } 
            else{
                break;
            }
        }
        arr[j + 1] = temp;
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

    InsertionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    cout << endl;
  }
    return 0;
}