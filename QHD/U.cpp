#include <iostream>
using namespace std;
long long n,k,F[100005],pr[100005],M=1e9+7;
main(){
    long long t;cin>>t;
    F[0]=1; pr[0]=1;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            if(i-k>0) F[i]=(pr[i-1]-pr[i-k-1]+M)%M;
            else F[i]=pr[i-1];
            pr[i]=(F[i]+pr[i-1])%M;
        }
        cout<<F[n]<<endl;
    }
}
