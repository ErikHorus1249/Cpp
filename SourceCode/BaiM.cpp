#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a[101];
	cin>>n;
	for(int i=0 ; i<n ; i++)
		cin>>a[i];
	int count=1;
	for(int i=0 ; i<n-1 ; i++){
		int min =i;
		for(int j=i+1; j<n; j++)
		{
			if(a[min] > a[j]){
				min = j;
			}
		}	
		swap (a[i], a[min]);	
			cout<<"Buoc "<<count++<<": ";
			for(int t=0 ; t<n ; t++)
				cout<<a[t]<<" ";
			cout<<endl;
	}
}
