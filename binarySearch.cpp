#include<iostream>
using namespace std;

int BinarySearch(int arr[],int key, int size){
    int l = 0;
    int h = size - 1; 

    while (l <= h){
        int mid = (h + l)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return -1;   
} 
int main(){
    int time;
    cout << "Enter the case : ";
    cin >> time;

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the element of array : ";
        cin >> arr[i];
    }

    int key;
    for (int i = 0; i < time; i++) {
        cout << "Enter the key : ";
        cin >> key;

        int ans = BinarySearch(arr, key, size);
        if (ans != -1) {
            cout << "Element found";
            cout << endl;
        } else {
            cout << "Element not found";
            cout<<endl;
        }
    }

    return 0;
}
