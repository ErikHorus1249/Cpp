#include <iostream>

using namespace std;
int a[]={1,2,5,10,20,50,100,200,500,1000};
int N=10;
int Tien=0;


main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dem = 0;
		cin>>Tien;
		for(int i=N-1; i>=0; --i)
			{
				while(a[i]<=Tien)
				{
					Tien-=a[i];
					dem++;
				}
			}
		cout<<dem<<endl;
	}
}
