#include <bits/stdc++.h>

using namespace std;
long long a[100];
int Find(int n,long long  k)
{
    //if (k+1<(1<<n)) return Find(n-1,k);
    //cout << n<<endl;
    long long temp = a[n-1];
    if (temp==k) return n;
    if (k>temp) return Find(n-1,k-temp);
    return Find(n-1,k);
}
void solve()
{
    long long  n ,k;
    scanf("%lld%lld",&n,&k);
    printf("%d\n",Find(n,k));//<<endl;;
}
int main()
{
    a[0]=1;
    for (int i=1;i<=55;i++)
        a[i]=a[i-1]*2;
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    long long k;
    scanf("%lld",&k);
    while (k--) solve();
    return 0;
}
