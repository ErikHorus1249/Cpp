#include<bits/stdc++.h>
using namespace std;
int a[100000];

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int n;
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++)
		{
			int flag=0;
			for (int j=i+1; j<n; j++)
			 if (a[i]<a[j])
			 {
			 	cout<<a[j]<<" ";
				flag=1;
				break;
			 }
			if (flag==0) cout<<"-1 ";
		}
		cout<<endl;
	}
	return 0;
}

