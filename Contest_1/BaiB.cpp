#include<bits/stdc++.h>
using namespace std;
int n,k,OK=0;
char a[100];
void inkq(){
	for(int i=1 ; i<=n ; i++){
		cout<<a[i];
	}
	cout<<endl;
}
int ktra(){
	int dem=0;//dem so phan tu A
	int dema=0;//dem so lan xuat hien cua k phan tu A 
	for(int i=1 ; i<=n ; i++){
		if(a[i]=='A')
		dem++;
		else{
			if(a[i]=='B')
			if(dem==k){
				dema++;
			}
			dem=0;
		}
	}
	if(dema==1) return 1;
	else 
	return 0;
}
void sinhkt(){
	int i=n;
	while(a[i]=='B'){
		i--;
	}
	if(i==0)
	OK=1;
	else
		if(a[i]=='A'){
			a[i]='B';
			for(int j=i+1;j<=n;j++){
				a[j]='A';
			}
		}
}
int main(){
	cin>>n>>k;
	for(int i=1 ; i<=n ; i++)
		a[i]='A';
	while(OK!=1){
		if(ktra()==1){
			inkq();
		}
	}
	
return 0;
}
