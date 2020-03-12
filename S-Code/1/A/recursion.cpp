#include<bits/stdc++.h>
using namespace std;

 float recusion(int n){
 	if(n>=1){
 		return 1/sqrt(n*(n+1)) + recusion(n-1);
	 }else
	 return 0;
 }
 int main(){
 	int n;
 	do{
 		cin >> n;
	 }while(n<=10&&n>=50);
	 cout << recusion(n);
 }
