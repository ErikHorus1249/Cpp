#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

void sizeQ()
{
	cout<<q.size()<<endl;
}

void checkemptyQ()
{
	if(!q.empty())
	{
		cout<<"NO"<<endl;
	}
	else 
	{
		cout<<"YES"<<endl;
	}
}

void themvaocuoiQ(int a)
{
	q.push(a);
}

void xoaPtDauQ()
{
	if(!q.empty())
	{
		q.pop();
	}
}

int inDauQ()
{
	if(!q.empty()) return q.front();
	else return -1;
}

int inCuoiQ()
{
	if(!q.empty()) return q.back();
	else return -1;
}



main()
{

	int test=0; cin>>test;
	while(test--)
	{
		int t=0; cin>>t;
		while(t--)
		{
			int n=0;
			if(cin>>n)
			{
				if(n==1) sizeQ();
				else if(n==2) checkemptyQ();
				else if(n==3)
				{
					int a=0; cin>>a;
					themvaocuoiQ(a);
				}
				else if(n==4)
				{
					xoaPtDauQ();
				}
				else if(n==5)
				{
					cout<<inDauQ()<<endl;
				}
				else if(n==6)
				{
					cout<<inCuoiQ()<<endl;
				}
			}
		}
		while(!q.empty()) q.pop();	
	}
}

