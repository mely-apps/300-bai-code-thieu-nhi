#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	// Magic solution

	int a, b;
	cin >> a >> b;
	cout << __builtin_popcount(a ^ b);

	return 0;
}