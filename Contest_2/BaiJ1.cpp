#include <bits/stdc++.h>
#define FOR(v,a,b) for(int v=a;v<b;v++)
#define FOD(v,a,b) for(int v=a;v>b;v--)
#define REP(v,a,b) for(int v=a;v>=b;v--)
#define ll long long
#define fi first
#define se second
#define EL endl

using namespace std;
typedef pair<int,int> ii;
const int mod=1e9+7;
const ll inf=1e18+8;

struct matran{
    long long a[3][3];
    matran(){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++) a[i][j]=0;
    }
};

matran operator *(const matran &A, const matran &B){
    matran C;
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        C.a[i][j]=0;
        for(int k=0;k<2;k++){
            C.a[i][j]=(C.a[i][j] + A.a[i][k] * B.a[k][j]) % mod;
        }
    }
    return C;
}
matran mu(matran A, long long n){
    if(n==1) return A;
    matran C = mu(A,n/2);
    if(n%2==0) return C*C;
    return (C*C)*A;
}

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
    int n;
    cin>>n;
    matran I,F0;
    I.a[0][0] = 0;
    I.a[0][1] = I.a[1][0] = I.a[1][1] = 1;
    F0.a[0][1] = 1;
    F0.a[0][0] = F0.a[1][0] = F0.a[1][1] = 0;
    if(n>0){
        F0=F0*mu(I,n);
    }
    cout<<F0.a[0][0]<<endl;
    }
}









