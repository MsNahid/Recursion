#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <cctype>
#include <string>
#include <vector>
#include <stack>
#include <set>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector <int> vi;
typedef pair<int, int> pi;

#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
#define MAX(i, j) ((i) > (j)) ? (i) : (j)
#define MIN(i, j) ((i) < (j)) ? (i) : (j)
#define ABS(i) (i) < 0 ? -(i) : i
#define PI (2 * acos(0))
#define PB push_back
#define POB pop_back
#define MP make_pair
#define F first
#define S second
#define INF 500000000
#define SZ 100

vi v;
int n, sum, ara[SZ];
int rec_count = 0;

int subset(int k, int curr_sum){

    int cont = 0;
    rec_count++;
	if(k == n + 1){
		int s = 0;
		int len = v.size();

		for(int i = 0; i < len; i++){ s += v[i];  }
		if(s == sum) return 1;
		else return 0;

	}else if(curr_sum <= sum){

		cont += subset(k + 1, curr_sum);
		v.PB(ara[k]);
		cont += subset(k + 1, curr_sum + ara[k]);
		v.POB();

	}else return 0;

	return cont;
}

int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    printf("Enter size of array and sum_value: ");
    cin >> n >> sum;

    printf("Enter elements of array: \n");
    for(int i = 1; i <= n; i++) cin >> ara[i];

    int cont = subset(1, 0);

    printf("Subset summation is equal to %d is %d times.\n", sum, cont);
    printf("Recursion_count: %d\n", rec_count);

   return 0;
}
