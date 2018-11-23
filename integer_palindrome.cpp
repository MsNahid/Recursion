#include <bits/stdc++.h>
using namespace std;

int pali_integer(int n, int rev){

    if(n == 0) return rev;

    rev = (rev * 10) + (n % 10);
    //cout << rev << endl;
    pali_integer(n / 10, rev);


}

int main(){

   int n;
   printf("Enter value of n: ");
   cin >> n;

   int temp = pali_integer(n, 0);
   if(temp == n){
        puts("Yes palindrome");
   }else{
       puts("Not palindrome");
   }

   return 0;
}
