#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	// Simple solution

	int a, b;
	cin >> a >> b;

	bitset<32> a_1(a), b_1(b);

	int cnt = 0;
	for (int i = 0; i < 32; i++)
		if (a_1[i] != b_1[i])
			++cnt;

	cout << cnt;

	return 0;
}