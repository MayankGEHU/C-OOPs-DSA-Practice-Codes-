#include <iostream>
using namespace std;

void swep(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int BubbleSort(int arr[], int n)
{
    int i, j;
    int flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swep(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

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

    BubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}