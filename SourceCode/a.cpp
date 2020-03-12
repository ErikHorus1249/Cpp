#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ll> vll;
#define Fpp(i,a,b) for (ll i = (a) ; i <= (b) ; i++)
#define Fmm(i,a,b) for (ll i = (a) ; i >= (b) ; i--)
ll PowM(ll a, ll b, ll mod); // a^b%c
ll eulerPhi(ll n); // so nguyen to cung nhau voi n trong doan tu 1 den n
ll invMod(ll a, ll mod); // nghich dao modulo cua a
vector <ll> allInvMod(ll mod); // tat ca cac nghich dao modulo tu 1 den mod , r[i] == 0 thi khong ton tai.
vector <bool> snt(ll n); // sang nguyen to
void enterVT(vll &vt, ll n);// nhap 1 vector do dai n
bool isPrime(ll n);// kiem tra so nguyen to

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // code
    int test = 1; cin >>test;
    while (test--)
    {
        ll n, k, mod = 1e9+7;
        cin >> n >> k;
        cout << PowM(n,k,mod)<<endl;

    }
}
bool isPrime(ll n)
{
    if (n < 2) return false;
    for (ll i = 2; i*i <= n ; i++)
        if (n%i == 0) return false;
    return true;
} 
vector <bool> snt(ll n)
{
    vector <bool> ip(n,true);
    ip[0] = false;
    ip[1] = false;
    for (ll i = 0; i*i <= n ; i++)
    {
        if (ip[i])
        for  (ll j = i*i; j <= n ; j+=i)
            ip[j] = false;
    }
    return ip;
}
void enterVT(vll &vt, ll n)
{
    vt.clear();
    for (int i = 0; i < n ; i++)
    {
        ll tmp;
        cin >> tmp;
        vt.push_back(tmp);
    }
}
ll PowM(ll a, ll b, ll mod)
{
    if (b == 0) return 1;
    ll tmp = PowM(a,b/2,mod);
    if (b%2) return tmp*tmp%mod*a%mod;
    return tmp*tmp%mod;
}
ll eulerPhi(ll n)
{
    if (n == 0) return 0;
    ll ans = n;
    for (ll x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;
            while (n % x == 0) n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}
ll invMod(ll a, ll mod)
{
    ll m = eulerPhi(mod);
    return PowM(a,m-1,mod);
}
vector <ll> allInvMod(ll mod)
{
    vector <ll> ans(mod, 1);
    Fpp(i,2,mod-1)
    {
        ans[i] = (mod - (mod/i) * ans[mod%i] % mod) % mod;
    }
    return ans;
}
