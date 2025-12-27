1. Con trỏ pointer là gì /
Trong C, mỗi biến đều được lưu tại một ô nhớ có địa chỉ (address) riêng.
Con trỏ là một biến có giá trị là địa chỉ của ô nhớ đó.

2.  Khai báo biến con trỏ như thế nào ?
 int *p ( con trỏ p trỏ tới kiểu int)

3. Toán tử & và * có ý nghĩa gì ?
& là truy cập đến địa chỉ đó, còn * thì lấy giá trị tại địa chỉ đó

4. Khi nào cần dùng con trỏ?
Khi muốn truy cập trực tiếp bộ nhớ hoặc truyền tham chiếu vào hàm

5. Sự khác nhau giữa con trỏ và mảng
Tên mảng khi được khai báo là hằng, không được trỏ sang chỗ khác. Còn con trỏ có thể trỏ đi chỗ khác tùy ý.

6. Con trỏ NULl là gì?
Là con trỏ không trỏ tới vị trí nào hợp lệ.

7. Làm sao kiểm tra con trỏ hợp lệ trước khi dùng?
Kiểm tra if (ptr != NULL)

8. Khi gán con trỏ cho con trỏ khác, điều gì xảy ra
Cả hai cùng trỏ tới cùng một vùng nhớ.

9. Con trỏ có thể trỏ tới hàm không?
Có, có thể gọi hàm gián tiếp (function pointer)

10. Cấp phát động bằng malloc() trả về gì ? 
Trả về con trỏ void trỏ tới vùng được cấp phát.

11. Khác nhau giữa hằng con trỏ và con trỏ hằng.
Hằng con trỏ (int * const p) tức giá trị trỏ đến không thay đổi được - địa chỉ thay đổi được
Con trỏ hằng (int const * p) tức giá trị trỏ đến thay đổi được - địa chỉ không thể thay đổi

12. Con trỏ void là gì và dùng khi nào?
Là con trỏ không có kiểu cụ thể, dùng trong các hàm tổng quát

13. Pointer arithmetic là gì?
Là phép toán cộng/trừ địa chỉ, tăng/giảm theo kích thước kiểu dữ liệu trỏ tới

14. Sự khác nhau giữa *p++ và (*p)++
*p++ tăng địa chỉ, (*p)++ tăng giá trị biến được trỏ tới

15. Con trỏ đến đến con trỏ (double pointer) để làm gì?
Quản lý mảng con trỏ hoặc truyền con trỏ vào hàm để thay đổi dịa chỉ.

16. Khi nào cần free bộ nhớ động ?
Khi nào cấp phát bộ nhớ động malloc không dùng nữa để tránh rò rỉ bộ nhớ.

17. Làm sao truyền con trỏ hàm vào hàm khác ?
Khai báo dạng tham số: void func(void (*callback)(int)) 

18. Giải thích con trỏ hàm và cách sử dụng với mảng hàm
Truyền hàm làm tham số cho hàm khác (callback)
Cấu trúc chương trình linh hoạt hơn (ví dụ: menu lựa chọn)
Viết driver, hệ thống xử lý sự kiện, hoặc dispatch table

19. Con trỏ tới mảng khác với mảng con trỏ như thế nào?
int (*p)[N] là con trỏ tới mảng, int *p[N] là mảng con trỏ

20. Làm thế nào dùng con trỏ để xử lý mảng đa chiều
Dùng con trỏ tới mảng (int (*p)[col]) và phép toán địa chỉ.