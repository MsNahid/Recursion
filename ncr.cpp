#include <bits/stdc++.h>
using namespace std;

int ncr(int n , int r){

    if(n == r) return 1;
    if(r == 1) return n;

    return ncr(n - 1, r - 1) + (n - 1, r);
}

int main(){

    int n, r;
    printf("Enter n and r : ");
    cin >> n >> r;

    printf("%dC%d = %d\n", n, r, ncr(n, r));

    return 0;


}
