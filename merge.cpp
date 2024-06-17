#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s + e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }
    for(int i =0; i < len2; i++){
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k = s; // k = mainArrray index
    while (index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }        
    }
    while (index1 < len1){
        arr[k++] = first[index1++];
    }
    while (index2 < len2){
        arr[k++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e){
    if(s < e){
        int mid = (s + e)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e);
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
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
    for (int i = 0; i < n; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Unsorted Array: ";
    printArray(arr, n);
    cout << endl;

    mergeSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
