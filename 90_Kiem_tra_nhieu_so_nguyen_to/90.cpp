#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	// Just input
	int n;
	cin >> n;
	int a[n];
	for (int &x : a)	
		cin >> x;

	// Processing Sieve of Eratosthenes
	int MAXN = 5e6 + 4;
	vector<bool> is_prime(MAXN, true);

	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2; i < MAXN; i++)
	{
		if (is_prime[i])
		{
			int j = i * 2;
			while (j < MAXN)
			{
				is_prime[j] = false;
				j += i;
			}
		}
	}

	// Just output
	for (int x : a)
		if (is_prime[x] == true)
			cout << "YES\n";
		else if (is_prime[x] == false)
			cout << "NO\n";

	return 0;
}