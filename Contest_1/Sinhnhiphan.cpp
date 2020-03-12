#include<iostream>
using namespace std;

int a[100];
int n;
void incauhinh(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void test(int a[],int n){
	int dem = 0;
	for (int i = 1; i <= n; i++){
		if (a[i] == 1) dem++;
	}
	if (dem == 2){
		for (int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << endl;
	}
}
void doiso0(int a[],int n,int vt){
	for(int i=vt;i<n;i++){
		a[i]=0;
	}
}
void sinhnhiphan(int a[],int n){

	int i=n-1;
	while(i>0){
		if(a[i]==1) i--;
		if(a[i]==0){
			a[i]=1;
			doiso0(a,n,i+1);
		}
		
	}
}


main(){
	int t,k;
	cin>>n;
	sinhnhiphan(a,n);
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
	test(a,n);
}
