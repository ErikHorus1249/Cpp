#include<iostream>
using namespace std;
char a[100];
int n,k,OK = 0;
void init(){
	cin>>n;
	cin>>k;
	for(int i=1;i<=n;i++)
		a[i]='A';
}
void inkq(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
}
void next(){
	int i=n;
	while(i>0&&a[i]=='B'){
		i--;
	}
	if(i==0) OK = 1;
	else{
			a[i] = 'B';
			for(int j=i+1; j<=n;j++){
				a[i] = 'A';
			}
	}
	
}
int ktra(){
	int dem=0;//dem so phan tu A
	int dema=0;//dem so lan xuat hien cua k phan tu A 
	for(int i=1 ; i<=n ; i++){
		if(a[i]=='A')
		dem++;
		else{
			if(dem==k){
				dema++;
			}
			dem=0;
		}
	}
	if(dema)
	return 1;
	return 0;
}
main(){
	init();
	while(OK == 1){
		if(ktra()){
			inkq();
		}
		next();
	}
}
