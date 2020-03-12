#include<iostream>

using namespace std;
int a[100000];
long long n,k;
void Init(){
	cin >> n >> k;
	for(int i =1; i<= n; i++){
		cin >> a[i];
	}
}

int binarySearch(int a[], int l, int r, int k) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
 
    
    if (a[mid] == k)
      return mid;
 
    
    if (a[mid] > k)
      return binarySearch(a, l, mid - 1, k);
 	else
    return binarySearch(a, mid + 1, r, k);
  }
 
  return -1;
}

main(){
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		Init();
		if(binarySearch(a,1,n,k) == -1) cout << "NO"<< endl;
		else cout << binarySearch(a,1,n,k)<< endl;
	}
	
}
