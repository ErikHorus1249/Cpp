#include <bits/stdc++.h>

using namespace std;

int* init(int &n,int &k)
{
    cin>> n>>k;
    int *ptr =NULL;
    ptr = new int [k];
    for (int i=0;i<k;i++)
        ptr[i]=i+1;
    return ptr;
}
void printResult(int *a,int k)
{
    for (int i=0;i<k;i++)
        cout << a[i]<< " ";
    cout << endl;
}
bool* check(int *a, int n,int k)
{
    bool *ptr = NULL;
    ptr = new bool [n];
    for (int i=0;i<n;i++)
        ptr[i]=false;
    for (int i=0;i<k;i++)
        ptr[a[i]-1]=true;
    return ptr;
}
void nextValue(int *a,int n,int k)
{
    //printResult(a,k);
    bool* b=check(a,n,k);
    //for (int i=0;i<n;i++)
    //    cout << b[i] << " ";
    //cout <<endl;
    int i=k-1;
    while (i>-1 && a[i]==n-k+i+1) i--;
    if (i==-1)
    {
        cout << k <<endl;
        return;
    }
    a[i]++;
    for (int j=i+1;j<k;j++)
        a[j]=a[i]+j-i;
    //nextValue(a,n,k);
    bool c[n]={false};
    for (int i=0;i<k;i++)
        c[a[i]-1]=true;
    //for (int i=0;i<n;i++) cout << c[i] << " ";
    //cout <<endl;
    int s=0;
    for (int i=0;i<n;i++)
        {
            if (b[i]==1 && c[i]==0) s++;
        }
    cout << s << endl;
}
int main()
{
    //freopen("inp.inp","r",stdin);
    //freopen("out.out","w",stdout);
    int temp;
    cin >> temp;
    while (temp--)
    {
        int n,k;
        int *a=init(n,k);
        for (int i=0;i<k;i++)
            cin >> a[i];
    //for (int i=0;i<k;i++)
        nextValue(a,n,k);
    }
    return 0;
}
