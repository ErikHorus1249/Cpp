#include<iostream>

using namespace std;
int a[100000];
int n,k;
void Input(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);}
}


int BinarySearch(int a[], int k, int n){
	int left = 1 , right = n;
	while(left<=right){
		int mid=left+(right-left)/2;
		
		if(a[mid] == k) 
			return mid;
	
		if(a[mid] < k) 
			left = mid+1;
		
		else
			right = mid-1;
}
	return -1;
	}
	
int main(){
	int i,left, right,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		Input();
		int kq = BinarySearch(a,k,n);
		if(kq==-1) printf("NO");
			//cout << "NO";
		else printf("%d\n",BinarySearch(a,k,n));
		//	cout << BinarySearch(a,k,n)<<endl;
		
}	
	return 0;
	}
	

