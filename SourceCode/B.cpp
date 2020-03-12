#include<iostream>
using namespace std;

int binarySearch(int a[100000],int n, int x) {
	int l = 0 ,r = n - 1;
    while(l<=r) {
        int mid=(r+l)/2;
        if(a[mid]==x)
            return mid+1;
        if(a[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}


int main() {
    int t,n,x,a[100];
    cin>>t;
    while(t--) {
        cin>>n>>x;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int kq=binarySearch(a,n,x);
        ( kq == -1) ?
        cout<<"NO"<<endl
            :
            cout<<kq<<endl;
    }
    return 0;
}
