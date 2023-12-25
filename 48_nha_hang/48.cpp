#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, a, b, ans, res;
vector<pair<int, int> > c;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        c.push_back(make_pair(a, 1));
        c.push_back(make_pair(b, -1));
    }
  
    sort(c.begin(), c.end());
    for(pair<int, int> i : c)
    {
        res += i.second;
        ans = max(ans, res);
    }
    cout << ans;
  
    return 0;
}
