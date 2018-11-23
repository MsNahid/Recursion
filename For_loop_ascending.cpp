#include <bits/stdc++.h>
using namespace std;

void for_ascending(int n, int i){

    printf("%d\n", i);
    if(i == n) return;
    for_ascending(n, i + 1);
}

int main(){

    int n;
    printf("Enter value of n: ");
    cin >> n;

    puts("Output:");
    for_ascending(n, 0);

    return 0;
}
