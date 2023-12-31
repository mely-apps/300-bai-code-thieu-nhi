#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void minimize(long long &x,long long y){
   if(x>y){
      x=y;
   }
}

void maximize(long long &x,long long y){
    if(x<y){
        x=y;
    }
}

template <typename T> inline void read(T & x)
{
    char c; bool nega=0;
    while((!isdigit(c=getchar()))&&c!='-');
    if(c=='-')
    {
        c=getchar();
        nega=1;
    }
    x=c-48;
    while(isdigit(c=getchar()))
    {
        x=x*10+c-48;
    }
    if(nega) x=-x;
}
template <typename T> void Write(T x) {if (x > 9) Write(x/10); putchar(x%10+48);}
template <typename T> void write(T x) {if (x < 0) {putchar('-'); x = -x;} Write(x);}

long long pow_mod(long long a, long long b, long long m) {
     long long res = 1;
     while(b){
            res = res * (b & 1 ? a : 1) % m;
            a = a * a % m; b >>= 1;
     }
     return res;
}

long long GCD(long long a , long long b){
    while(b != 0 ){
         a = a % b;
         long long tmp = a;
         a = b;
         b = tmp;
    }
    return a;
}

long long minn(long long a ,long long b , long long c ,long long d){
    long long res = a;
    if(res > d) res = d;
    if(res > b) res = b;
    if(res > c) res = c;
    return res;
}
const ll INF = 1e18 + 7;
const ll MAXN=  2e5 + 7;
const ll MOD = 1e9 + 7;
string decimalToBinary(ll n) {
    string binary = "";
    while (n > 0) {
        binary = ((n & 1) == 0 ? "0" : "1") + binary;
        n >>= 1;
    }
    return binary;
}

int n;
ll a[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("new.inp" , "r" , stdin);
    // freopen("new.out" , "w" , stdout);
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    ll res1 = a[1];
    for(int i = 2 ; i <= n ; i ++){
        res1 = res1 & a[i];
    };
    string st = decimalToBinary(res1);
    vector<int > res;
    for(int i =  0 , j = st.size() - 1 ; i < st.size() ; i ++ , j --){
        if(st[i] == '1'){
            res.push_back(j);
        }
    }
    reverse(res.begin() , res.end());
    for(int i = 0 ; i < res.size() ; i ++){
        cout << res[i] << ' ';
    }
    return 0;
}