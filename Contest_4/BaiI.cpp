#include <bits/stdc++.h>

using namespace std;

int string_to_int(string s)
{
    int res=0;
    stringstream bla;
    bla << s;
    bla >> res;
    return res;
}
void solve()
{
    string s,ss;
    getline(cin,s);
    getline(cin,ss);
    map <string,int> bla;
    s+= " + ";
    ss+= " + ";
    int pre=0;
    // xu li s
    while (s.find(" + ",pre)!=-1)
    {
        int pos = s.find(" + ",pre);
        string str= s.substr(pre,pos-pre);
        int poss=str.find('*');
        int ans = string_to_int(str.substr(0,poss));
        str.erase(0,poss);
        //cout << ans <<  " "  <<str << endl;
        bla[str]+=ans;
        pre = pos +3;
    }
    pre=0;
    // xu li ss
    while (ss.find(" + ",pre)!=-1)
    {
        int pos = ss.find(" + ",pre);
        string str= ss.substr(pre,pos-pre);
        int poss=str.find('*');
        int ans = string_to_int(str.substr(0,poss));
        str.erase(0,poss);
        //cout << ans <<  " "  <<str << endl;
        bla[str]+=ans;
        pre = pos +3;
    }
    string res="";
    map<string,int>::reverse_iterator it;
    for (it=bla.rbegin();it!=bla.rend();it++)
    {
        stringstream sstr;
        sstr << it->second;
        string ans;
        sstr >> ans;
        res = res + ans + it->first + " + ";
        map<string,int>::reverse_iterator itt = it;
        itt++;
        itt++;
        if (itt==bla.rend())
        {
            itt--;
            stringstream dm;
            dm << itt->second;
            string dmm;
            dm >> dmm;
            res = res + dmm + itt->first;
            cout <<res <<endl;
            return ;
        }
    }
    //cout << (++it)->second << (it)-> first <<endl;
}
int main()
{
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    int t;
    cin >> t;
    string s;
    getline(cin,s);
    while (t--) solve();
    return 0;
}
