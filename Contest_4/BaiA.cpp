#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> bla;
    stack <int> ala;
    string s;
    while (cin >> s)
    {
        if (s=="push")
        {
            int temp;
            cin >> temp;
            bla.push(temp);
            continue;
        }
        if (s=="pop")
            if (bla.size())
            {
                bla.pop();
                continue;
            }
        if (bla.size()==0)
        {
            cout << "empty\n";
            continue;
        }
        ala=bla;
        vector <int>temp;
        while (ala.size())
        {
            int x= ala.top();
            temp.push_back(x);
            ala.pop();
        }
        reverse(temp.begin(),temp.end());
        for (int i =0;i<temp.size();i++)
            cout << temp[i] << " ";
        cout << endl;
    }
    return 0;
}
