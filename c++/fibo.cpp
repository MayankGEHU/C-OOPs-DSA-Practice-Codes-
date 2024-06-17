#include<iostream>
using namespace std;

int fibo(int n){
    if (n <= 1){
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n;
    cout << "Enter the number of fibo : ";
    cin >> n;

    cout << "Fibonacci series up to the " << n << "th term: ";
    for (int i = 0; i < n; i++){
        cout << fibo(i) << " ";
    }
    cout << "\nThe " << n << "th term of Fibonacci series is: " << fibo(n - 1) << endl;

    return 0;
}


