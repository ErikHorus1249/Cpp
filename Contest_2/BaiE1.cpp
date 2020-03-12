#include <iostream>
using namespace std;
int base=1e9+7;
struct Matrix
{
	long long c[2][2];
	Matrix()
	{
		c[0][0]=0;
		c[0][1]=1;
		c[1][0]=1;
		c[1][1]=1;
	}
};
Matrix operator * (Matrix a , Matrix b)
{
	Matrix kq;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			kq.c[i][j]=0;
			for(int k=0;k<2;k++)
			{
				kq.c[i][j]=(kq.c[i][j]+a.c[i][k]*b.c[k][j])%base;
			}
		}
	}
	return kq;
} 
Matrix powmod(Matrix a, long long n)
{
	if(n==1) return a;
	if(n%2!=0) return powmod(a,n-1)*a;
	Matrix tmp=powmod(a,n/2);
	return tmp*tmp;
}
int fibo_search(long long n, long long k)
{
	Matrix a,b;
	long long l=10;
	while(l>1)
	{
		a=powmod(b,n);
		l=a.c[0][1]-a.c[0][0];
	//	cout<<a.c[0][1]<<" "<<a.c[0][0]<<endl;
		if(k>=l)
		{
			n=n-1;
			k=k-l;
		}
		else
		{
			n=n-2;
		}
	//	cout<<k<<" "<<n<<" "<<l<<endl<<endl;
	}
	return k;
}
main()
{
	int t;
	long long n,k;
	for(int i = 1; i <= t; i++){
	cin>>n>>k;
	int x=fibo_search(n,k);
	if(x==0) cout<<"B"<<endl;
	else cout<<"A"<<endl;
}
}

