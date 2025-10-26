1. Code vẫn chạy tuy nhiên trong điều khiện if do để month = 1 cho nên khi này month sẽ được gán bằng 1 và điều kiện luôn đúng.
3. Do giá trị c được gán unsigned char nên giá trị tối đa nhận được là 255 nên khi c = 255 c sẽ quay lại 0 và tiếp tục vòng lặp.
4. Chương trình thực hiện việc chia hai số tuy nhiên nếu kết quả là số thập phân thì kết quả sẽ bị đưa về dạng số nguyên.
5. Chương trình chạy từ 9 -> 0.
6. Code không vấn đề gì tuy nhiên nếu a và b có các giá trị lớn hơn thì có thể dẫn đến việc tràn bộ nhớ (overflow)
