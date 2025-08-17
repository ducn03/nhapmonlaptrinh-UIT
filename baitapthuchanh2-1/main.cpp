/**
 * @author Nguyễn Đình Đức - 25730017
 * Created by DinhDuc on 17/08/2025.
 */

#include <bits/stdc++.h>
using namespace std;

/* ===== Khai báo hàm ===== */
/**
 * Validate số nguyên được đưa vào -> Vì có trường hợp ng dùng nhập chữ
 * @author Nguyễn Đình Đức - 25730017
 * @return trả về 1 số nguyên
 */
int safeInt();

/**
 * Validate số double được đưa vào -> Vì có trường hợp ng dùng nhập chữ
 * @author Nguyễn Đình Đức - 25730017
 * @return trả về 1 số double
 */
double safeDouble();

/**
 * Số nguyên tố là số lớn hơn 1 - và chỉ có thể chia hết cho 1 và chính nó

 * @param x Số cần kiểm tra.
 * @return Trả về 1 kiểu bool true or false
 */
bool isPrime(int x);

/**
 * Tính tổng các số nguyên tố nhỏ hơn n.
 * @author Nguyễn Đình Đức - 25730017
 * @param n Giới hạn trên.
 * @return Tổng các số nguyên tố nhỏ hơn n.
 */
long long sumPrimesLessThan(int n);

/**
 * Tính ước số chung lớn nhất (GCD) của hai số nguyên.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Số nguyên thứ nhất.
 * @param b Số nguyên thứ hai.
 * @return Giá trị GCD của a và b.
 */
int gcd(int a, int b);


/**
 * Tính bội số chung nhỏ nhất (LCM) của hai số nguyên.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Số nguyên thứ nhất.
 * @param b Số nguyên thứ hai.
 * @return Giá trị LCM của a và b.
 */
long long lcm(int a, int b);

/**
 * Tìm số nhỏ nhất trong 4 số nguyên.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Số nguyên thứ nhất.
 * @param b Số nguyên thứ hai.
 * @param c Số nguyên thứ ba.
 * @param d Số nguyên thứ tư.
 * @return Giá trị nhỏ nhất trong 4 số.
 */
int minOf4(int a, int b, int c, int d);

/**
 * Giải phương trình bậc hai dạng Ax^2 + Bx + C = 0.
 * @author Nguyễn Đình Đức - 25730017
 * @param A Hệ số bậc 2.
 * @param B Hệ số bậc 1.
 * @param C Hệ số tự do.
 * @return Chuỗi mô tả nghiệm của phương trình.
 */
string solveQuadratic(double A, double B, double C);

/**
 * Tính khoảng cách Euclid giữa hai điểm (x1, y1) và (x2, y2).
 * @author Nguyễn Đình Đức - 25730017
 * @param x1 Tọa độ x của điểm 1.
 * @param y1 Tọa độ y của điểm 1.
 * @param x2 Tọa độ x của điểm 2.
 * @param y2 Tọa độ y của điểm 2.
 * @return Khoảng cách giữa hai điểm.
 */
double dist(double x1, double y1, double x2, double y2);

/**
 * Kiểm tra 2 số thực có gần bằng nhau hay không (dùng epsilon).
 * @author Nguyễn Đình Đức - 25730017
 * @param x Số thứ nhất.
 * @param y Số thứ hai.
 * @return true nếu gần bằng nhau, false nếu không.
 */
bool near(double x, double y);

/**
 * Kiểm tra 3 cạnh có thể tạo thành một tam giác hay không.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Cạnh 1.
 * @param b Cạnh 2.
 * @param c Cạnh 3.
 * @return true nếu tạo thành tam giác, false nếu không.
 */
bool isTriangle(double a, double b, double c);

/**
 * Phân loại tam giác dựa trên độ dài 3 cạnh.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Cạnh 1.
 * @param b Cạnh 2.
 * @param c Cạnh 3.
 * @return Chuỗi mô tả loại tam giác (đều, cân, vuông, thường).
 */
string classifyTriangleBySides(double a, double b, double c);

/**
 * Phân loại tam giác dựa trên tọa độ 3 điểm.
 * @author Nguyễn Đình Đức - 25730017
 * @param x1,y1 Điểm thứ nhất.
 * @param x2,y2 Điểm thứ hai.
 * @param x3,y3 Điểm thứ ba.
 * @return Chuỗi mô tả loại tam giác hoặc thông báo không hợp lệ.
 */
string classifyTriangleByCoordinates(double x1, double y1, double x2, double y2, double x3, double y3);

/**
 * Cấu trúc lưu trữ ngày tháng năm.
 * @author Nguyễn Đình Đức - 25730017
 */
struct Date {
    int d, m, y;
};

/**
 * Kiểm tra một năm có phải năm nhuận hay không.
 * @author Nguyễn Đình Đức - 25730017
 * @param y Năm cần kiểm tra.
 * @return true nếu là năm nhuận, false nếu không.
 */
bool isLeapYear(int y);

/**
 * Trả về số ngày trong một tháng của một năm cụ thể.
 * @author Nguyễn Đình Đức - 25730017
 * @param m Tháng.
 * @param y Năm.
 * @return Số ngày trong tháng đó.
 */
int daysInMonth(int m, int y);

/**
 * Kiểm tra ngày tháng năm có hợp lệ hay không.
 * @author Nguyễn Đình Đức - 25730017
 * @param dt Cấu trúc Date.
 * @return true nếu hợp lệ, false nếu không.
 */
bool isValidDate(Date dt);

/**
 * Xác định quý trong năm dựa trên tháng.
 * @author Nguyễn Đình Đức - 25730017
 * @param m Tháng.
 * @return Quý (1 đến 4).
 */
int quarterOfYear(int m);

/**
 * Tính ngày thứ bao nhiêu trong năm.
 * @author Nguyễn Đình Đức - 25730017
 * @param dt Ngày cần tính.
 * @return Số thứ tự trong năm.
 */
int dayOfYear(Date dt);

/**
 * Xác định thứ trong tuần cho một ngày.
 * @author Nguyễn Đình Đức - 25730017
 * @param dt Ngày cần tính.
 * @return Chuỗi tên thứ trong tuần.
 */
string dayOfWeek(Date dt);

/* ===== Khai báo hàm cho Bài 8: Đọc số 2 chữ số ===== */

/**
 * Đọc số nguyên có 2 chữ số thành chữ Tiếng Việt.
 * @author Nguyễn Đình Đức - 25730017
 * @param n Số nguyên (10 <= n <= 99).
 * @return Chuỗi đọc số.
 */
string readNumber(int n);

/**
 * In toàn bộ mảng số nguyên ra màn hình.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 */
void printArray(const vector<int> &a);

/**
 * Nhập mảng số nguyên từ bàn phím.
 * @author Nguyễn Đình Đức - 25730017
 * @return Vector số nguyên đã nhập.
 */
vector<int> inputArray();

/**
 * Sinh ngẫu nhiên một mảng số nguyên.
 * @author Nguyễn Đình Đức - 25730017
 * @return Vector số nguyên ngẫu nhiên.
 */
vector<int> randomArray();

/**
 * Tìm phần tử nhỏ nhất, lớn nhất và đếm số phần tử trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 */
void minMaxCount(const vector<int> &a);

/**
 * Tìm chỉ số của phần tử dương nhỏ nhất trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Vị trí phần tử dương nhỏ nhất, -1 nếu không tồn tại.
 */
int indexSmallestPositive(const vector<int> &a);

/**
 * Tìm chỉ số của phần tử âm lớn nhất trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Vị trí phần tử âm lớn nhất, -1 nếu không tồn tại.
 */
int indexLargestNegative(const vector<int> &a);

/**
 * Xóa phần tử tại vị trí k trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên (tham chiếu).
 * @param k Vị trí cần xóa.
 * @return 1 nếu xóa thành công, 0 nếu không hợp lệ.
 */
int deleteAt(vector<int> &a, int k);

/**
 * Xóa tất cả các phần tử có giá trị x trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên (tham chiếu).
 * @param x Giá trị cần xóa.
 */
void deleteAll(vector<int> &a, int x);

/**
 * Tính tổng tất cả phần tử trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Tổng giá trị.
 */
long long sumArray(const vector<int> &a);

/**
 * Tìm tất cả vị trí của phần tử x trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @param x Giá trị cần tìm.
 * @return Vector các chỉ số xuất hiện.
 */
vector<int> searchAll(const vector<int> &a, int x);

/**
 * Sắp xếp mảng theo thứ tự tăng dần hoặc giảm dần.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên (tham chiếu).
 * @param asc true nếu sắp tăng, false nếu sắp giảm.
 */
void sortArray(vector<int> &a, bool asc);

/**
 * Đảo ngược mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Vector đảo ngược.
 */
vector<int> reverseArr(vector<int> a);

/**
 * Chèn phần tử x vào vị trí k trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên (tham chiếu).
 * @param x Giá trị cần chèn.
 * @param k Vị trí cần chèn.
 */
void insertAt(vector<int> &a, int x, int k);

/**
 * Đếm số phần tử dương và tính tổng của chúng trong mảng.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Cặp (số lượng, tổng).
 */
pair<int, int> countAndSumPositives(const vector<int> &a);

/**
 * Kiểm tra mảng có phải đối xứng (palindrome) hay không.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return true nếu đối xứng, false nếu không.
 */
bool isPalindrome(const vector<int> &a);

/**
 * Kiểm tra mảng có phải dãy tăng dần hay không.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return true nếu tăng dần, false nếu không.
 */
bool isIncreasing(const vector<int> &a);

/**
 * Tách mảng thành 2 mảng: mảng số nguyên tố và mảng không nguyên tố.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Vector số nguyên.
 * @return Cặp (vector số nguyên tố, vector số khác).
 */
pair<vector<int>, vector<int> > splitPrimes(const vector<int> &a);

/**
 * Trộn 2 mảng đã sắp xếp thành một mảng cũng được sắp xếp.
 * @author Nguyễn Đình Đức - 25730017
 * @param a Mảng 1 (đã sắp xếp).
 * @param b Mảng 2 (đã sắp xếp).
 * @return Vector trộn đã sắp xếp.
 */
vector<int> mergeSorted(const vector<int> &a, const vector<int> &b);

/**
 * Chạy menu các chức năng liên quan đến các hàm xử lý số học.
 */
void runMenuHam();

/**
 * Chạy menu các chức năng liên quan đến mảng số nguyên.
 */
void runMenuMang();

/* ===== MAIN ===== */
int main() {
    while (true) {
        // In menu chọn bài tập mảng hay hàm
        cout << "\n===== MENU ====="
                "\n1) HAM"
                "\n2) MANG 1 CHIEU"
                "\n0) Thoat"
                "\nChon: ";

        int selected = safeInt();
        if (selected == 1) {
            runMenuHam();
        } else if (selected == 2) {
            runMenuMang();
        } else if (selected == 0) {
            cout << "Chuong trinh da ket thuc" << endl;
            exit(0);
        } else {
            cout << "Khong co lua chon nay. Vui long nhap lai" << endl;
        }
    }
}

/* ===== Định nghĩa hàm ===== */
int safeInt() {
    int x;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nhap lai so nguyen: ";
    }
    return x;
}

double safeDouble() {
    double x;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Nhập lại số thực: ";
    }
    return x;
}

bool isPrime(int x) {
    // Số nguyên tố nhỏ nhất
    const int MIN_PRIME = 2;
    // Ước lẻ đầu tiên để kiểm tra
    const int FIRST_ODD = 3;
    // Bước nhảy để kiểm tra các ước lẻ
    const int STEP_ODD = 2;

    // Số <= 1 không phải số nguyên tố
    if (x < MIN_PRIME) {
        return false;
    }

    // Kiểm tra số nguyên tố duy nhất chẵn
    if (x == MIN_PRIME) {
        return true;
    }

    // Loại các số chẵn
    if (x % MIN_PRIME == 0) {
        return false;
    }

    // Kiểm tra các ước lẻ từ 3 đến căn bậc hai của x
    // Chỉ cần kiểm tra đến sqrt(x) để tối ưu, vì nếu x có ước lớn hơn sqrt(x),
    // nó phải có ước nhỏ hơn tương ứng
    for (int i = FIRST_ODD; i * i <= x; i += STEP_ODD) {
        // Nếu x chia hết cho i, x không phải số nguyên tố
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

long long sumPrimesLessThan(int n) {
    long long s = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            s += i;
        }
    }
    return s;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return 1LL * abs(a / gcd(a, b)) * abs(b);
}

int minOf4(int a, int b, int c, int d) { return min(min(a, b), min(c, d)); }

string solveQuadratic(double A, double B, double C) {
    if (A == 0) {
        if (B == 0) return (C == 0) ? "Vo so nghiem" : "Vo nghiem";
        return "x = " + to_string(-C / B);
    }
    double delta = B * B - 4 * A * C;
    if (delta < 0) return "Vo nghiem";
    if (fabs(delta) < 1e-9) return "Nghiem kep x = " + to_string(-B / (2 * A));
    double sD = sqrt(delta);
    double x1 = (-B - sD) / (2 * A), x2 = (-B + sD) / (2 * A);
    char buf[100];
    sprintf(buf, "x1=%.6f, x2=%.6f", x1, x2);
    return buf;
}

double dist(double x1, double y1, double x2, double y2) {
    return hypot(x1 - x2, y1 - y2);
}
bool near(double x, double y) {
    return fabs(x - y) < 1e-9;
}
bool isTriangle(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
}

string classifyTriangleBySides(double a, double b, double c) {
    if (!isTriangle(a, b, c)) return "Khong phai tam giac";
    double a2 = a * a, b2 = b * b, c2 = c * c;
    bool right = near(a2 + b2, c2) || near(a2 + c2, b2) || near(b2 + c2, a2);
    bool equi = near(a, b) && near(b, c);
    bool iso = equi || near(a, b) || near(a, c) || near(b, c);
    if (equi) {
        return "Tam giac deu";
    }
    if (right && iso) {
        return "Tam giac vuong can";
    }
    if (right) {
        return "Tam giac vuong";
    }
    if (iso) {
        return "Tam giac can";
    }
    return "Tam giac can";
}

string classifyTriangleByCoordinates(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = dist(x2, y2, x3, y3);
    double b = dist(x1, y1, x3, y3);
    double c = dist(x1, y1, x2, y2);
    return classifyTriangleBySides(a, b, c);
}

// Hằng số
const int MONTHS_IN_YEAR = 12;
const int MIN_YEAR = 1;
const int MIN_MONTH = 1;
const int MAX_MONTH = 12;
const int MIN_DAY = 1;
const int MIN_TWO_DIGIT = 10;
const int MAX_TWO_DIGIT = 99;

// Số ngày mặc định của các tháng trong năm không nhuận
const int DAYS_IN_MONTH[MONTHS_IN_YEAR + 1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

const string WEEKDAY_NAMES[7] = {"Thu bay","Chu nhat","Thu hai","Thu ba","Thu tu","Thu nam","Thu sau"};
const string DIGITS[10] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};


bool isLeapYear(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int daysInMonth(int m, int y) {
    if (m == 2 && isLeapYear(y)) {
        return 29;
    }
    return DAYS_IN_MONTH[m];
}

bool isValidDate(Date dt) {
    if (dt.y < MIN_YEAR || dt.m < MIN_MONTH || dt.m > MAX_MONTH) {
        return false;
    }
    if (dt.d < MIN_DAY || dt.d > daysInMonth(dt.m, dt.y)) {
        return false;
    }
    return true;
}

int quarterOfYear(int m) {
    return (m - 1) / 3 + 1;
}

int dayOfYear(Date dt) {
    int sum = dt.d;
    for (int i = 1; i < dt.m; i++) {
        sum += daysInMonth(i, dt.y);
    }
    return sum;
}

string dayOfWeek(Date dt) {
    // Thuật toán Zeller (áp dụng cho lịch Gregorian)
    int d = dt.d, m = dt.m, y = dt.y;
    if (m < 3) { m += 12; y--; }
    int K = y % 100;
    int J = y / 100;
    int h = (d + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    return WEEKDAY_NAMES[h];
}

/* ===== Định nghĩa hàm cho Bài 8: Đọc số 2 chữ số ===== */

string readNumber(int n) {
    if (n < MIN_TWO_DIGIT || n > MAX_TWO_DIGIT) return "So khong hop le";
    int chuc = n / 10, dv = n % 10;
    string res = DIGITS[chuc] + " muoi";
    if (dv == 0) return res;
    if (dv == 1) return res + " mot";
    if (dv == 5) return res + " lam";
    return res + " " + DIGITS[dv];
}

void printArray(const vector<int> &a) {
    cout << "[ ";
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i];
        if (i + 1 < a.size()) cout << ", ";
    }
    cout << " ]\n";
}

vector<int> inputArray() {
    cout << "n: ";
    int n = safeInt();
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        a[i] = safeInt();
    }
    return a;
}

vector<int> randomArray() {
    cout << "n: ";
    int n = safeInt();
    cout << "min: ";
    int mn = safeInt();
    cout << "max: ";
    int mx = safeInt();
    if (mn > mx) swap(mn, mx);
    srand(time(NULL));
    vector<int> a(n);
    for (int i = 0; i < n; i++)a[i] = rand() % (mx - mn + 1) + mn;
    return a;
}

void minMaxCount(const vector<int> &a) {
    if (a.empty()) {
        cout << "Mang empty\n";
        return;
    }
    int mn = a[0], mx = a[0], cmn = 0, cmx = 0;
    for (int v: a) {
        if (v < mn) {
            mn = v;
            cmn = 1;
        } else if (v == mn)cmn++;
        if (v > mx) {
            mx = v;
            cmx = 1;
        } else if (v == mx)cmx++;
    }
    cout << "Min=" << mn << " (" << cmn << " lan), Max=" << mx << " (" << cmx << " lan)\n";
}

int indexSmallestPositive(const vector<int> &a) {
    int idx = -1;
    int best = INT_MAX;
    for (int i = 0; i < a.size(); i++) if (a[i] > 0 && a[i] < best) {
        best = a[i];
        idx = i;
    }
    return idx;
}

int indexLargestNegative(const vector<int> &a) {
    int idx = -1;
    int best = INT_MIN;
    for (int i = 0; i < a.size(); i++) if (a[i] < 0 && a[i] > best) {
        best = a[i];
        idx = i;
    }
    return idx;
}

int deleteAt(vector<int> &a, int k) {
    if (k < 0 || k >= a.size()) return 0;
    a.erase(a.begin() + k);
    return 1;
}

void deleteAll(vector<int> &a, int x) {
    a.erase(remove(a.begin(), a.end(), x), a.end());
}

long long sumArray(const vector<int> &a) {
    long long s = 0;
    for (const int v: a) {
        s += v;
    }
    return s;
}

vector<int> searchAll(const vector<int> &a, int x) {
    vector<int> res;
    for (int i = 0; i < a.size(); i++) if (a[i] == x) res.push_back(i);
    return res;
}

void sortArray(vector<int> &a, bool asc) {
    if (asc) sort(a.begin(), a.end());
    else sort(a.rbegin(), a.rend());
}

vector<int> reverseArr(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}

void insertAt(vector<int> &a, int x, int k) {
    if (k < 0)k = 0;
    if (k > a.size())k = a.size();
    a.insert(a.begin() + k, x);
}

pair<int, int> countAndSumPositives(const vector<int> &a) {
    int cnt = 0, sum = 0;
    for (int v: a) if (v > 0) {
        cnt++;
        sum += v;
    }
    return {cnt, sum};
}

bool isPalindrome(const vector<int> &a) {
    for (int i = 0, j = a.size() - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            return false;
        }
    }
    return true;
}

bool isIncreasing(const vector<int> &a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] <= a[i - 1]) {
            return false;
        }
    }
    return true;
}

pair<vector<int>, vector<int> > splitPrimes(const vector<int> &a) {
    vector<int> p, q;
    for (int v: a) {
        (isPrime(abs(v)) ? p : q).push_back(v);
    }
    return {p, q};
}

vector<int> mergeSorted(const vector<int> &a, const vector<int> &b) {
    int i = 0, j = 0;
    vector<int> c;
    while (i < a.size() || j < b.size()) {
        if (j >= b.size() || (i < a.size() && a[i] <= b[j])) {
            c.push_back(a[i++]);
        }
        else c.push_back(b[j++]);
    }
    return c;
}

void runMenuHam() {
    while (true) {
        cout <<
                "\n--- HAM ---"
                "\n1) Tong so nguyen to<n"
                "\n2) Tim uoc chung lon nhat va boi chung nho nhat cua 2 so nguyen duong a va b"
                "\n3) Tra ve gia tri nho nhat cua 4 so nguyen"
                "\n4) Giai PT bac 2"
                "\n5) Xac dinh tinh chat cua 1 tam giac"
                "\n6) Kiem tra tam giac 3 canh"
                "\n7) Viet ham nhap thang nam"
                "\n8) Viet ham doc chu so"
                "\n9) Quay lai"
                "\nChon: ";
        int c = safeInt();
        switch (c) {
            case 1: {
                cout << "n:";
                int n = safeInt();
                cout << sumPrimesLessThan(n) << "\n";
                break;
            }
            case 2: {
                int a = safeInt(), b = safeInt();
                cout << "GCD=" << gcd(a, b) << " LCM=" << lcm(a, b) << "\n";
                break;
            }
            case 3: {
                int a = safeInt(), b = safeInt(), c = safeInt(), d = safeInt();
                cout << minOf4(a, b, c, d) << "\n";
                break;
            }
            case 4: {
                double A = safeDouble(), B = safeDouble(), C = safeDouble();
                cout << solveQuadratic(A, B, C) << "\n";
                break;
            }
            case 5: {
                double x1 = safeDouble(), y1 = safeDouble(), x2 = safeDouble(), y2 = safeDouble(), x3 = safeDouble(), y3
                        = safeDouble();
                cout << classifyTriangleByCoordinates(x1, y1, x2, y2, x3, y3) << "\n";
                break;
            }
            case 6: {
                double a = safeDouble(), b = safeDouble(), c = safeDouble();
                cout << classifyTriangleBySides(a, b, c) << "\n";
                break;
            }
            case 7: {
                Date dt;
                cout << "Nhap ngay: "; dt.d = safeInt();
                cout << "Nhap thang: "; dt.m = safeInt();
                cout << "Nhap nam: "; dt.y = safeInt();
                if (!isValidDate(dt)) {
                    cout << "Ngay thang nam khong hop le!\n";
                    break;
                }
                cout << "Thang " << dt.m << " co " << daysInMonth(dt.m, dt.y) << " ngay, thuoc quy " << quarterOfYear(dt.m) << "\n";
                cout << (isLeapYear(dt.y) ? "Nam nhuan" : "Khong phai nam nhuan") << "\n";
                cout << "Day of year: " << dayOfYear(dt) << "\n";
                cout << "Day of week: " << dayOfWeek(dt) << "\n";
                break;
            }
            case 8: {
                cout << "Nhap so co 2 chu so: ";
                int n = safeInt();
                cout << readNumber(n) << "\n";
                break;
            }
            case 9: return;
            default: cout << "Lua chon khong ton tai. Vui long nhap lai" << "\n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        // Bo thua ky tu
        cin.ignore();
    }
}

void runMenuMang() {
    vector<int> arr;
    while (true) {
        cout <<
                "\n--- MANG 1 CHIEU ---"
                "\n1) Nhap vao 1 mang"
                "\n2) Khoi tao mang ngau nhien"
                "\n3) Xuat mang do ra man hinh"
                "\n4) Min/Max cua mang & dem tong phan tu min/max"
                "\n5) Tim vi tri va in ra so duong nho nhat"
                "\n6) Tìm vi tri va in ra so am nho nhat"
                "\n7) Xoa phan tu co chi so k trong mang a có n phan tu"
                "\n8) Xoa tat ca phan tu co gia tri X trong mang"
                "\n9) Tinh tong phan tu cua mang"
                "\n10) Tim kiem 1 phan tu x cho truoc"
                "\n11) Sap xep mang theo thu tu tang hoac giam dan"
                "\n12) Dao nguoc mang"
                "\n13) Them phan tu x tai vi tri k"
                "\n14) Dem so duong & tinh tong so duong"
                "\n15) Kiem tra mang co doi xung hay khong?"
                "\n16) Kiem tra mang co dang sap xep tang dan hay khong?"
                "\n17) Tach 2 mang - 1 mang snt - 1 mang so con lai"
                "\n18) Noi 2 mang theo thu tu tan dan - noi thang ra la merge sort"
                "\n19) Quay lai"
                "\nChọn: ";
        int c = safeInt();
        switch (c) {
            case 1:
                arr = inputArray();
                break;
            case 2:
                arr = randomArray();
                break;
            case 3:
                printArray(arr);
                break;
            case 4:
                minMaxCount(arr);
                break;
            case 5:
                cout << indexSmallestPositive(arr) << "\n";
                break;
            case 6:
                cout << indexLargestNegative(arr) << "\n";
                break;
            case 7: {
                int k = safeInt();
                cout << deleteAt(arr, k) << "\n";
                break;
            }
            case 8: {
                int x = safeInt();
                deleteAll(arr, x);
                break;
            }
            case 9: cout << sumArray(arr) << "\n";
                break;
            case 10: {
                int x = safeInt();
                auto idx = searchAll(arr, x);
                for (int i: idx)cout << i << " ";
                cout << "\n";
                break;
            }
            case 11: {
                int t = safeInt();
                sortArray(arr, t == 1);
                break;
            }
            case 12:
                printArray(reverseArr(arr));
                break;
            case 13: {
                int x = safeInt(), k = safeInt();
                insertAt(arr, x, k);
                break;
            }
            case 14: {
                auto [cnt,sum] = countAndSumPositives(arr);
                cout << cnt << " " << sum << "\n";
                break;
            }
            case 15:
                cout << (isPalindrome(arr) ? "Dung" : "Sai") << "\n";
                break;
            case 16:
                cout << (isIncreasing(arr) ? "Dung" : "Sai") << "\n";
                break;
            case 17: {
                auto [p,q] = splitPrimes(arr);
                printArray(p);
                printArray(q);
                break;
            }
            case 18: {
                auto a = inputArray(), b = inputArray();
                printArray(mergeSorted(a, b));
                break;
            }
            case 19: return;
            default: cout << "Lua chon khong ton tai. Vui long nhap lua chon khac" << "\n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        // Bo thua ky tu
        cin.ignore();
    }
}
