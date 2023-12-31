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
struct topo{
    int n,no=0;
    vector<int> state;
    vector<int>res;
    vector<vector<int>> adj;
    topo(int n): n(n), adj(n+1),state(n+1,0){}
    void addv(int u, int v){
        adj[u].push_back(v);//ok
    }
    void dfs(int i){
        if (state[i]==0){
            state[i]=1;
            for (auto x: adj[i]){
                dfs(x);
            }
            state[i]=2;
            res.push_back(i);
        }
        else if (state[i]==1){
            no =1;
            return;
        }
    }
    bool toposort(){
        res.clear();
        for (int i = 1; i<=n; i++){
            if (state[i]==0) dfs(i);
        }
        if (no) return 0;
        reverse(res.begin(), res.end());
        return 1;
    }
};
int n,m;
vector<int> pre[100005];
int res[100005];
void solve(){
    cin>>n>>m;
    topo TP(n);
    for (int i =1; i<=m; i++){
        int a,b;
        cin>>a>>b;
        TP.addv(a,b);
        pre[b].push_back(a);
    }
    
    TP.toposort();
    res[1]=1;
    for (auto x: TP.res){
        for (auto pr: pre[x]){
            res[x] = (res[x] + res[pr])%MOD;
        }
    }
    cout<<res[n]<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    return 0;
}