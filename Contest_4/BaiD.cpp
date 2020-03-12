#include <bits/stdc++.h>
#include <deque>

using namespace std;

int val(char x)
{
    if (x== '+' || x=='-') return 1;
    if (x=='*' || x=='/') return 2;
    if (x=='^') return 3;
    return 0;
}
void solve()
{
    string s;
    cin >> s;
    stack <char> bla;
    for (int i =0;i<s.length();i++)
    {
        if (s[i]>='a' && s[i] <='z')
        {
            cout << s[i];
            continue;
        }
        if (s[i] =='(')
        {
            bla.push(s[i]);
            continue;
        }
        if (val(s[i]))
        {
            if (bla.size())
                while ((val(bla.top()) >= val(s[i])))
                {
                    cout << bla.top();
                    bla.pop();
                    if (bla.size()==0) break;
                }
            bla.push(s[i]);
            continue;
        }
        while (bla.top() != '(')
        {
            cout << bla.top();
            bla.pop();
        }
        bla.pop();
    }
    while (bla.size())
    {
        cout << bla.top();
        bla.pop();
    }
    cout <<endl;
}
int main()
{
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    int k;
    cin >> k;
    while (k--)
        solve();
    return 0;
}
