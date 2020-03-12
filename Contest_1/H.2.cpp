#include <iostream>
using namespace std;
 
int dem = 0;
int n, k, s;
void dequy (int x, int d, int S)
{
	if (S>s) return;
	if (d==0)
	{
		if (S==s) dem++;
	}
	else
	{
		for (int i=x+1; i<=n; i++)
		{
			dequy (i, d-1, S+i);
		}
	}
}
 
int main ()
{
	while (1)
	{
		cin>>n>>k>>s;
		if (n==0 && k==0 && s==0) break;
		dem=0;
		dequy (0, k, 0);
		cout<<dem<<endl;
	}
	return 0;
}
