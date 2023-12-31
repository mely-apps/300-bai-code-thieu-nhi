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
int n;
int snt[5000004];
void solve(){
    cin>>n;
    snt[1]=1;
    snt[0]=1;
    for (int i =2; i<=5000001; i++){
        if (snt[i]) continue;
        for (int j = i*i; j<=5000001; j+=i){
            snt[j]=1;
        }
    }
    int a;
    while(n--){
        cin>>a;
        if(!snt[a]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    return 0;
}