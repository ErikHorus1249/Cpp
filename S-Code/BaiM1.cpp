#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[101];
	cin>>n;
	for(int i=1 ; i <= n ; i++)
		cin>>a[i];
	int count=1;
	for(int i=0 ; i<n-1 ; i++){
		int min =i;
			if(a[min] > a[i+1]){
				min = i +1;
				swap (a[i], a[min]);
			}
			
			cout<<"Buoc "<<count++<<": ";
			for(int t=0 ; t<n ; t++)
				cout<<a[t]<<" ";
			cout<<endl;
	}
}
