#include<iostream>
using namespace std;
int fact(int n){
if(n==1 || n==0){
    return n;
}
else{
    return n*fact(n-1);
}
}

int main(){
    int c,i,n;

    cout<<"Enter the number of cases : ";
    cin>>c;
    for(i=0;i<c;i++){
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"The factorial of "<< n<<" is : "<<fact(n)<<endl;
    }
}