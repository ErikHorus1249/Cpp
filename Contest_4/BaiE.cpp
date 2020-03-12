#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int maxx=0;
    stack <int> bla;
    stack <int> ala;
    bla.push(-1);
    for (int i =0;i<s.length();i++)
    {
        if (s[i]=='(') bla.push(i);
        else
        {
            if (bla.top()!=-1 && s[bla.top()]=='(')
            {
                bla.pop();
                if (i-bla.top() > maxx)
                    maxx = i-bla.top();
            }
            else bla.push(i);
        }
        /*cout << i << "  ";
        ala=bla;
        vector <int> temp;
        while (ala.size())
        {
            temp.push_back(ala.top());
            ala.pop();
        }
        reverse(temp.begin(),temp.end());
        for (int i=0;i<temp.size();i++) cout << temp[i] << " " ;
        cout <<  " " << maxx << endl;*/
    }
    cout  << maxx<<endl;
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
