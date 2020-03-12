#include <bits/stdc++.h>
using namespace std;

template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }

int a[20][20], F[16][1<<16],n;

void solve(){
    int last = (1<<n)-1;
    int i,j,mask;
    for(i=1;i<=n;i++)
    	for(mask=1;mask<=last;mask++)
    		F[i][mask] = 1e9;
    for(i=1;i<=n;i++) F[i][0] = 0;
    for(mask=0;mask<last;mask++){
    	for(i=1;i<=n;i++)
    		for(j=1;j<=n;j++)
    			if(getbit(mask,j-1) == 0){
	                int new_mask = onbit(mask,j-1);
	                F[j][new_mask] = min(F[j][new_mask], F[i][mask] + a[i][j]);
            	}
	}
	int ans = 1e9;
    for(i=1;i<=n;i++) ans = min(ans, F[i][last]);
    cout << ans << endl;
}

main(){
    int t,i,j;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=1;i<=n;i++)
        	for(j=1;j<=n;j++)
        		cin >> a[i][j];
        solve();
    }
}

