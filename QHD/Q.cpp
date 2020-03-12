#include<iostream>
using namespace std;
int n,s,a[201],F[40001];
main(){
	int i,j;
	cin>>n>>s;
	for(i=1;i<=n;i++) cin>>a[i];
	F[0]=1;
	for(i=1;i<=n;i++){
		for(j=s;j>=a[i];j--)
			if(F[j-a[i]]==1)
				F[j]=1;
	}
	if(F[s]==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

