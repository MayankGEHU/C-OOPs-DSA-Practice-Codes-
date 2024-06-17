#include<iostream>
using namespace std;
void update(int arr[], int n){

    cout<<"Inside the function : ";
    arr[0] = 120;
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"go back to the main function : ";

}

int main(){
    int arr[3] = {2,3,4};
    update(arr,3);

    for(int i = 0; i < 3; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}