#include<iostream>
using namespace std;
int n,k,a[11],b[11][11],check[11],c[101];
int test()
{
	int s=0;
	for(int i=1;i<=n;i++) s+=b[i][a[i]];
	if(s==k) return 1;
	return 0;
}
void back(int i,int &sc)
{
	for(int j=1;j<=n;j++)
	{
		if(!check[j])
		{
			a[i]=j;
			check[j]=1;
			if(i==n)
			{
				if(test())
				{
					for(int k=1;k<=n;k++)
					{
						c[sc+k]=a[k];
					}
					sc+=n;
				}
			}
			else back(i+1,sc);
			check[j]=0;
		}
	}
}
main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) cin>>b[i][j];
	int s=0;
	back(1,s);
	cout<<(int)s/n<<endl;
	for(int i=1;i<=s;i++)
	{
		cout<<c[i];
		if(i%n==0) cout<<endl;
	}
}
