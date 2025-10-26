31. Ở struct đầu tiên do không có pragama push/pop nên kích thước struct sẽ là 8 byte (4 + 1 + 3(padding)). Ở struct thứ hai do có pragma push/pop nên chương trình sẽ không padding nên kích thước struct là 5 byte.

32. 8 byte (4 + 1 + 3(padding))

33. 12 byte (1 + 3(padding) + 4 + 2 + 2(padding))

34. Nếu không có pragma pop/push thì chương trình sẽ padding nhìn vì vậy mà kích thước của struct sẽ là 7 thay vì 12

35. 16 byte = 4 byte (int) + 3 byte (char e[3]) + 1 byte (padding) + 8 byte (Inner)

36. Giá trị của ab.a = 2500 / 0x09C4 còn ab.b sẽ lấy giá trị byte đầu tiên do ab.a và ab.b dùng chung không gian bộ nhớ vậy giá trị của ab.b = C4

37. Dung lượng của union Data là 4 byte. Dung của struct Type là 8 byte = 1 byte (char) + 4 byte (data) + 3 byte (padding)

38. Dung lượng của union là 4 byte và với cấu trúc little endian thì kết quả sẽ đọc thì bit nhỏ nhất trước và kết quả in ra là 78 56 34 12 còn nếu big endian thì ngược lại

39. 1+3+4 = 8 bit < 32 bit nên hệ thống sẽ đống gói cùng 4 byte. Nếu lớn hơn 32 bit thì sẽ cần 8 byte.

40. Giá trị sẽ là flag=5, mode=25, value=171. Nếu đảo là cấu trúc big-endian thì kết quả sẽ khác vì khi đó AB sẽ được đọc trước rồi mới đến CD. 

41. 8 bytes = (1 byte (char) + 4 byte (data) + 3 byte (padding)). id   = 11, type = 2, err  = 1

42. 4 byte. 
    Hai struct có cùng vùng bộ nhớ do cùng chung union mà union dùng chung không gian bộ nhớ cho các phần tử.
    Giá trị của normal.mode sẽ thay đổi vì normal.key = 0x7F chiếm 7 bit còn normal.mode chiếm 3 bit (bit 3-5) nên giá trị sẽ bằng 7

43. EN=0, MODE=1, CLK=11
    Vì bits và reg là hai cách nhìn khác nhau trên cùng một vùng nhớ của union. reg là toàn bộ 8 bit thô (0xB2).bits là phần chia nhỏ của cùng 8 bit đó thành từng trường bit-field.

    typedef union {
    struct {
        unsigned int EN   : 1;  // bit0
        unsigned int RSV  : 1;  // bit1
        unsigned int _PAD : 2;  // bit2–3 (bỏ trống)
        unsigned int MODE : 2;  // bit4–5  ← giờ MODE chiếm bit 4–5
        unsigned int CLK  : 2;  // bit6–7
    } bits;
    unsigned char reg;
} CTRL_REG;

44. 2 bytes
    Kết quả: len = 938 (0x3AA), type = 6, crc = 5
    Thứ tự nhét bit trong 1 storage unit có thể là từ bit thấp lên (LSB-first) hoặc từ bit cao xuống (MSB-first), tùy compiler/ABI.
