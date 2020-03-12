#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

vector < pair<int,bool> > val;

bool bsearch(int l,int r,int index)
{
    if (l>r) return 0;
    int bla= val[index].first/2;
    int mid = (l+r)/2;
    if (val[mid].first<=bla && val[mid+1].first>bla)
    {
        val.erase(val.begin()+mid);
        val.erase(val.begin()+index);
        return 1;
    }
    if (val[mid].first <=bla) return bsearch(mid,r,index);
    bsearch(l,mid-1,index);
}

void solve()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        val.pb(mp(a,true));
    }
    sort(val.begin(),val.end());
    int dem=0;
    for (int i=val.size()-1;i>0;i--)
        if (bsearch(0,i-1,i))
        {
            dem++;
            i++;
        }
    cout << dem <<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
