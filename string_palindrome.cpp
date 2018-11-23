#include <bits/stdc++.h>
using namespace std;

bool ispali(string s, int r, int l){
    //cout << s << endl;

    return ((r >= l) || (s[r] == s[l] && ispali(s, r + 1, l - 1)));
}

int main(){

    string s;
    printf("Enter a string: ");
    cin >> s;

    int len = s.length();
    if(ispali(s, 0, len - 1)){

        cout<< "Palindrome\n";

    }else{

        cout << "Not palindrome\n";
    }

    return 0;

}
