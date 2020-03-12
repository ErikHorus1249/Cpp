#include <iostream>

using namespace std;
unsigned long long a[93];

char Fiboword(long long n,long long k)
{
    if (k==1)
    {
        if (n&1) return 'A';
        return 'B';
    }
    if (k==2)
    {
        if (n&1) return 'B';
        return 'A';
    }
    
    if (k>a[n-3]) return Fiboword(n-1,k-a[n-3]);
    return Fiboword(n-2,k);
}

int main()
{
    a[0]=1;
    a[1]=1;
    for (int i=2;i<=93;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int t;
    cin >> t;
    while (t--)
        {
        	long long n,k;
    		cin >> n >>k;  
    		cout << Fiboword(n,k)<<endl;
    	}
    return 0;
}
