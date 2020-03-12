#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long count =1;
    string s;
    string ss;
    cin >> s >> ss;
    //cout << s << ss << endl;
    for (int i=0;i<s.length();i++)
    {
        if ((ss[i]-'0') && s[i]-'0')
        {
            //cout << s[i] << ss[i]<<endl;
            count=(count*2)%1000000007;
            continue;
        }
        if (ss[i]-'0') continue;
        if (!(s[i]-'0')) continue;
        cout << "Nope\n";
        return;
    }

    //cout << count<<endl;
   cout << count/*%1000000007*/ << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    /*int n;
    cin>> n;
    for (int i = 1; i < (1<<n); i++) cout << i << endl;*/
    return 0;
}
