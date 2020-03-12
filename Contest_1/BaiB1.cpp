#include<iostream>
using namespace std;
char a[100] ; int n,k;
bool check = false;
void display(){
	int dem = 0;
	for (int i = 1; i <= n; i++){
		if (a[i] == 'A') dem++;
	}
	if (dem == k){
		for (int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << endl;
	}
}
void sinh(){
	int i = n;
	while (a[i] == 'B' || i>0){
		i--;
	}
	if (i == 0) check = true;
	else
	{
		a[i] = 'A';
		for (int j = i + 1; j <= n; j++){
			a[j] = 'B';
		}
	}
}
void run(){
		while (!check){
		display();
		sinh();
	}
}
 main(){
	cin>>n; 
	cin>>k;
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
	run();

}
