#include <bits/stdc++.h>
using namespace std;
long long check(long long n, long long k)
{
      long long temp = 1, cnt = 0;
      vector<long long> a;
      for (int i = 1; i <= sqrt(n); i++)
            if (n % i == 0)
            {
                  a.push_back(i);
                  if ((n / i) > sqrt(n))
                  a.push_back(n / i);
            }
      sort(a.begin(), a.end());
      if (k <= a.size()) return a[k - 1];
            else return -1;
}
int main()
{
      long long t, x, y, n, k;
      cin >> n >> k;
      cout << check(n, k) << endl;
}