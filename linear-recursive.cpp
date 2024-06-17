#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key, int index) {
    if (arr[index] == key){
        return index;
    }
    else if (index < size - 1){
        return linearSearch(arr, size, key, index + 1);
    }
    else{
        return -1;
    }
}
int main(){
    int cases;
    cout << "Enter the number of cases: ";
    cin >> cases;
    cout << endl;

    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << endl;

    int arr[size];
    cout << "Enter the elements you want to insert: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    for (int i = 0; i < cases; i++){
        cout << "Enter key: ";
        cin >> key;

        int index = linearSearch(arr, size, key, 0);
        if (index != -1){
            cout << "The element " << key << " is found at index " << index << "." << endl;
        }
        else{
            cout << "Element is not found." << endl;
        }
    }
    return 0;
}
