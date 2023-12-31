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
int n,m;
vector<pii> adj[200003];
int mindis[200003];
bool checked[200003];
void solve(){
    cin>>n>>m;
    for (int i =1; i<=n; i++) mindis[i] = 1e18;
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    priority_queue<pii> q;
    q.push({0,1});
    mindis[1] =0;
    while(q.size()){
        auto [dis,cur] = q.top();
        dis = -dis;
        q.pop();
        if (checked[cur]) continue;
        checked[cur]=1;
        for (auto [x,y]: adj[cur]){
            mindis[x] = min(mindis[x], y+dis);
            q.push({-(y+dis),x});
        }
    }
    for (int i =1; i<=n; i++){
        cout<<mindis[i]<<" ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    return 0;
}