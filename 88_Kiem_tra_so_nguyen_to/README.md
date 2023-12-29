## Lời giải

Hiển nhiên, số nguyên tố là số mà tại đó chỉ chia hết cho 1 và chính nó, nên với giới hạn n < 1000000, các bạn hoàn toàn có thể vét cạn và đếm số ước, nếu số ước bằng 2 thì số đó hiển nhiên chính là số nguyên tố.

Nhưng trong toán học, ta có thể kiểm chứng liệu số ta nhập từ bàn phím có phải là số nguyên tố hay không, bằng cách ta kiểm tra liệu trong khoảng từ 2 đến căn bậc 2 của n liệu có ước của n trong khoảng đó không, nếu không thì số đó chính là số nguyên tố và ngược lại.

- Điều đó thì chứng minh được gì?
+ Nếu các bạn để ý thì với thuật toán "ngây thơ" đầu tiên, với n = 1000000, các bạn sẽ thực hiện 1000000 phép tính / so sánh.
+ So với thuật toán trên thì thuật toán "căn bậc 2 của n", chỉ mất sqrt(1000000) = 1000 phép tính / so sánh, nhanh hơn gấp 1000 lần so với thuật toán "ngây thơ" trên.