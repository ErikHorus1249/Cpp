#include<iostream>
#define n 8

using namespace std;
int val[n+1][n+1];
int sol=0;
int maxx=0;
int col[100], chinh[100], phu[100], a[100];
void Init(){
    sol=0;
    maxx=0;
    for (int i =1;i<=n;i++)
        for (int j=1;j<=n;j++)
        cin >> val[i][j];
	for(int i=1; i<=n; i++){
		col[i]=1;
	}
	for(int i=1; i<2*n; i++){
		chinh[i]=1;
		phu[i]=1;
	}
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(col[j] && chinh[i-j+n] && phu[i+j-1]){
			a[i]=j;
			sol+=val[i][j];
			col[j]=0;
			chinh[i-j+n]=0;
			phu[i+j-1]=0;
			if(i==n){
                maxx=max(maxx,sol);
			}
			else{
				Try(i+1);
			}
			col[j]=1;
			chinh[i-j+n]=1;
			phu[i+j-1]=1;
			sol-=val[i][j];
		}
	}
}
main(){
    int temp;
    cin>> temp;
    while (temp--)
	{
	    Init();
        Try(1);
        cout << maxx<<endl;
	}
	return 0;
}
