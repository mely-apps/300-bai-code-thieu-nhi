#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcm(int a, int b)
{
    int g = __gcd(a, b);
    return (a * b / g);
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 2, 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n + 2, 1);
        for (int i = 1; i <= n + 1; i++)
        {
            b[i] = lcm(a[i], a[i - 1]);
        }
        bool pass=0;
        for (int i = 1; i <= n; i++)
        {
            if (__gcd(b[i], b[i + 1]) != a[i])
            {
                cout << "NO\n";
                pass =1;
                break;
            }
        }
        if (!pass)
        cout << "YES\n";
    }
}
int32_t main()
{
    solve();
}