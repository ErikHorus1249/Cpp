#include <iostream>
using namespace std;
int vs[100000];
void Init(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void merge(int list[],int low,int mid,int high)
{
	int i, mi, k, lo, temp[50];
	lo = low;
	i = low;
	mi = mid + 1;
	while ((lo <= mid) && (mi <= high))
	{
		if (list[lo] <= list[mi])
		{
			temp[i] = list[lo];
			lo++;
		}
		else
		{
			temp[i] = list[mi];
			mi++;
		}
		i++;
	}
	if (lo > mid)
	{
		for (k = mi; k <= high; k++)
		{
			temp[i] = list[k];
			i++;
		}
	}
	else
	{
		for (k = lo; k <= mid; k++)
		{
			temp[i] = list[k];
			i++;
		}
	}
	for (k = low; k <= high; k++)
	{
		list[k] = temp[k];
	}
}
void partition(int list[],int low,int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high) / 2;
		partition(list, low, mid);
		partition(list, mid + 1, high);
		merge(list, low, mid, high);
	}
}
int search(int a[],int n)
{
	int dem=0;
	for(int i=n-1;i>=0;i--)
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]<=(a[i]/2)&&vs[j]==0)
			{
				a[j]=0;
				vs[j]=1;
			}
		}
	for(int i=0;i<n;i++)
		if(a[i]) dem++;
	return dem;
}
main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a[100000],n;
		cin>>n;
		Init(a,n);
		partition(a,0,n-1);
		cout<<search(a,n)<<endl;
		t--;
	}
	
}
