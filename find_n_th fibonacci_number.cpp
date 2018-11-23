#include <bits/stdc++.h>
using namespace std;

int fibo(int n){

    if(n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main(){

    //index : 0 1 2 3 4 5 6  7  8  9 10
    //fibon : 0 1 1 2 3 5 8 13 21 34 55
    int n;
    printf("Enter value of n: ");
    cin >> n;

    printf("%d th fibonacci number is : %d\n", n, fibo(n));

    return 0;
}
