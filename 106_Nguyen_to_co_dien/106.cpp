#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pll pair<long long,long long>
#define int long long
#define pii pair<int,int>
#define FOR(i,a,b) for(int i =a; i<=b; i++)
#define ROF(i,a,b) for(int i =a; i>=b; i--)

const long long MOD = 1e9+7;

using namespace std;

bool snt[5000006];
void solve(){
    int n;
    cin>>n;
    snt[0]=1;
    snt[1]=1;
    int res=0;
    for (int i =2; i<=n; i++){
        if (snt[i]) continue;
        res++;
        for (int j = i*i; j<=n; j+=i){
            snt[j] = 1;
        }
    }
    cout<<res<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

        solve();
    return 0;
}