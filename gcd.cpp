#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){

    int a, b;
    printf("Enter value of a b: ");
    cin >> a >> b;

    printf("GCD(%d, %d) is: %d\n", a, b, gcd(a, b));

    return 0;
}
