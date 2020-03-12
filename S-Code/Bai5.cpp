#include<stdio.h>


void MangPhu(int a[], int n){
	int b[100], k=0, count=0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i]!=a[j]){
				b[k]=a[i];
				k++;
			}
		}
	}
	for(int k =0; k< n; k++){
		printf("%d",a[k]);
	}
/*	for(int i = 0; i<n; i++){
		for(k = 0; k<n; k++){
			if(a[i] == b[k]) count++;
		}
		printf("\n%d Xuat hien %d lan\n",a[i],count);
	}*/
}
 void nhap(int a[], int &n){
 	scanf("%d",&n);
 	for(int i = 0; i< n; i++){
 		scanf("%d",&a[i]);
	 }
 }

main(){
	int a[100], n, t;
	scanf("%d",&t);
	while(t--){
		nhap(a,n);
		printf("Test %d \n",t+1);
		MangPhu(a,n);
	}

}

