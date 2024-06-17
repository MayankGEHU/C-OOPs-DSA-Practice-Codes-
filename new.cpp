#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key, bool searchFirst) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            if (searchFirst){
                 high = mid - 1; 
            }       
            else{
                low = mid + 1; 
            }      
        }
        else if (arr[mid] < key){
             low = mid + 1;
        }
        else{
            high = mid - 1;
        }     
    }
    return result;
}
void findKeyAndCount(int arr[], int n, int key) {
int firstOccurrence = binarySearch(arr, n, key, true);

if (firstOccurrence == -1) {
    cout << "Key not present in the array.\n";
    return;
}
int lastOccurrence = binarySearch(arr, n, key, false);
int count = lastOccurrence - firstOccurrence + 1;
cout << "Key " << key << " is present in the array.\n";
cout << "Number of duplicate: " << count << endl;

}

int main() {
    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Enter the key to be searched: ";
    cin >> key;


    findKeyAndCount(arr, n, key);

    return 0;
}
