#include<bits/stdc++.h>
using namespace std;


void nhap(int n, int a[100]){
	
		for(int i = 0; i <n; i++){
		
		cin >> a[i];
		
	}
	
}
int main(){
	
	int n = 5;
	
	int a[100];
	
	nhap(n,a);

	
	for(int i = 0; i< 5; i++){
		
		if(a[i] == 42) break;
		
		else cout << a[i];
	}
	
	
}


