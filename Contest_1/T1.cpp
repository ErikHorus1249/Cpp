#include<iostream>

using namespace std ;

int  n , a[100];
bool check = false;
void Init(){
	cin >> n;
	for(int i =1; i<= n; i++){
		a[i] = 0;
	}
}

void Result(){
	for(int i =1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

void Try(){
	int i = n;
	while(a[i] == 1 && i > 0){
		i--;
	}
	if(i == 0) check = true;
	else
	{
		a[i] = 1;
		for(int j = i+1; j<= n; j++){
			a[j] = 0;
		}
	}
}

main(){
	Init();
	while(!check){
		Result();
		Try();
	}
}

