#include <iostream>
using namespace std;
int a[101],F[101][25005];
main(){
	int c,n,i,j;
	cin>>c>>n;
	for(i = 1; i <= n; i++)	cin >> a[i];
	for(i = 1; i <= n; i++)
		for(j = 0; j <= c; j++){
			F[i][j] = F[i-1][j];
			if(a[i] <= j)
				F[i][j] = max(F[i][j], F[i-1][j-a[i]]+a[i]);
		}
	cout << F[n][c];
}


