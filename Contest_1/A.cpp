

#include <iostream>

using namespace std;

int n, k;
int a[100];
bool check = false;

void init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void check1(){
	int dem = 0 ;
	for (int i = 1; i <= n; i++)
	{
		if(a[i] == 1) dem++;
	}
	if(dem == 2){
		for(int i = 1; i<= n; i++){
			cout << a[i];
		}
		cout << endl;
	}
}

void nextString(){
	int i = n;
	while(a[i] == 1){
		i--;
	}
	if(i = 0) check = true;
	else
		{
			a[i] = 1;
			for(int j = i + 1; j <= n; j++){
				a[j] = 0;
			}
		}
}

main(){
	int t;
	cin >> t;
	for(int i = 1; i <= n; i++){
		init();
		while(!check){
			nextString();
			check1();	
		}
	}
}