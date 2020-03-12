#include<iostream>

using namespace std;
int a[100];
int n,k,key,left,right;

void Init(){
	cin >> n >> k;
	for(int i =1; i<= n; i++){
		cin >> a[i];
	}
}
int binarySearch(int a[], int key, int left, int right)
{
	left = 1;
	right = n;
    if(left > right) 
        return -1; 

    else{

        int mid = (left + right) / 2;

        if(a[mid] == key) 
            return mid;

        if(a[mid] > key) 
            return binarySearch(a, key, left, mid - 1);

        if(a[mid] < key) 
            return binarySearch(a, key, mid + 1, right);
        }
}

main(){

	if(binarySearch(a,key,left,right) == -1) cout << "NO";
	else cout << binarySearch(a,key,left,right) ;
	
}
