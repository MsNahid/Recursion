#include <bits/stdc++.h>
using namespace std;

int sum(int n){

    if(n == 1) return 1;
    return n + sum(n - 1);
}

int main(){

    int n;
    printf("Enter value of n: ");
    cin >> n;

    printf("Summation of 1 to %d answer : %d\n", n, sum(n));

    return 0;
}


