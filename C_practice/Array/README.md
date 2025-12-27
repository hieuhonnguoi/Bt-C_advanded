1. Mảng trong C là gì?
Trong ngôn ngữ lập trình C, mảng (array) là tập hợp các phần tử có cùng kiểu dữ liệu, được lưu trữ liên tiếp trong bộ nhớ, và truy cập bằng chỉ số (index).

2. Cách khai báo và khởi tạo mảng một chiều
Cú pháp khai báo
<kiểu_dữ_liệu> <tên_mảng>[<số_phần_tử>];
Ví dụ: int a[5] = {1,2,3,4,5};

3. Kích thước của mảng được xác định khi nào.
Trong ngôn ngữ C, kích thước của mảng thường được xác định ngay tại điểm biên dịch. 
Ví dụ: int a[5] . Khi chương trình biên dịch, chương trình sẽ cấp bộ nhớ chứa đủ 5 phần từ của biến a tại vùng nhớ Stack hoặc .data nếu khai báo biến toàn cục.

4. Tên mảng biểu diễn điều gì?
Tên mảng có thể được coi là con trỏ trỏ đến phần tử đầu tiên trong mảng.

5. Phân biệt arr[i] và *(arr+i) 
Hai cách trên tương đương nhau đều trỏ đến cùng địa chỉ

6. Làm thế nào để tính số phần tử trong mảng tĩnh
sizeof(arr)/sizeof(arr[0]) lấy tổng dung lượng của dãy chia cho dung lượng của một phần tử trong mảng

7. Sự khác nhau giữa mảng tĩnh và mãng động
Mảng tĩnh có kích thước cố định, còn mảng động có kích thước thay đổi được cấp phát bằng malloc

8. Truyền mảng vào hàm khác thế nào so với truyền vào biến
Khi truyền vào hàm thì chỉ truyền vào giá trị phần tử đầu tiên của mảng.

9. Mảng hai chiều được lưu trong bộ nhớ theo thứ tự nào.
Theo hàng row-major order

10. Có thể gán arr1 = arr2
Không được phải dùng vòng lặp hoặc memcpy để gán vì như vậy chỉ gán được phần tử đầu tiên.

