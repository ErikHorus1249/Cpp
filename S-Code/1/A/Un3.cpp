#include <bits/stdc++.h>
using namespace std;

int main(){
	float S;
	bool check=true;
	int n;
	cin >> n;
	if(!check){
		cout << "Nhap lai n :";
		cin >> n;
	}
	for(int i=n; i>=1; i--){
		S += 1/sqrt(n*(n+1));
	}
	cout << "Tong : "<<S<<endl;
}
