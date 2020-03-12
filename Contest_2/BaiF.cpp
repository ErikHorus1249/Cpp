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
    bool check =false;
    string c="";
    for (int i=a.length()-1;i>=0;i--)
    {
        if (a[i]+b[i]-'0'-'0'+check >= k)
        {
            c=(char)(a[i]+b[i]+ check -k-48)+c;
            check = true;
        }
        else
        {
            c=(char)(a[i]+b[i]+ check -48)+c;
            check = false;
        }
    }
    if (check) c='1'+c;
    cout << c;
    return 0;
}
