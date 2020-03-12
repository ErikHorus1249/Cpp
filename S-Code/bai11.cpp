#include<stdio.h>

void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void sapxep(int n, int a[]){
	int i,j,temp;
	for(i = 0; i < n-1; i++){
		int min = i;
		for(j =i+1; j < n; j++){
			if(a[min]>a[j]){
				temp = a[min];
				a[min] = a[j];
				a[j] = temp;
			}
		}
	printf("Buoc %d : ", i+1);
	for(int i =0; i< n; i++){
		printf(" %d ", a[i]);
	}
	printf("\n");
	}
}


 main(){
 	int a[100], n;
 	nhap(a,n);
 	sapxep(n,a);

 }
