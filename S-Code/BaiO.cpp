#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0 ; i<n ; i++)
		cin>>a[i];
	
	int count=1;
	for(int i=0 ; i<n-1 ; i++){
		bool test=0;
		for(int j=0 ; j<n-1 ; j++)
			if(a[j] > a[j+1]){
				swap(a[j+1],a[j]);
				test = 1;
			}
		
		if(test){
			cout<<"Buoc "<<count++<<": ";
			for(int k=0 ; k<n ; k++)
				cout<<a[k]<<" ";
			cout<<endl;
		}		
	}
	
	return 0;
}
