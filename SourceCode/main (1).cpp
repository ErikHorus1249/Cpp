#include<iostream>
#define mod 1000000007
using namespace std;
long long mu(long long n,long long m)
{
    if(n==0)return 1;
    long long temp=mu(n,m/2)%mod;
    if(m&1) return ((temp%mod)*(temp%mod))%mod;
    return ((temp%mod)*(temp%mod)*n)%mod;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
	{
	    long long n;
	    long long m;
        cin >> n >> m;
        if(m==0)
            {
                cout<<"1"<<endl;
                continue;
            }
        cout<< mu(n,m)<<endl;
	}
	return 0;
}
