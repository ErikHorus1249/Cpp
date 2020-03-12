#include<iostream>
using namespace std;
long long M=1e9+7;
int mk(int n,int k)
{
	if(!k) return 1;
	long long s=mk(n,k/2);
	if(k%2) return s*s%M*n%M;
	return s*s%M;
}
main()
{
	int N,a,b;cin>>N;
	while(N--)
	{
		cin>>a>>b;	
		cout<<mk(a,b)<<endl;
	}
}
