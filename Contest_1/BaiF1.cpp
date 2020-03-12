#include<iostream>
#include<cmath>
	
using namespace std;
int a[20] ; 
int dem = 0;

bool OK(int x2, int y2 ){ 
	for(int i = 1; i< x2; i++ )
		if(a[i] == y2|| abs(i-x2) == abs(a[i] - y2) ) return false;
	return true;
}


void Timvt(int i, int n ){
	for(int j = 1; j<= n; j++ )
		if(OK(i,j)) 
		{
			a[i] = j;
			if(i==n) dem++;
			Timvt(i+1,n);
		}
}

int main(){
	int n ;
	cin>>n;
	Timvt(1,n);
	cout<<dem;
	return 0;
}
