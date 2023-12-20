# Solution 48 (Nhà hàng)
$\textbf{Solution:}$
Với mỗi thời điểm đến và đi của từng khách hàng thì số lượng khách trong nhà hàng tại thời điểm đó sẽ thay đổi. Ta chỉ cần chuẩn bị một mảng $c$ lưu các cặp giá trị là $(time, status)$ nếu $time$ là thời gian đến của 1 khách hàng thì $status$ tương ứng là 1 (vì sẽ có thêm 1 vị khách vào nhà hàng lúc đó), ngược lại nếu time là thời điểm rời đi của 1 khách hàng thì $status$ tương ứng là -1 (vì sẽ có 1 vị khách rời khỏi nhà hàng lúc đó).

Ta chỉ cần sắp xếp lại mảng $c$ theo thứ tự $time$ tăng dần, và chuẩn bị một biến lưu số lượng vị khách hiện tại của quán. Tại mỗi thời điểm ta sẽ cập nhật lại số lượng khách theo giá trị $status$ mà ta duyệt tới. Trong quá trình đó cũng đồng thời cập nhật xem số lượng khách đông nhất từng có của nhà hàng.

Độ phức tạp của thuật toán: $\textbf{O(NlogN)}$
