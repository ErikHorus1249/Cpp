#include<iostream>
using namespace std;
int a[1005],F[1005];;
main(){
	int n,i,j,kq=1; cin >> n;
	for(i = 1; i <= n; i++)	cin >> a[i];
	for (i = 1; i <= n; i++){
	    F[i] = 1;
	    for (int j = 0; j < i; j++) 
			if (a[j] < a[i]) F[i] = max(F[i], F[j] + 1);
	    kq = max(kq, F[i]);
	}
	cout << kq;
}


