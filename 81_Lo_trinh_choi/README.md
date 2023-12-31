#Solution 81 Lộ trình chơi

- Kiến thức cần biết trước: quy hoạch động, sắp xếp topo
- Sắp xếp topo là kiểu sắp xếp một danh sách các đỉnh trên một đồ thị có hướng không chu trình sao cho không bao giờ tồn tại một đường đi từ đỉnh $b$ đến đỉnh $a$ mà $a$ đứng trước $b$ trong danh sách
- Sau khi sắp xếp, ta có thể đảm bảo rằng số cách đi đến điểm $a$ bằng tổng các đường đi đến các điểm $b$ sao cho tồn tại đường đi từ $b$ đến $a$
- Vì ta đã sắp xếp topo nên việc quy hoạch động sẽ có tính đúng đắn.