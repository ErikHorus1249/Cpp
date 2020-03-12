#include<iostream>

using namespace std;
const int size = 20;
int maxE = 100;
int maxC = size * maxE;
int C[size][size];
int X[size + 1];
int T[size];
int BestWay[size + 1];
bool FREE[size];
int minSpending;
int N,M;

void input(){
	int i,j,k;
	cin >> N;//Nhap so thanh pho
	cin >> M;//Nhap so duong 
	for(i = 1; i <= N;i++){
		for(j = 1; j <= N; j++){
			if(i == j) C[i][j] = 0;
			else C[i][j] = maxC;
		}
	}
	for( k = 1; k <= M; k ++){
		cin >> i;//Nhap thanh pho bat dau
		cin >> j;//nhap thanh pho den 
		cin >> C[i][j];
		C[j][i] = C[i][j];
	}
} 

void init(){
	for( int i = 0; i <= N; i++)
		FREE[i] = true;
	FREE[1] = false;
	X[1] = 1; //Xuat phat tu thanh pho 1
	T[1] = 0;//chi phi thanh pho xuat phat bang 0
	minSpending = maxC;
}

void output(){
	if(minSpending == maxC)
		cout << "NO SOLUTION";
	else
	{
		for( int i = 1;i <= N; i++)
			cout << minSpending;
		}	
}

void Tim(int i){
	for(int j = 2; j <= N; j++){
		if(FREE[j]){
			X[i] = j;
			T[j] = T[i -1] + C[X[i-1]][j];
			if( T[i] < minSpending){
				FREE[j] = false; //Danh dau thanh pho vua thu
				if(i == N){
					if((T[N] + C[X[N]][1]) < minSpending){
						minSpending = T[N] + C[X[N]][1];
					}
				}
			}
			else Tim(i + 1);
			FREE[j] = true;
		}
	}
}

main(){
	input();
	init();
	Tim(2);
	output();
}

