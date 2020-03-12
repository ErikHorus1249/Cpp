#include <bits/stdc++.h>
using namespace std;
int F[1001][1001];
main(){
	string s1,s2; int n,m, i,j;
	cin >> s1 >> s2;
	n=s1.length(); m=s2.length();
	for(i=0; i<n; i++) F[i][0]=0;
	for(i=0; i<m; i++) F[0][i]=0;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(s1[i]==s2[j]) F[i+1][j+1]=F[i][j]+1;
			else F[i+1][j+1]=max(F[i+1][j],F[i][j+1]);
	cout << F[n][m];
} 

