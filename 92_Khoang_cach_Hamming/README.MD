### SOLUTION

Thoạt đầu các bạn có ý tưởng đầu tiên trong đầu là ta phải phân tích các số đang ở hệ thập phân sang nhị phân và so các chữ số cùng vị trí và nếu khác nhau thì ta tăng biến đếm lên. Đây là solution của mình, mình đã biết đến bitset, là cấu trúc dữ liệu cho phép ta convert từ thập phân sang nhị phân và từ đó dễ dàng xử lí

- Xem thêm ở tệp simple_solution.cpp

Nếu mà ta đủ tinh ý thì ta nhận xét được là ta có thể dùng XOR để xử lí và chỉ cần dùng __builtin_popcount để đếm số bit bật (1) mà thôi, solution 1 dòng duy nhất.

- Xem thêm ở tệp magic_solution.cpp