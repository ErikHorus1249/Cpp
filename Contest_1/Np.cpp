#include<iostream>
using namespace std;
int a[100], n ;
bool check = false;
void display(){
	int dem = 0;
	for (int i = 1; i <= n; i++){
		if (a[i] == 1) dem++;
	}
	if (dem == 2){
		for (int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << endl;
	}
}
void sinh(){
	int i = n;
	while (a[i] == 1 & i>0){
		i--;
	}
	if (i == 0) check = true;
	else
	{
		a[i] = 1;
		for (int j = i + 1; j <= n; j++){
			a[j] = 0;
		}
	}
}
void run(){
		while (!check){
		sinh();
		display();
	}
}
 main(){
	cin>>n;
	run();

}
