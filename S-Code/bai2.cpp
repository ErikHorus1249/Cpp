#include<iostream>

using namespace std;

void nhap(int &n, int a[]){
	cin >> n;
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
}

void Check(int n, int a[]){
	int x  = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > a[i+1]){
			for(int k = x; k < i+1; k++){
				cout << a[k];
				x = i+1;
			}
			cout << "\n";
		}
		
	}
}

main(){
	int a[100], n, t;
	cin >> t;
	while(t--){
		nhap(n,a);
		Check(n,a);
	}
}

