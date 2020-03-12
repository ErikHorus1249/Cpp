#include<iostream>

using namespace std;


void Init(){
	cin >> n >> k;
	for(int i =1; i<= n; i++){
		cin >> a[i];
	}
}
int binarySearch(int A[], int key, int left, int right)
{
	left = 1;
	right = n;
    if(left > right) 
        return -1; 

    else{

        int mid = (left + right) / 2;

        if(A[mid] == key) 
            return mid;

        if(A[mid] > key) 
            return binarySearch(A, key, left, mid - 1);

        if(A[mid] < key) 
            return binarySearch(A, key, mid + 1, right);
        }
}

main(){
	int a[100];
	int n,k,key,left,right;
	if(binarySearch(A,key,left,right) == -1) cout << "NO";
	else cout << binarySearch(A,key,left,right) ;
	
}
