#include <stdio.h>
#include <iostream>
using namespace std;
 
long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}
 
int main()
{
	int sobo;
	long a, b;
	cin>>sobo;
	for(int i=0;i<sobo;i++){
		cin>>a;
		cin>>b;
	}
	for(int i=0;i<sobo;i++){
		cout <<ucln(a,b)<<a*b/ucln(a,b)<<endl;
	}
   
    return 0;
}
