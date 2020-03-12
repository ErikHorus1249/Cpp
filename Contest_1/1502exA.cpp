#include <iostream>

using namespace std;

int a[20],n,m;

void init ()
{
    cin >> n>> m;
    for (int i=0;i<n;i++)
        a[i]=0;
}

void output()
{
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
}
int sum()
{
    int s=0;
    for (int i=0;i<n;i++)
        s+=a[i];
    return s;
}
void tim(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1)
            {if (sum()==m) output();}
        else
            tim(i+1);
    }
}

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        init();
        tim(0);
    }
    return 0;
}
