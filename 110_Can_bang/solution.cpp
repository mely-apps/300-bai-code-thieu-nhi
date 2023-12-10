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
int res =0;
void ggcd(int a, int b){
    if (a>b) return ggcd(b,a);
    if (a==b) return;
    res+= b/a;
    b = b%a;
    if (b==0) {
        b+=a;
        res--;
    }
    ggcd(b,a);
}

void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        res = 0;
        ggcd(a,b);
        cout<<res<<endl;
    }
}

int32_t main(){
    solve();
    return 0;
}