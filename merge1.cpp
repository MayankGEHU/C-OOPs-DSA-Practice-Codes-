#include<iostream>
using namespace std;

void merge(int arr[], int low, int high){
    int mid = (low + high) / 2;
    int n = high - low + 1;
    int i = low;
    int j = mid + 1;
    int k = 0;
    int result[n];

    while (i <= mid && j <= high){
        if(arr[i] < arr[j]){
            result[k] = arr[i];
            i++;
        }
        else{
            result[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid){
        result[k] =  arr[i];
        i++;
        k++;
    }
    while(j <= high){
        result[k] = arr[j];
        j++;
        k++;
    }

    for(k = 0; k < n; k++){
        arr[low + k] = result[k];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int t;
    cout<<"Enter the cases : ";
    cin>>t;
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


// #include<iostream>
// using namespace std;

// long long comparisons = 0;
// long long inversions = 0;

// void merge(int arr[], int low, int high){
//     int mid = (low + high) / 2;
//     int n = high - low + 1;
//     int i = low;
//     int j = mid + 1;
//     int k = 0;
//     int result[n];

//     while (i <= mid && j <= high){
//         comparisons++;
//         if(arr[i] <= arr[j]){
//             result[k] = arr[i];
//             i++;
//         }
//         else{
//             result[k] = arr[j];
//             j++;
//             inversions += (mid - i + 1);
//         }
//         k++;
//     }

//     while (i <= mid){
//         result[k] =  arr[i];
//         i++;
//         k++;
//     }

//     while(j <= high){
//         result[k] = arr[j];
//         j++;
//         k++;
//     }

//     for(k = 0; k < n; k++){
//         arr[low + k] = result[k];
//     }
// }

// void mergeSort(int arr[], int low, int high){
//     if(low < high){
//         int mid = (low + high) / 2;
//         mergeSort(arr, low, mid);
//         mergeSort(arr, mid + 1, high);
//         merge(arr, low, high);
//     }
// }

// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int t;
//     cout<<"Enter the number of test cases: ";
//     cin>>t;

//     while(t--){
//         int n;
//         cout << "Enter the number of elements: ";
//         cin >> n;

//         int arr[n];
//         cout << "Enter the elements:\n";
//         for (int i = 0; i < n; i++){
//             cout << "Element " << i + 1 << ": ";
//             cin >> arr[i];
//         }

//         comparisons = 0;
//         inversions = 0;

//         mergeSort(arr, 0, n - 1);

//         cout << "Sorted array: ";
//         printArray(arr, n);

//         cout << "Number of comparisons: " << comparisons << endl;
//         cout << "Number of inversions: " << inversions << endl;
//     }

//     return 0;
// }
