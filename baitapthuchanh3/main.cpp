#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Khai báo hàm cho từng bài tập
void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();
void exercise6();
void exercise7();
void exercise8();
void exercise9();
void exercise10();
void exercise11();
void exercise12();
void exercise13();
void exercise14();
void exercise15();
void exercise16();
void exercise17();
void exercise18();
void exercise19();
void exercise20();
void exercise21();
void exercise22();
void exercise23();
void exercise24();
void exercise25();
void exercise26();
void exercise27();

// Hàm hiển thị menu
void displayMenu() {
    cout << "\n===== MENU BAI TAP NHAP MON LAP TRINH =====\n";
    cout << "1. Tinh tong, hieu, tich, thuong va tong binh phuong cua hai so\n";
    cout << "2. Tinh chu vi va dien tich hinh tron\n";
    cout << "3. Tinh diem trung binh 3 mon Toan, Ly, Hoa\n";
    cout << "4. Phan tich so nguyen 3 chu so\n";
    cout << "5. Giai phuong trinh bac nhat ax+b=0\n";
    cout << "6. Giai va bien luan phuong trinh bac hai ax2+bx+c=0\n";
    cout << "7. Kiem tra so nguyen to\n";
    cout << "8. Kiem tra nam nhuan\n";
    cout << "9. Kiem tra so chia het cho 3 va 5\n";
    cout << "10. Kiem tra ky tu (chu cai, chu so, ky tu dac biet)\n";
    cout << "11. Kiem tra tam giac hop le\n";
    cout << "12. Tinh cac bieu thuc tong\n";
    cout << "13. Tinh tong cac chu so cua so nguyen\n";
    cout << "14. Tim so lon nhat trong 3 so\n";
    cout << "15. Tinh tuoi dua tren nam sinh\n";
    cout << "16. Tinh tien va thue gia tri gia tang\n";
    cout << "17. Tinh luong nhan vien dua tren tham nien\n";
    cout << "18. Tinh tien karaoke\n";
    cout << "19. Kiem tra ngay thang va tinh toan ngay\n";
    cout << "20. Doi tien theo menh gia\n";
    cout << "21. Tinh so nut cua so xe\n";
    cout << "22. Tinh tien dien\n";
    cout << "23. In thu trong tuan tu so 1-7\n";
    cout << "24. In so ngay cua thang\n";
    cout << "25. Kiem tra chan le bang switch-case\n";
    cout << "26. May tinh don gian bang switch-case\n";
    cout << "27. Mo phong menu nha hang\n";
    cout << "0. Thoat chuong trinh\n";
    cout << "Nhap lua chon cua ban (0-27): ";
}

/******************************************************************************
 * Hàm: exercise1
 * Mô tả: 
 *   - Đề bài: Viết chương trình nhập 2 số nguyên a và b. Tính tổng, hiệu, tích, 
 *     thương và tổng bình phương của hai số.
 * Mục đích: Tính và hiển thị tổng, hiệu, tích, thương và tổng bình phương của hai số nguyên.
 * Đầu vào: Hai số nguyên a và b do người dùng nhập.
 * Đầu ra: In tổng (a+b), hiệu (a-b), tích (a*b), thương (a/b nếu b≠0), 
 *         và tổng bình phương (a²+b²).
 * Ghi chú: Xử lý trường hợp chia cho 0 bằng cách hiển thị thông báo lỗi.
 ******************************************************************************/
void exercise1() {
    int a, b;
    cout << "Nhap hai so nguyen a va b: ";
    cin >> a >> b;
    cout << "Tong: " << a + b << endl;
    cout << "Hieu: " << a - b << endl;
    cout << "Tich: " << a * b << endl;
    if (b != 0) {
        cout << "Thuong: " << fixed << setprecision(2) << (float)a / b << endl;
    } else {
        cout << "Thuong: Khong the chia cho 0\n";
    }
    cout << "Tong binh phuong: " << (a * a + b * b) << endl;
}

/******************************************************************************
 * Hàm: exercise2
 * Mô tả: 
 *   - Đề bài: Viết chương trình cho biết bán kính của đường tròn. Tính chu vi 
 *     và diện tích của hình tròn đó.
 * Mục đích: Tính và hiển thị chu vi và diện tích của hình tròn dựa trên bán kính.
 * Đầu vào: Bán kính (r) của hình tròn dạng số thực.
 * Đầu ra: In chu vi (2πr) và diện tích (πr²) với hai chữ số thập phân.
 * Ghi chú: Sử dụng hằng số PI = 3.14159; kiểm tra bán kính không âm.
 ******************************************************************************/
void exercise2() {
    const double PI = 3.14159;
    double r;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    if (r <= 0) {
        cout << "Ban kinh phai la so khong am va lon hon 0!\n";
        return;
    }
    cout << "Chu vi: " << fixed << setprecision(2) << 2 * PI * r << endl;
    cout << "Dien tich: " << fixed << setprecision(2) << PI * r * r << endl;
}

/******************************************************************************
 * Hàm: exercise3
 * Mô tả: 
 *   - Đề bài: Viết chương trình nhập điểm thi 3 môn Toán, Lý, Hóa của một sinh viên. 
 *     Tính điểm trung bình của sinh viên đó.
 * Mục đích: Tính và hiển thị điểm trung bình của ba môn Toán, Lý, Hóa.
 * Đầu vào: Điểm Toán, Lý, Hóa dạng số thực.
 * Đầu ra: In điểm trung bình với hai chữ số thập phân.
 * Ghi chú: Kiểm tra điểm nằm trong khoảng từ 0 đến 10.
 ******************************************************************************/
void exercise3() {
    float math, physics, chemistry;
    cout << "Nhap diem Toan, Ly, Hoa: ";
    cin >> math >> physics >> chemistry;
    if (math >= 0 && math <= 10 && physics >= 0 && physics <= 10 && chemistry >= 0 && chemistry <= 10) {
        cout << "Diem trung binh: " << fixed << setprecision(2) << (math + physics + chemistry) / 3 << endl;
    } else {
        cout << "Diem phai nam trong khoang tu 0 den 10!\n";
    }
}

/******************************************************************************
 * Hàm: exercise4
 * Mô tả: 
 *   - Đề bài: Viết chương trình nhập vào một số nguyên 3 chữ số (từ 100 - 999), 
 *     sau đó in ra các chữ số thuộc hàng trăm, hàng chục, hàng đơn vị.
 * Mục đích: Tách và hiển thị các chữ số hàng trăm, hàng chục, hàng đơn vị của số nguyên 3 chữ số.
 * Đầu vào: Số nguyên 3 chữ số (100–999).
 * Đầu ra: In các chữ số hàng trăm, hàng chục, hàng đơn vị.
 * Ghi chú: Kiểm tra số nhập vào là số nguyên 3 chữ số (100–999).
 ******************************************************************************/
void exercise4() {
    int n;
    cout << "Nhap so nguyen 3 chu so (100-999): ";
    cin >> n;
    if (n >= 100 && n <= 999) {
        int hundreds = n / 100;
        int tens = (n / 10) % 10;
        int units = n % 10;
        cout << "Hang tram: " << hundreds << endl;
        cout << "Hang chuc: " << tens << endl;
        cout << "Hang don vi: " << units << endl;
    } else {
        cout << "So nhap vao phai la so nguyen 3 chu so (100-999)!\n";
    }
}

/******************************************************************************
 * Hàm: exercise5
 * Mô tả: 
 *   - Đề bài: Viết chương trình Giải phương trình bậc nhất ax+b=0
 * Mục đích: Giải và hiển thị nghiệm của phương trình bậc nhất ax + b = 0.
 * Đầu vào: Hệ số a và b dạng số thực.
 * Đầu ra: In nghiệm của phương trình hoặc thông báo không có nghiệm/vô số nghiệm.
 * Ghi chú: Chưa được triển khai.
 ******************************************************************************/
void exercise5() {
    float a, b;
    cout << "Nhap he so a va b cua phuong trinh ax + b = 0: ";
    cin >> a >> b;
    
    if (a != 0) {
        // Phương trình có một nghiệm: x = -b / a
        float x = -b / a;
        cout << "Phuong trinh co mot nghiem: x = " << fixed << setprecision(2) << x << endl;
    } else {
        if (b == 0) {
            // Phương trình 0x + 0 = 0 có vô số nghiệm
            cout << "Phuong trinh co vo so nghiem.\n";
        } else {
            // Phương trình 0x + b = 0 không có nghiệm nếu b ≠ 0
            cout << "Phuong trinh khong co nghiem.\n";
        }
    }
}

/******************************************************************************
 * Hàm: exercise6
 * Mô tả: 
 *   - Đề bài: Viết chương trình nhập 3 số a, b, c. Giải và biện luận phương trình 
 *     bậc hai ax2+bx+c=0
 * Mục đích: Giải và phân tích phương trình bậc hai ax² + bx + c = 0.
 * Đầu vào: Hệ số a, b, c dạng số thực.
 * Đầu ra: In các nghiệm (nếu có) và phân tích số lượng nghiệm.
 * Ghi chú: Chưa được triển khai.
 ******************************************************************************/
void exercise6() {
    float a, b, c;
    cout << "Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    if (a == 0) {
        // Trường hợp không phải phương trình bậc hai
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh co vo so nghiem.\n";
            } else {
                cout << "Phuong trinh khong co nghiem.\n";
            }
        } else {
            // Phương trình bậc nhất: bx + c = 0
            float x = -c / b;
            cout << "Phuong trinh tro thanh phuong trinh bac nhat bx + c = 0.\n";
            cout << "Nghiem: x = " << fixed << setprecision(2) << x << endl;
        }
    } else {
        // Phương trình bậc hai: ax² + bx + c = 0
        float delta = b * b - 4 * a * c;
        if (delta > 0) {
            // Hai nghiệm phân biệt
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet:\n";
            cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
            cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
        } else if (delta == 0) {
            // Nghiệm kép
            float x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep:\n";
            cout << "x = " << fixed << setprecision(2) << x << endl;
        } else {
            // Không có nghiệm thực
            cout << "Phuong trinh khong co nghiem thuc.\n";
        }
    }
}

/******************************************************************************
 * Hàm: exercise7
 * Mô tả: 
 *   - Đề bài: Viết chương trình kiểm tra một số nguyên n là số nguyên tố không?
 * Mục đích: Kiểm tra xem số nguyên n có phải là số nguyên tố hay không.
 * Đầu vào: Số nguyên n.
 * Đầu ra: In kết quả kiểm tra xem n có phải số nguyên tố hay không.
 * Ghi chú: Chưa được triển khai.
 ******************************************************************************/
void exercise7() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " khong phai la so nguyen to.\n";
        return;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (!isPrime) {
        cout << n << " khong phai la so nguyen to.\n";
        return;
    }
    cout << n << " la so nguyen to.\n";
    
}

/******************************************************************************
 * Hàm: exercise8
 * Mô tả: 
 *   - Đề bài: Viết chương trình nhập một năm, kiểm tra xem có phải năm nhuận không?
 * Mục đích: Kiểm tra xem năm nhập vào có phải là năm nhuận hay không.
 * Đầu vào: Một năm dạng số nguyên.
 * Đầu ra: In kết quả kiểm tra xem năm có phải năm nhuận hay không.
 * Ghi chú: Chưa được triển khai.
 ******************************************************************************/
void exercise8() {
    int year;
    cout << "Nhap nam: ";
    cin >> year;

    if (year <= 0) {
        cout << "Nam phai la so duong!\n";
        return;
    }

    /***
    Cách tính năm nhuận theo lịch dương:
    Quy tắc cơ bản: Nếu một năm chia hết cho 4, nó là năm nhuận. 
    Ngoại lệ: Nếu một năm là năm tròn thế kỷ (kết thúc bằng "00"), nó chỉ là năm nhuận nếu nó chia hết cho 400. 
    ***/
    bool isLeapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    
    if (isLeapYear) {
        cout << year << " la nam nhuan.\n";
    } else {
        cout << year << " khong phai la nam nhuan.\n";
    }
}

/******************************************************************************
 * Hàm: exercise9
 * Mô tả: Kiểm tra số nhập vào có chia hết cho 3 và 5 hay không.
 * Đầu vào: Số nguyên.
 * Đầu ra: In kết quả kiểm tra.
 ******************************************************************************/
void exercise9() {
    int number;
    cout << "Nhap mot so nguyen: ";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0) {
        cout << number << " chia het cho ca 3 va 5.\n";
    } else {
        cout << number << " khong chia het cho ca 3 va 5.\n";
    }
}

/******************************************************************************
 * Hàm: exercise10
 * Mô tả: Kiểm tra ký tự nhập vào là chữ cái, chữ số hay ký tự đặc biệt.
 * Đầu vào: Một ký tự.
 * Đầu ra: In loại của ký tự.
 ******************************************************************************/
void exercise10() {
    char ch;
    cout << "Nhap mot ky tu: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " la chu cai.\n";
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " la chu so.\n";
    } else {
        cout << ch << " la ky tu dac biet.\n";
    }
}

/******************************************************************************
 * Hàm: exercise11
 * Mô tả: Kiểm tra ba cạnh nhập vào có tạo thành tam giác hợp lệ hay không.
 * Đầu vào: Ba cạnh dạng số thực.
 * Đầu ra: In kết quả kiểm tra.
 ******************************************************************************/
void exercise11() {
    float a, b, c;
    cout << "Nhap ba canh cua tam giac: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (a + c > b)) {
        cout << "Ba canh " << a << ", " << b << ", " << c << " tao thanh tam giac hop le.\n";
    } else {
        cout << "Ba canh " << a << ", " << b << ", " << c << " khong tao thanh tam giac hop le.\n";
    }
}

/******************************************************************************
 * Hàm: exercise12
 * Mô tả: Tính các tổng toán học dựa trên số n và x nhập vào.
 * Đầu vào: Số nguyên dương n và số x.
 * Đầu ra: In kết quả của bốn tổng.
 ******************************************************************************/
void exercise12() {
    int n;
    float x;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    cout << "Nhap so thuc x: ";
    cin >> x;

    // a) S = 1 + 2 + ... + n
    int sum_a = 0;
    for (int i = 1; i <= n; i++) {
        sum_a += i;
    }
    cout << "a) Tong S = 1 + 2 + ... + " << n << " = " << sum_a << endl;

    // b) S = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
    float sum_b = 0;
    for (int i = 0; i <= n; i++) {
        sum_b += 1.0 / (2 * i + 1);
    }
    cout << "b) Tong S = 1 + 1/3 + ... + 1/" << (2 * n + 1) << " = " << sum_b << endl;

    // c) S = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))
    float sum_c = 0;
    for (int i = 1; i <= n; i++) {
        sum_c += 1.0 / (i * (i + 1));
    }
    cout << "c) Tong S = 1/(1*2) + ... + 1/(" << n << "*" << (n + 1) << ") = " << sum_c << endl;

    // d) S = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+...+n)
    float sum_d = 0;
    int sum_denominator = 0;
    for (int i = 1; i <= n; i++) {
        sum_denominator += i;
        sum_d += pow(x, i) / sum_denominator;
    }
    cout << "d) Tong S = x + x^2/(1+2) + ... + x^" << n << "/(1+2+...+" << n << ") = " << sum_d << endl;
}

/******************************************************************************
 * Hàm: exercise13
 * Mô tả: Tính tổng các chữ số của một số nguyên dương.
 * Đầu vào: Số nguyên dương n.
 * Đầu ra: In tổng các chữ số.
 ******************************************************************************/
void exercise13() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Tong cac chu so: " << sum << endl;
}

/******************************************************************************
 * Hàm: exercise14
 * Mô tả: Tìm số lớn nhất trong ba số nhập vào.
 * Đầu vào: Ba số a, b, c dạng số thực.
 * Đầu ra: In số lớn nhất.
 ******************************************************************************/
void exercise14() {
    float a, b, c;
    cout << "Nhap ba so thuc a, b, c: ";
    cin >> a >> b >> c;
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    cout << "So lon nhat la: " << max << endl;
}

/******************************************************************************
 * Hàm: exercise15
 * Mô tả: Tính tuổi dựa trên năm sinh.
 * Đầu vào: Năm sinh dạng số nguyên.
 * Đầu ra: In tuổi của người đó.
 ******************************************************************************/
void exercise15() {
    int birth_year;
    cout << "Nhap nam sinh: ";
    cin >> birth_year;
    int age = 2025 - birth_year; // Dựa trên năm hiện tại là 2025
    cout << "Tuoi cua ban la: " << age << endl;
}

/******************************************************************************
 * Hàm: exercise16
 * Mô tả: Tính tiền và thuế giá trị gia tăng dựa trên số lượng và đơn giá.
 * Đầu vào: Tên sản phẩm, số lượng (số nguyên), đơn giá (số thực).
 * Đầu ra: In số tiền và thuế giá trị gia tăng.
 ******************************************************************************/
void exercise16() {
    string product_name;
    int quantity;
    float unit_price;
    cout << "Nhap ten san pham: ";
    cin.ignore();
    getline(cin, product_name);
    cout << "Nhap so luong: ";
    cin >> quantity;
    cout << "Nhap don gia: ";
    cin >> unit_price;
    float amount = quantity * unit_price;
    float tax = amount * 0.1;
    cout << "So tien: " << amount << endl;
    cout << "Thue gia tri gia tang (10%): " << tax << endl;
}

/******************************************************************************
 * Hàm: exercise17
 * Mô tả: Tính lương nhân viên dựa trên thâm niên công tác.
 * Đầu vào: Thâm niên công tác (số tháng, số nguyên).
 * Đầu ra: In số tiền lương.
 ******************************************************************************/
void exercise17() {
    int seniority;
    const float basic_salary = 2340000;
    float coefficient;
    cout << "Nhap thâm nien cong tac (so thang): ";
    cin >> seniority;
    if (seniority < 12) {
        coefficient = 1.92;
    } else if (seniority < 36) {
        coefficient = 2.34;
    } else if (seniority < 60) {
        coefficient = 3.0;
    } else {
        coefficient = 4.5;
    }
    float salary = coefficient * basic_salary;
    cout << "Luong nhan vien: " << salary << endl;
}


/******************************************************************************
 * Hàm: exercise18
 * Mô tả: Tính tiền karaoke dựa trên giờ bắt đầu, giờ kết thúc và các mức giá.
 * Đầu vào: Giờ bắt đầu và giờ kết thúc (số nguyên từ 8 đến 24).
 * Đầu ra: In số tiền phải trả.
 ******************************************************************************/
void exercise18() {
    int start_hour, end_hour;
    cout << "Nhap gio bat dau (8-24): ";
    cin >> start_hour;
    cout << "Nhap gio ket thuc (8-24): ";
    cin >> end_hour;

    if (start_hour < 8 || end_hour > 24 || start_hour >= end_hour) {
        cout << "Gio bat dau hoac ket thuc khong hop le!\n";
        return;
    }

    float hours = end_hour - start_hour;
    float price_per_hour = 30000;
    float total_cost = 0;

    if (hours <= 3) {
        total_cost = hours * price_per_hour;
    } else {
        total_cost = 3 * price_per_hour + (hours - 3) * price_per_hour * 0.7;
    }

    if (start_hour >= 8 && end_hour <= 17) {
        total_cost *= 0.9; // Giảm giá 10%
    }

    cout << "So tien phai tra: " << total_cost << " dong\n";
}

/******************************************************************************
 * Hàm: exercise19
 * Mô tả: Kiểm tra và phân tích thông tin về ngày, tháng trong năm hiện tại.
 * Đầu vào: Ngày, tháng, và năm hiện tại (số nguyên).
 * Đầu ra: In kết quả kiểm tra hợp lệ, quý, số ngày trong tháng, ngày trước và sau.
 ******************************************************************************/
void exercise19() {
    int day, month, year;
    cout << "Nhap ngay, thang, nam: ";
    cin >> day >> month >> year;

    // Kiểm tra năm nhuận
    bool is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Kiểm tra tính hợp lệ của tháng
    if (month < 1 || month > 12) {
        cout << "Thang khong hop le!\n";
        return;
    }

    // Kiểm tra số ngày trong tháng
    int days_in_month;
    switch (month) {
        case 2: days_in_month = is_leap_year ? 29 : 28; break;
        case 4: case 6: case 9: case 11: days_in_month = 30; break;
        default: days_in_month = 31; break;
    }

    // Kiểm tra tính hợp lệ của ngày
    if (day < 1 || day > days_in_month) {
        cout << "Ngay khong hop le!\n";
        return;
    }

    // Xác định quý
    int quarter = (month - 1) / 3 + 1;
    cout << "Thang " << month << " thuoc quy " << quarter << endl;
    cout << "Thang " << month << " co " << days_in_month << " ngay\n";

    // Tính ngày hôm sau
    int next_day = day + 1, next_month = month, next_year = year;
    if (next_day > days_in_month) {
        next_day = 1;
        next_month++;
        if (next_month > 12) {
            next_month = 1;
            next_year++;
        }
    }
    cout << "Ngay hom sau: " << next_day << "/" << next_month << "/" << next_year << endl;

    // Tính ngày hôm trước
    int prev_day = day - 1, prev_month = month, prev_year = year;
    if (prev_day >= 1){
        cout << "Ngay hom truoc: " << prev_day << "/" << prev_month << "/" << prev_year << endl;
        return;
    }
    prev_month--;
    if (prev_month < 1) {
        prev_month = 12;
        prev_year--;
    }
    switch (prev_month) {
        case 2: prev_day = is_leap_year ? 29 : 28; break;
        case 4: case 6: case 9: case 11: prev_day = 30; break;
        default: prev_day = 31; break;
    }
}

/******************************************************************************
 * Hàm: exercise20
 * Mô tả: Đổi số tiền N thành các tờ tiền với số lượng tối ưu.
 * Đầu vào: Số tiền N (số nguyên dương, đơn vị ngàn đồng).
 * Đầu ra: In chi tiết số lượng các tờ tiền theo mệnh giá.
 ******************************************************************************/
void exercise20() {
    int money;
    cout << "Nhap so tien can doi (ngan dong): ";
    cin >> money;

    if (money <= 0) {
        cout << "So tien khong hop le!\n";
        return;
    }

    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};

    for (int i = 0; i < 9; i++) {
        count[i] = money / denominations[i];
        money %= denominations[i];
    }

    cout << "Chi tiet so to tien:\n";
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0) {
            cout << denominations[i] << " nghin: " << count[i] << " to\n";
        }
    }
}

/******************************************************************************
 * Hàm: exercise21
 * Mô tả: Tính số nút của số xe dựa trên tổng các chữ số.
 * Đầu vào: Số xe gồm 4 chữ số (số nguyên từ 1000 đến 9999).
 * Đầu ra: In số nút.
 ******************************************************************************/
void exercise21() {
    int car_number;
    cout << "Nhap so xe (4 chu so): ";
    cin >> car_number;

    if (car_number < 1000 || car_number > 9999) {
        cout << "So xe khong hop le!\n";
        return;
    }

    int sum = 0;
    while (car_number > 0) {
        sum += car_number % 10;
        car_number /= 10;
    }
    int buttons = sum % 10;
    cout << "So nut cua so xe: " << buttons << endl;
}

/******************************************************************************
 * Hàm: exercise22
 * Mô tả: Tính tiền điện dựa trên số Kwh tiêu thụ.
 * Đầu vào: Số Kwh tiêu thụ (số nguyên dương).
 * Đầu ra: In số tiền điện phải trả.
 ******************************************************************************/
void exercise22() {
    int kwh;
    cout << "Nhap so Kwh tieu thu: ";
    cin >> kwh;

    if (kwh < 0) {
        cout << "So Kwh khong hop le!\n";
        return;
    }

    long long total_cost = 0;
    if (kwh <= 100) {
        total_cost = kwh * 600;
    } else if (kwh <= 150) {
        total_cost = 100 * 600 + (kwh - 100) * 700;
    } else if (kwh <= 200) {
        total_cost = 100 * 600 + 50 * 700 + (kwh - 150) * 900;
    } else {
        total_cost = 100 * 600 + 50 * 700 + 50 * 900 + (kwh - 200) * 1100;
    }

    cout << "So tien dien phai tra: " << total_cost << " dong\n";
}

/******************************************************************************
 * Hàm: exercise23
 * Mô tả: Hiển thị thứ trong tuần tương ứng với số từ 1 đến 7.
 * Đầu vào: Số nguyên từ 1 đến 7.
 * Đầu ra: In thứ tương ứng.
 ******************************************************************************/
void exercise23() {
    int day;
    cout << "Nhap so tu 1 den 7: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Thu Hai\n"; break;
        case 2: cout << "Thu Ba\n"; break;
        case 3: cout << "Thu Tu\n"; break;
        case 4: cout << "Thu Nam\n"; break;
        case 5: cout << "Thu Sau\n"; break;
        case 6: cout << "Thu Bay\n"; break;
        case 7: cout << "Chu Nhat\n"; break;
        default: cout << "So khong hop le!\n";
    }
}

/******************************************************************************
 * Hàm: exercise24
 * Mô tả: Hiển thị số ngày của tháng nhập vào.
 * Đầu vào: Tháng (số nguyên từ 1 đến 12).
 * Đầu ra: In số ngày của tháng.
 ******************************************************************************/
void exercise24() {
    int month;
    cout << "Nhap thang (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Thang khong hop le!\n";
        return;
    }

    int days;
    switch (month) {
        case 2: days = 28; break; // Giả sử không xét năm nhuận
        case 4: case 6: case 9: case 11: days = 30; break;
        default: days = 31; break;
    }

    cout << "Thang " << month << " co " << days << " ngay\n";
}

/******************************************************************************
 * Hàm: exercise25
 * Mô tả: Kiểm tra số nguyên là chẵn hay lẻ sử dụng switch-case.
 * Đầu vào: Số nguyên.
 * Đầu ra: In kết quả kiểm tra.
 ******************************************************************************/
void exercise25() {
    int number;
    cout << "Nhap so nguyen: ";
    cin >> number;

    switch (number % 2) {
        case 0: cout << number << " la so chan\n"; break;
        default: cout << number << " la so le\n"; break;
    }
}

/******************************************************************************
 * Hàm: exercise26
 * Mô tả: Máy tính đơn giản sử dụng switch-case (cộng, trừ, nhân, chia).
 * Đầu vào: Hai số và một phép toán.
 * Đầu ra: In kết quả của phép toán.
 ******************************************************************************/
void exercise26() {
    float a, b;
    char op;
    cout << "Nhap hai so a, b: ";
    cin >> a >> b;
    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << a << " + " << b << " = " << a + b << endl; break;
        case '-': cout << a << " - " << b << " = " << a - b << endl; break;
        case '*': cout << a << " * " << b << " = " << a * b << endl; break;
        case '/': 
            if (b != 0) {
                cout << a << " / " << b << " = " << a / b << endl;
            } else {
                cout << "Loi: Chia cho 0!\n";
            }
            break;
        default: cout << "Phep toan khong hop le!\n";
    }
}

/******************************************************************************
 * Hàm: exercise27
 * Mô tả: Mô phỏng menu nhà hàng, chọn món và tính giá tiền.
 * Đầu vào: Lựa chọn món ăn từ menu.
 * Đầu ra: In giá tiền của món được chọn.
 ******************************************************************************/
void exercise27() {
    int choice;
    cout << "Menu nha hang:\n";
    cout << "1. Pho bo - 50,000 dong\n";
    cout << "2. Bun cha - 40,000 dong\n";
    cout << "3. Com rang - 30,000 dong\n";
    cout << "Nhap lua chon (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Pho bo: 50,000 dong\n"; break;
        case 2: cout << "Bun cha: 40,000 dong\n"; break;
        case 3: cout << "Com rang: 30,000 dong\n"; break;
        default: cout << "Lua chon khong hop le!\n";
    }
}

// Hàm main điều khiển chương trình
int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Thoat chuong trinh.\n";
                break;
            case 1:
                exercise1();
                break;
            case 2:
                exercise2();
                break;
            case 3:
                exercise3();
                break;
            case 4:
                exercise4();
                break;
            case 5:
                exercise5();
                break;
            case 6:
                exercise6();
                break;
            case 7:
                exercise7();
                break;
            case 8:
                exercise8();
                break;
            case 9:
                exercise9();
                break;
            case 10:
                exercise10();
                break;
            case 11:
                exercise11();
                break;
            case 12:
                exercise12();
                break;
            case 13:
                exercise13();
                break;
            case 14:
                exercise14();
                break;
            case 15:
                exercise15();
                break;
            case 16:
                exercise16();
                break;
            case 17:
                exercise17();
                break;
            case 18:
                exercise18();
                break;
            case 19:
                exercise19();
                break;
            case 20:
                exercise20();
                break;
            case 21:
                exercise21();
                break;
            case 22:
                exercise22();
                break;
            case 23:
                exercise23();
                break;
            case 24:
                exercise24();
                break;
            case 25:
                exercise25();
                break;
            case 26:
                exercise26();
                break;
            case 27:
                exercise27();
                break;
            default:
                cout << "Lua chon khong hop le! Vui long nhap lai.\n";
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        // Bo thua ky tu
        cin.ignore();
        cin.get();
        
    } while (choice != 0);
    return 0;
}