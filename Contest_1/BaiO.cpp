#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n;
long long s;
long long t[31];
long long cmin ;
long long c = 0;
long long a[31];
long long money = 0;
bool cmp(int x,int y){
	return x > y;
}
 
void Init(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> t[i];
	}
}
void Update(){
	if(money == s){
		if(c < cmin) {
			cmin = c;
		}
	}
}
void Try(int i){
	for(int j = 1; j >= 0; j--){
		a[i] = j;
		c+= a[i];
		money = money + a[i] * t[i];
		if(i == n || money == s) {
			Update();
			return;
		}
		else if(money < s) Try(i+1);	
		c = c - a[i];
		money = money - a[i] * t[i];
 
	}
}
 
main(){
	Init();
	cmin = n;
	sort(t+1,t+n+1,cmp);
	Try(1);
	cout << cmin << endl;
 
}
