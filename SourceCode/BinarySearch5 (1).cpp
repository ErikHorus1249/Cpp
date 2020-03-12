#include<stdio.h>
int a[100];
int n,k;
void Input(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);}
}


int BinarySearch(int a[], int k, int left=0, int right=n-1){
	if(left<=right){
		int mid=left+(right-left)/2;
		if(k==a[mid]) return mid;
	
		if(k<a[mid]) return right=mid-1;
		else return left=mid+1;
}
	return -1;
	}
	
int main(){
	int i,left, right,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		Input();
		if(BinarySearch(a,k,n)==-1) printf("NO");
		else printf("",BinarySearch(a,k,n));
		
}	
	return 0;
	}
	

