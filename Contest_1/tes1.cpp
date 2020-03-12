#include<iostream>
using namespace std;

int a[5]={0,1,2,3,4};

main(){
	int s = 0;
	for(int i = 0; i < 5; i++){
		s+= a[i];
}
	cout << s;
}
