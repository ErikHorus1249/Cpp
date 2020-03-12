#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k==10)
    {
        int a,b;
        cin >> a >> b;
        cout << a+b;
        return 0;
    }
    string a;
    string b;
    cin >> a >> b;
    if (a.length()>b.length()) swap(a,b);
    while (a.length()<b.length()) a='0'+a;
    //
    bool du =false;
    //cout << a << " " << b<<endl;
    string c="";
    for (int i=a.length()-1;i>=0;i--)
    {
        //cout << a[i]+b[i]-'0'-'0'+du <<endl;
        if (a[i]+b[i]-'0'-'0'+du >= k)
        {
            c=(char)(a[i]+b[i]+du-k-48)+c;
            du=true;
        }
        else
        {
            c=(char)(a[i]+b[i]+du-48)+c;
            du=false;
        }
    }
    if (du) c='1'+c;
    cout << c;
    return 0;
}
