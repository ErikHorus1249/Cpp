#include <bits/stdc++.h>

using namespace std;

void solve()
{
    stack <char> bla;
    string s;
    cin >> s;
    for (int i = 0;i<s.length();i++)
    {
        //cout << i << " " <<s[i] <<endl;
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            bla.push(s[i]);
            continue;
        }
        if (bla.size()==0)
            return cout << "NO\n", void(0);
        if (s[i]==')' && bla.top()!='(')
            return cout << "NO\n", void(0);
        if (s[i]==']' && bla.top()!='[')
            return cout << "NO\n", void(0);
        if (s[i]=='}' && bla.top()!='{')
            return cout << "NO\n", void(0);
        bla.pop();
    }
    if (bla.size()) return cout << "NO\n", void(0);
    cout << "YES\n";
}
int main()
{
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    int k;
    cin >> k;
    while (k--) solve();
    return 0;
}
