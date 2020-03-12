#include <iostream>
using namespace std;

void m_Fibo(int A[], int n)
{
	for(int i = 0 ; i<n ; i++)
	{
		if(i==0) A[0] = 0;
		if(i==1) A[1] = 1;
		if(i>=2)
		{
			A[i] = A[i-2]+A[i-1];
		}
	}
}

char m_Fibonacci(int A[], int n, long long i)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(i <= A[n-2]) return m_Fibonacci(A, n-2,i);
	return m_Fibonacci(A, n-1, i-A[n-2]);
}
int main()
{
	int t;
	cin>>t;
	for(int k =1 ; k <= t ; k++){
		int n, i;
		cin>>n>>i;
		int *A = new int[n];
		m_Fibo(A,n);
		cout<<m_Fibonacci(A,n,i)<<endl;
	}
}
