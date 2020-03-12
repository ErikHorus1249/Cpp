

 
#include <iostream>
using namespace std;
 
const int MAX = 1e6;
int b[MAX];
int a[MAX];
 
 main(){
 	
    int n,t;
    cin >> t;
    while(t--){
 	scanf("%d",&n);
 	for(int i = 0; i< n; i++){
 		
  		cin >> a[i];
 		
	 }
    for(int i = 0;i < MAX; i++) b[i] = 0;
    for(int i = 0; i < n; i++){
        b[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(b[i] > 0){
            cout  << i << " xuat hien " << b[i] << " lan!\n";
        }
    }
}
}
