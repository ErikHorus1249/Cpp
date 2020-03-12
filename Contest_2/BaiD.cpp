#include<bits/stdc++.h>
using namespace std;
const int mod = 123456789;

void tinh(){
	long long n;
	cin >> n;
	if(n == 1){
		cout << 1;
	}
	else{
		--n;
		int ans = 1;
		int t = 2;
		while(n){
			if(n & 1) ans = (1ll * ans *t) % mod;
			n >>= 1;
		}
		cout << ans;
	}
}

main(){
	int test = 0, dem = 0;
	cin >> test ;
	for(dem = 1; dem <= test; dem ++)
			tinh();
			cout<< endl;
}
