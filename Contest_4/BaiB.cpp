#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> bla;
    int n ;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s=="PUSH")
        {
            int temp;
            cin >> temp;
            bla.push(temp);
            continue;
        }
        if (s=="POP")
        {
            if (bla.size()) bla.pop();
            continue;
        }
        if (bla.size())
            cout << bla.top()<< endl;
        else cout <<"NONE"<<endl;
    }
    return 0;
}
