#include<stdio.h>
#include<conio.h>

int TongCs(int a){
	int Tong = 0;
	While(a>0){
		Tong = Tong + (a%10);
		a = a/10;
	}
	if(Tong % 10 == 0) return 1;
	else return 0;
}

main(){
	int n,a;
	scanf("%d",&n);
	for(int i = 0; i< n-1; i++){
		scanf("%d",&a);
		if(Tongcs(a)) printf("\nYES\n");
		else printf("\nNO\n");
	}
}
