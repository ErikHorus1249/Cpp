#include<bits/stdc++.h>
using namespace std;
const long long base = 1e9 + 7;

unsigned long long pwr(long long a, long long b)
{
	if (b==0) return 1;
	if (b==1) return a;
	unsigned long long temp=pwr(a,b/2) % base;
	if (b&1)
	{
		temp=(temp*temp)%base;
		return (a*temp)%base;
	}
	return (temp*temp)%base;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin >> n;
	cout << pwr(3,n-1);
	return 0;
}

