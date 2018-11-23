#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll boro_mod(ll a, ll b, ll m){

    if(b == 0) return 1 % m;
    if(b & 1){
        return (boro_mod(a, b - 1, m) * a)  % m;
    }else{

        ll must_square = boro_mod(a, b / 2, m);
        return (must_square * must_square) % m;
    }
}

int main(){

    ll a, b, m;
    printf("Enter value of a, b, m: ");
    scanf("%lld%lld%lld", &a, &b, &m);
    //cout << a << " " << b << " " << m << endl;

    printf("(%lld ^ %lld) %% %lld = %lld\n", a, b, m, boro_mod(a, b, m));
    //cout << boro_mod(a, b, m) << endl;

    return 0;
}
