#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int res=0;
    int ans=0;
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
        {
            ans++;
            continue;
        }
        if (s[i]==')' && ans)
        {
            ans--;
            continue;
        }
        res++;
        ans++;
    }
    cout << res + ans/2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
