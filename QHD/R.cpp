#include<iostream>
using namespace std;
int F[1001][51],a[1005];
main() {
	int n,k,i,j; long long s = 0;
	cin>>n>>k;
	for(i=1;i<=n;i++){ 
		cin>>a[i]; 
		s = (s+a[i])%k; 
	}
	f[0][0] = 0; 
	for(i=1;i<k;i++) F[0][i] = 1e9;
	for(i=1;i<=n;i++) 
		for(j=0;j<k;j++)
			F[i][j] = min(F[i-1][j],F[i-1][((j-a[i])%k+k)%k]+1);
	cout<<n-F[n][s%k];
} 

