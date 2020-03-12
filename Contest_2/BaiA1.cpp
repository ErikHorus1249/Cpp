#include<iostream>
#include<iomanip>
using namespace std;
int x;
unsigned int n ;


int pow(int x, unsigned int n){
	if(n == 0)
		return 1;
	else if(n % 2 == 0)
			return pow(x,n/2) * pow(x,n/2);
		else
			return 	pow(x,n/2) * pow(x,n/2) * x;	
}

main(){
	int  t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> x >> n;
		cout << pow(x,n)<< endl;
	}
}
