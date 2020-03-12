#include<iostream>
#include<conio.h>
using namespace std;

int Tinh(int x,int y){
	
	int UCLN;
	int BCNN;
	BCNN=x*y;
	while(x!=y){
		if(x>y){
			x=x-y;
		}
		else y=y-x;
	}
	UCLN=x;
	BCNN=BCNN/UCLN;
	
	return UCLN;
	return BCNN;
}

int main{
	int x;
	int y;
	int sobo;
	cinn>>sobo;
	for(int i=0;i<sobo;i++){
		cin>>x;
		cin>>y;
	}
	Tinh(x,y);
	return 0;
}
