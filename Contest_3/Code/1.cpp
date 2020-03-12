#include <iostream>

using namespace std;

main()
{
	int solandoitien=0;
	cout<<"so lan doi tien la: ";
	cin>>solandoitien;
	while(solandoitien--)
	{
		int a[]={1,2,5,10,20,50,100,200,500,1000};
		int n=10;
		int tien=0;
		int demsototien=0;
		cout<<"so tien can doi la: ";
		cin>>tien;
		for(int i=n-1; i>=0; --i)
			{
				while(a[i]<=tien)
				{
					tien-=a[i];
					demsototien++;
					
				}
			}
		cout<<"chung ta can so to tien la: \t"<< demsototien << endl;
	}
}
