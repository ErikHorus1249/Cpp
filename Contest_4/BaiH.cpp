#include <bits/stdc++.h>

using namespace std;
typedef pair <int,int> pii;
vector <pii> bla;
bool a[200];
bool m[200];
string s;
set <string> res;
void printResult()
{
    memset(m,0,sizeof(m));
    for (int i =0;i<bla.size();i++)
        if (a[i]==1)
    {
        m[bla[i].first]=1;
        m[bla[i].second]=1;
    }
    //for (int i =0;i<)
    string ans="";
    for (int i=0;i<s.length();i++)
        if (!m[i]) ans+=s[i];
    res.insert(ans);
    /*for (int i =0;i<bla.size();i++)
        cout << a[i] << " " ;
    cout <<endl;*/
}
void bt(int i)
{
    if (i==-1)
    {
        printResult();
        return;
    }
    a[i]=0;
    bt(i-1);
    a[i]=1;
    bt(i-1);
}
int main()
{
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    cin >> s;
    stack <int> ala;
    for (int i =0;i<s.length();i++)
        if (s[i]=='(') ala.push(i);
        else if (s[i]==')')
        {
            bla.push_back(pii(ala.top(),i));
            ala.pop();
        }
    /*for (int i=0;i<bla.size()-1;i++)
        if (bla[i].first == bla[i+1].first+1 && bla[i].second == bla[i+1].second-1)
        {
            blist[bla[i].first]=1;
            blist[bla[i].second]=1;
        }
    cout << s<<endl;*/
    /*for (int i =0;i<bla.size();i++)
        cout << bla[i].first << " " << bla[i].second << endl;*/
    //sort(bla.begin(),bla.end());
    bt(bla.size()-1);
    res.erase(s);
    for (set <string>::iterator i =res.begin();i!=res.end();i++)
        cout << *i <<endl;
    //cout << res.size()<<endl;
    //cout << dem <<endl;
    return 0;
}
//(30-((55/(86/14/((90)-35/((95*49)+66/((56))))))))
//(30-((55/(86/14/((90)-35/((95*49)+66/(56)))))))
