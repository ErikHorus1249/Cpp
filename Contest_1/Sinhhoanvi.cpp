#include<iostream>
using namespace std;
bool OK = true;
int n, a[100], dem = 0;

void Init(){
	cin >> n;
	for(int i =1; i <= n; i++){
		a[i] = i;
	}
}
void Result(){
	for(int i =1; i<= n; i++){
		cout << a[i];
	}
	cout << endl;
}
 void Next_Permutation(){
	int j = n ;
	while (j > 0 && a[j] > a[j+1]) j--;
	if(j > 0) {
		int k = n;
		while(a[j] > a[k]) k--;
		int t = a[j] ; a[j] = a[k]; a[k] = t;
		int r = j + 1, s = n ;
		while(r <= s){
			t = a[r] ; a[r] = a[s] ; a[s] = t;
			r ++; s--;
		} 
	}
	else OK = false;
 }
 main(){
 	Init();
 	while(OK){
 		Result();
 		Next_Permutation();
	 }
 }
