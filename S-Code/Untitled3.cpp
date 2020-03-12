#include<stdio.h>
#include<conio.h>

int TongCs(int a){
	int Tong = 0;
	while(a > 0){
		Tong = Tong + (a%10);
		a = a/10;
	}
	if(Tong % 10 == 0) return 1;
	else return 0;
}

main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		if(TongCs(a)) printf("\nYES\n");
		else printf("\nNO\n");
	}
}
