#include <bits/stdc++.h>

using namespace std;

void solve()
{
    stack <int> bla;
    int n;
    cin >> n;
    int a[n];
    for (int i =0; i<n;i++)
        cin >> a[i];
    int res[n];
    //bla.push(a[0]);
    //res[0]=-1;
    int d=0;
    for (int i =0;i<n;i++)
    {
        if (bla.size()==0)
        {
            res[i]=-1;
            bla.push(a[i]);
            continue;
        }
        if (a[i] > bla.top())
        {
            int j=i;
            while (bla.size() && a[i] > bla.top())
            {
                bla.pop();
                res[--j]=a[i];
            }
            res[i]=-1;
        }
        else res[i]=-1;
        bla.push(a[i]);
    }
    for (int i =0;i<n;i++)
        cout << res[i] << " " ;
    cout <<endl;
}
int main()
{
    int t;
    cin>> t;
    while (t--) solve();
    return 0;
}
