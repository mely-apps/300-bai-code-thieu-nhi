#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);

	// Just input
	int n;
	cin >> n;

	// Processing
	bool check_answer = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			check_answer = false;
	
	// Just output
	if (check_answer == true)
		cout << "YES";
	else if (check_answer == false)
		cout << "NO";

	return 0;
}