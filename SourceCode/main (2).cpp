#include <bits/stdc++.h>

using namespace std;

int binarySearch (int * array, int left, int right, int key) {
	if (left > right)
		return -1;
	int mid = (left + right) / 2;
	if (array[mid] == key) {
		if (mid == 0 || array[mid - 1] != key)
			return mid;
		return binarySearch (array, left, mid - 1, key);
	}
	if (array[mid] > key)
		return binarySearch(array, left, mid - 1, key);
	return binarySearch(array, mid + 1, right, key);
}

int main ()
{
	int bla;
	scanf("%d",&bla);
	while (bla--)
	{
	    int n, q, k;
	int array[100000];
	scanf ("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf ("%d", &array[i]);
    int cla =binarySearch(array, 0, n-1, k);
    if (cla!=-1) printf("%d\n",cla+1);
    else printf("NO\n");
	}
	return 0;
}
