#include<iostream>
#include<stack>

using namespace std;

void PUSH( int a[], int *n, int x){
	a[n] = x;
	n++;
}

int POP(int a[], int *n){
	if(n == 0) return -1;
	int x = a[n - 1];
	n --;
	return x;
}

void POPAll(int a[], int *n){
	whhile(n > 0){
		x = POP(a,n);
		cout << x;
		n --;
	}
}


main(){
	int a[100];
	int n = 0;
	PUSH(a,n,12);
	PUSH(a,n,26);
	PUSH(a,n,30);
	PUSH(a,n,27);
	POPAll(a,n);
}
