#include <bits/stdc++.h>
using namespace std;

#define SZ 1000
int ara[SZ];
vector <int> v;

void subset(int k, int n){

    //cout << k << endl;
	if(k == n + 1){

		printf("{ ");
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << ", ";
		}
		//if(v.size() > 0) cout << v[v.size() - 1];
		puts("}");
		return;

	}else{

		subset(k + 1, n);
		v.push_back(ara[k]);
		subset(k + 1, n);
		v.pop_back();
	}
}

int main(){

	int n;
	printf("Enter size of array: ");
	cin >> n;
	puts("Enter array of elements: ");
	for(int i = 1; i <= n; i++) cin >> ara[i];
	//for(int i = 1; i <= n; i++) cout <<  ara[i] << endl;

    puts("All possible subset: ");
    subset(1, n);

    return 0;

}
