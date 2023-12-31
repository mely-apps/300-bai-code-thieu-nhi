## Solution

Giả sử với trường hợp tệ nhất của bài toán, số truy vấn q = 1000000 và mỗi truy vấn có n = 1000000, nếu ta dùng thuật toán "căn bậc 2 của n" sẽ xảy ra trường hợp quá thời gian. Nguyên nhân là khi chúng ta dùng thuật toán trên, độ phức tạp thuật toán theo thời gian sẽ có kết quả như sau:

- q * O($sqrt{n}$)

Ta sẽ dùng đến kiến thức "khá cơ bản" của Toán THCS, mang tên là Sàng số nguyên tố. Ta sẽ chọn số 2 đầu tiên, sau đó ta sẽ "đục lỗ" bội của 2 (trừ số 2) đi, đến số 3, ta sẽ đục lỗ bội số 3 (trừ số 3) đi, nếu như số đó chưa bị đục, ta sẽ đục các bội đi (trừ số đang xét).