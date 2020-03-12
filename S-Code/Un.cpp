#include <bits/stdc++.h>
using namespace std;

float Recur(int n){
	if(n>=1){
		return (1/sqrt(n*(n+1)))+Recur(n-1);
	}
	else return 0;
}

int main(){
	bool check=true;
	int n;
	cin >> n;
	if(!check){
		cout << "Nhap lai n :";
		cin >> n;
	}
	else{
	float s;
	 s = Recur(n);
	 cout <<"Tong :" << s << endl;
	 }
	 return 0;
}
