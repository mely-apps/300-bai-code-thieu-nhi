## Solution Cân Bằng (110)
- Nhận xét rằng số điểm của cả hai khi trò chơi kết thúc chính là ước chung lớn nhất của $A$ và $B$ ban đầu. Vì trò chơi đang mô phỏng theo thuật toán Euclid.
- Như vậy chỉ cần thêm một biến đếm vào thuật toán Euclid tìm ước chung lớn nhất, ta có được kết quả cần tìm.
- Ví dụ: Nếu $A = 19$, $B = 5$. Bước tiếp theo của thuật toán $A = 4$, $B = 5$ (theo thuật toán euclid). Biến đếm sẽ được cộng thêm $19/5$ (lấy nguyên). 
- Độ phức tạp của thuật toán Euclid là $Olog(max(A,B))$