#include <iostream>
 
using namespace std;
 
int a[100];
int n;
const int MAX=1e6;
int dem[MAX];
 
 
 
void sapxep()
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(dem[a[j]]< dem[a[j+1]])
			{	
				int lala=a[j];
				a[j]=a[j+1];
				a[j+1]=lala;	
			}	
 
		}
	}
}
 
void nhap()
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
}
 
void xuat()
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
 
main()
{
	nhap();
	for(int i=0; i<MAX; i++)
	{
			dem[i]=0;
	}
	for(int i=0; i<n; i++)
	{
		dem[a[i]]++;
	}
	sapxep();
	xuat();
}
