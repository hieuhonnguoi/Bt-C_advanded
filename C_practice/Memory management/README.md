15. Code này đang bị 2 lỗi:
Một là khi khởi tạo con trỏ p thì lúc này p đang trỏ đến vùng nhớ rác, còn q trong function cũng đang trỏ đến một vị trị rác thành ra sẽ bị lỗi Segmentation fault
Hai là: hello có 6 kí tự bao gồm '\0' nên đền 5 không hợp lý. Muốn copy toàn bộ thì nên điền 6

16. Biến a: int(toàn cục) - initialize - Suốt chương trình
    Biến b: char* (toàn cục) - initialize - Suốt chương trình
    Biến c: char c[20] - (data-read only) - Suốt chương trình
    Biến d: char - stack - trong hàm func
    Biến c_param: int - stack - trong hàm func
    Biến f: char* - stack - trong hàm func
    Biến g: int - stack - trong hàm func
    Biến h: static int - static storage - trong hàm func
    Biến i: char* - stack - trong hàm func
    Khối malloc: malloc - Heap - từ lúc malloc->free
17. Biến char a[4] = "foo" được cấp phát ở vùng stack
    Biến *b = "bar" được cấp phát ở vùng stack
    Điểm khác biệt là từng giá trị của "foo" được lưu trực tiếp tại stack. Còn "bar" sẽ nằm ở vùng read-only, chỉ có giá trị con trỏ b nằm ở vùng stack.

18. Bộ nhớ RAM chỉ có 2000 byte tuy nhiên vòng lặp lại cấp phát bộ nhớ 8000 byte -> dễ tràn bộ nhớ.
    Cấp phát động nhưng lại không giải phóng.

19. Trong hàm function gán q = (char*)malloc(8) thì khi p được tham chiếu vào thì giá trị p vẫn không đổi và nó vẫn trỏ vào NULL.
    Khi dùng xong nên free và nên dùng int main()

20. Initialized data: a = 5, b[6] = "hello", g=5
    Uninitialized data: d
    Stack: i, h (const)
    Read-only:"hello", const int c = 4

21. Không hợp lệ tại về array đang được khai báo là biến char nhưng sau đó lại được gán biến con trỏ là int

22. Lỗi logic. dst sẽ nhận giá trị ô nhớ mà s1 trỏ đến sau khi đã được cộng lên chứ không phải giá trị sao chép từ src

23. Code vẫn chạy được vì cấp phát đủ số byte để chứa chuỗi tuy nhiên code sẽ bị memory leak vì chưa giải phóng bộ nhớ (free)

24. Code này không hợp lệ tại vì con trỏ str trỏ tới vùng read-only, không được phép chỉnh sửa vì vậy khi đọc str[0] sẽ gây lỗi

25. a: initialized data
    b: read-only
    c: initialized data
    d: stack

26. Code này bị lỗi lặp vô tận (stack overflow)

27. Code sẽ không ra giá trị ban đầu do giá trị p[0] được gán 0xAA nên kết quả sẽ ra là 0123456AA

28. char str[] = "hello" được khởi tạo trong vùng stack của getString và khi hết vòng đời của hàm thì vùng đó đã được giải phóng. Khi gọi lại hàm này thì nếu giá trị "hello" chưa bị ghi đè thì có thể vẫn hiện còn không sẽ hiện lỗi segmentation fault