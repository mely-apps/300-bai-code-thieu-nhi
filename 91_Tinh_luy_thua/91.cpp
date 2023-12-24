#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll modulo = 1e9 + 7;

ll power(ll a, ll n)
{
	if (n == 1)
		return a;
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return ((power(a, n / 2) % modulo) * (power(a, n / 2) % modulo)) % modulo;
	return ((((power(a, n / 2) % modulo) * (power(a, n / 2) % modulo)) % modulo) * (power(a, 1) % modulo)) % modulo;
}

void solve()
{
	ll a, n;
	cin >> a >> n;
	cout << power(a, n) << "\n";
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}