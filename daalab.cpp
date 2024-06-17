#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;

}

void quickSort(int arr[], int low , int high){
    int p = partition(arr, low , high);
    quickSort(arr, low , p -1);
    quickSort(arr, p +1, high);
}
void printArray(int arr[], int s){
    for(int i= 0; i < s; i++){
        cout<<" "<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
   for(int i = 0; i < n; i++){
    cout<<"Element "<< i + 1<<" : ";
    cin>>arr[i];
   }

   quickSort(arr,0,n-1);
   cout<<"Sorted array : ";
   printArray(arr,n);

return 0;
}