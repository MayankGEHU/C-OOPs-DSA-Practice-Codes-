#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int t  = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count =  0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] < pivot){
            count ++;
        }
    }
    int pivotINdex = s + count;
    swap(arr[pivotINdex], arr[s]);
    int i = s, j = e;
    while(i < pivotINdex){
        i++;

    }


    }





void quickSort(int arr[], int s, int e){
    if( s < e){
        int p =  partition(arr,s,e);
        quickSort(arr, s , p - 1);
        quickSort(arr, p + 1, e);
    }

}
int main(){

}