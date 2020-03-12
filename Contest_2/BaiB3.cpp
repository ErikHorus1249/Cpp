#include<conio.h>

int binarySearch(int a[100000],int n, int x) {
	int left = 1 ,right = n ;
    while(left <= right) {
        int mid=(right + left)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
            left =mid+1;
        else
            right =mid-1;
    }
    return -1;
}


main() {
    int t,n,x,a[100000];
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&n,&k);
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int kq=binarySearch(a,n,x);
        if( kq == -1) 
        	printf("NO");
        else	
           printf("",BinarySearch(a,n,x));
    }
}
