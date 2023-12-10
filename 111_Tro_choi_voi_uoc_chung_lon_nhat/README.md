## Solution trò chơi với ước chung lớn nhất

- Xét điều kiện cần: với mọi $b[i],(2\le i \le n)$ luôn là bội chung của $a[i],a[i-1]$. Vì vậy xây dựng mảng $b$ sao cho $b[i]$ là $lcm(a[i],a[i-1])$, $b[1] = a[1]$ và $b[n+1] = a[n]$.
- Tuy nhiên cần kiểm tra lại các $a[i]$ có đúng bằng $gcd(b[i],b[i+1])$ hay không. In kết quả kiểm tra ra màn hình.