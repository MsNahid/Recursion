#include <bits/stdc++.h>
using namespace std;

void for_ascending(int n, int i){

    if(i == n + 1) return;
    for_ascending(n, i + 1);
    printf("%d\n", i);
}

int main(){

    int n;
    printf("Enter value of n: ");
    cin >> n;

    puts("Output:");
    for_ascending(n, 0);

    return 0;
}

