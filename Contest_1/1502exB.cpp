#include <bits/stdc++.h>

using namespace std;

int a[20],n,m;

void init ()
{
    cin >> n>> m;
    for (int i=0;i<n;i++)
        a[i]=0;
}

string output()
{
    string s="";
    for(int i=0;i<n;i++)
        s= s+ (a[i]?'B':'A');
    return s;
}
bool check()
{
    int s=0;
    int dem =0;
    for (int i =0 ;i<n;i++)
        if (a[i]==0)
    {
        dem++;
    }
    else
    {
        if (dem == m ) s++;
        dem =0;
    }
    if (dem ==m ) s++;
    if (s==1) return true;
    return false;
}
vector <string> bla;
void tim(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1)
            {
                if (check())
                {
                    bla.push_back(output());
                }
            }
        else
            tim(i+1);
    }
}

int main()
{
    init();
    tim(0);
    cout << bla.size() <<endl;
    for (int i=0;i<bla.size();i++)
        cout << bla[i] << endl;
    return 0;
}
