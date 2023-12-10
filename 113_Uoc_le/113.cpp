#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t=1;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while (n%2==0) n/=2;
        cout<<n<<endl;
    }
}

int32_t main(){
    solve();
    return 0;
}