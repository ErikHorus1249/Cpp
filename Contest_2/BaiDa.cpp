#include<iostream>
#define mod 123456789
using namespace std;
long long tinh(long long n)
{
    if(n==0)return 1;
    if(n==1)return 2;
    long long m=tinh(n/2)%mod;
    if(n%2==0) return (m*m)%mod;
    return ((m%mod)*(m%mod)*2)%mod;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
	{
	    long long n;
        cin>>n;
        if(n==0)
            cout<<"1";
        else
        cout<<tinh(n-1)<<endl;
	}
	return 0;
}
