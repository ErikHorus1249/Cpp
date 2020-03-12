#include<iostream>

using namespace std;

int n, S;
int a[31];
int Dem = 0;
void sapxep(){
	int temp;
	for(int i=0;i<n;i++){
		for(int j = i+1; j<n ; j++){
			if(a[i] > a[j]){
				temp  = a[i];
				a[i]  = a[j];
				a[j]  = temp;
			}
		}
	}
}
int  Try(){
	for(int i=n ;i>0;i--){
		if(S-a[i] != 0){
			S = S- a[i];
			Dem ++; 
		}
		else {
			Dem = 1;
			break ;
		}
	}
	return Dem;
}

main(){
	cin>>n>>S;
	for(int i = 1;i <= n ; i ++){
		cin >> a[i];
	}
	sapxep;
	cout << Try();
	cout << endl;
}
