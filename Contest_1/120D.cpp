#include<iostream>
#include<string.h>

using namespace std;
 
    void Swap(char &a,char &b)
    {
    	char t=a;a=b;b=t;
    }
 
    void Next(char *a)
    {
    	int i,j,n=strlen(a);
    	for(i=n-1;i>0;i--)
    	if(a[i]>a[i-1]) break;
    	if(i==0) {strcpy(a,"BIGGEST"); return;}
    	for(j=n-1;a[j]<=a[i-1];j--);
 
    	Swap(a[i-1],a[j]);
    	for(j=n-1;i<j;i++,j--)Swap(a[i],a[j]);
    }
    void GOD()
    {
    	int T;
    	int k;
    	char **A;
    	cin>>T;
    	A=new char *[T+5];
    	for(int i=1;i<=T;i++)
    	{
    		A[i]=new char [100];
    		cin>>k;
			cin>>A[i];	
    		Next(A[i]);
    	}
    	for(int i=1;i<=T;i++)
		cout<<"\n"<<i<<" "<<A[i];	
    }
 
 
    int main()
    {
    	GOD();	
    }
