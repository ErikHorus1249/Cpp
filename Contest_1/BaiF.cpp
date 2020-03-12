#include<iostream>
#include<cmath>
using namespace std;
int n,Dem = 0;
int a[100];
bool OK(int x2 , int y2){
	for(int i=1; i < x2; i++)
		if(a[i] == y2 || abs(i=x2) == abs(a[i]-y2)) return false;
		return  true;	
	
}

int Dem(int n){
	for(int i=1 ; i<= n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void Try(int i , int n){
	for(int j; j <= n ; j++){
		if(OK(i,j)){
			a[i] = j;
		}
		if(i==n) Dem(n);
		Try(i+1,n);
	}
}

main(){
	cin >> n;
	Try(1,n);
	return 0;
	
}

