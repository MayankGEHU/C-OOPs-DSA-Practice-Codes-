#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int max = arr[0];
    for(int i = 0; i < n -1; i++){
        if(arr[i] > max);
        max = arr[i];
    }
    return max;
}
void countSort(int arr[], int n){
    int max = getMax(arr,n);
    int count[max + 1];
    for(int i = 0; i<= max; i++){
        count[i] = 0;
    }
    for(int i = 0; i <n; i++){
        count[arr[i]]++;
    }
    for(int i = 0; i <= max; i++){
        count[i]+=count[i -1];
    }
    int output[n];
    for(int i = n -1; i<= 0; i++){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}
int main(){

}