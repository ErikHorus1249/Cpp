#include <bits/stdc++.h>

using namespace std;
unsigned long long a[93];

char Find(long long n,long long k)
{
    if (k==1)
    {
        if (n&1) return 'A';
        return 'B';
    }
    if (k==2)
    {
        if (n&1) return 'B';
        return 'A';
    }
    //cout << n << " " << k << " " << a[n-1] << endl;
    if (k>a[n-3]) return Find(n-1,k-a[n-3]);
    return Find(n-2,k);
}
void solve()
{
    long long n,k;
    cin >> n >>k;
    //cout << a[n-1] << " " ;
    cout << Find(n,k)<<endl;
}
int main()
{
    a[0]=1;
    a[1]=1;
    for (int i=2;i<=93;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
