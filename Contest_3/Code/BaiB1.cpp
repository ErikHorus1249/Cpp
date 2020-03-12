#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int s[MAX], e[MAX];
int N;
void Swap(int i, int j){
	int tmp = e[i];
		e[i] = e[j];
		e[j] = tmp;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
}

void Qsort(int a[], int start, int end){
	if(start >= end) return ;
	int index = rand() % (start - end) + start;
	int pivot = a[index];
	int k = start - 1;
	Swap( index , end);
	for( int i = start; i <= end; i++)
		if(a[i] < pivot){
			k++;
			Swap(i,k);
		}
		k++;
		Swap(k,end);
		Qsort(a,start,k-1);
		Qsort(a,k+1,end);
}
void proc(){
	int end = e[0];
	int res = 1;
	for(int i = 1; i < N; i++){
		if(e[i] == end)
			continue;
		if(s[i] >= end){
			res++;
			end = e[i];
		}
	}
	cout << res;
}
main(){
	int t;
	cin >> t;
	while(t --){
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> s[i] >> e[i];
			Qsort(e,0,N-1);
			proc();
			
		}
	}
}
