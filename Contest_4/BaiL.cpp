#include<iostream>
#include<stack>
using namespace std;

long long  getMaxArea(long long hist[], int n)
{
	stack<long long> s;
	long long max_area = 0;
	long long tp;
	long long top;
	int i = 0;
	while (i < n)
	{
		if (s.empty() || hist[s.top()] <= hist[i])
			s.push(i++);
		else
		{
			tp = s.top();
			s.pop();
			top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
			if (max_area < top)
				max_area = top;
		}
	}

	while (s.empty() == false)
	{
		tp = s.top();
		s.pop();
		top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

		if (max_area < top)
			max_area = top;
	}

	return max_area;
}
void solve()
{
    int n;
    cin >> n;
    long long  a[n];
    for (int i =0;i<n;i++)
        cin >> a[i];
    cout << getMaxArea(a,n)<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
	return 0;
}
