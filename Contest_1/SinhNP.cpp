#include<bits/stdc++.h>
using namespace std;
#define max 100
#define TRUE 1
#define FALSE 0
int OK = TRUE, dem = 0;
int n;
int a[max];
void init(){
	cin >> n ;
	for(int i = 1; i < n; i++) a[i] = 0;
}

void result(){
	for(int i = 1; i<n; i++){
		cout << a[i] ;
	}
	cout << endl;
}
void Next_bit_string(){
	int i = n;
	while(i>0 && a[i] != 0 ){
		a[i] = 0;
		i--;
	}
	if(i > 0) a[i] = 1;
	else OK = FALSE;
	
}
main(){

		init();
		while(OK){
			result();
			Next_bit_string();
		}
	
}
