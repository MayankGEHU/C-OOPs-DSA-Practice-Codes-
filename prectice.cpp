// #include<iostream>
// using namespace std;
// int merge(int arr[], int l, int h){
//     int mid = (l + h)/2;
//     int n = l - h + 1;
//     int i = l;
//     int j = mid + 1;
//     int k =0;
//     int result[n];
//     while(i < mid && j <= h){
//         if(arr[i] < arr[j]){
//             result[k] = arr[i];
//             i++;
//         }
//         else{
//             result[k] = result[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < mid){
//         result[k] = arr[i];
//         i++;
//         k++;
//     }
//     while(j <= h){
//         result[k] = arr[j];
//         j++;
//         k++;
//     }
//     for(k = 0; k < n; k++){
//         arr[l + k ] = result[k];
//     }
// }
// void mergeSort(int arr[], int l, int h){
//     if(l < h){
//         int mid = ( l + h)/2;
//         mergeSort(arr, l , mid);
//         mergeSort(arr, mid + 1, h);
//         merge(arr, l ,h);
//     }
// }
// void Printarray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout<< arr[i] <<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int arr[n];
//     for(int i  = 0; i < n; i++){
//         cout<<"Element "<< i + 1 << " : ";
//         cin>>arr[i];
//     }
//     cout<<"Unsorted array is : ";
//     Printarray(arr,n);

//     mergeSort(arr, 0, n -1);
//     cout<<"Sorted array is : ";
//     Printarray(arr,n);
//     return 0;    
// }




#include<iostream>
using namespace std;

void merge(int arr[], int low, int high){
    int mid = (low + high)/2;
    int n = low - high + 1;
     int i  = low;
     int j = mid + 1;
     int k = 0;
     int result[n];

     while(i < mid && j <= high){
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
     while(i < mid){
        result[k] = result[i];
        i++;
        k++;
     }
     while( j <= high){
        result[k] = result[j];
        j++;
        k++;
     }
     for( k = 0; k < n; k++){
        arr[low + k] = result[k];
     }
}

void MergSort(int arr[], int low, int high){

    int mid = ( low + high)/2;
    MergSort(arr, low, mid);
    MergSort(arr, mid + 1, high);
    merge(arr, low , mid);


}
int main(){
    
}