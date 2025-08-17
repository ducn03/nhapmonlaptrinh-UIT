/**
 * @author Nguyễn Đình Đức - 25730017
 */

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

/* ================== KHAI BÁO HÀM ================== */
// --- Chuỗi ký tự ---
/**
 * Kiểm tra chuỗi đối xứng.
 * @param s chuỗi cần kiểm tra.
 * @return true nếu đối xứng.
 * @author Nguyễn Đình Đức - 25730017
 */
bool isPalindrome(const string &s);

/**
 * Tính độ dài chuỗi.
 * @param s chuỗi.
 * @return độ dài.
 * @author Nguyễn Đình Đức - 25730017
 */
int stringLength(const string &s);

/**
 * Đảo ngược chuỗi.
 * @param s chuỗi.
 * @return chuỗi đảo ngược.
 * @author Nguyễn Đình Đức - 25730017
 */
string reverseString(const string &s);

/**
 * Tìm vị trí ký tự đầu tiên.
 * @param s chuỗi.
 * @param c ký tự.
 * @return vị trí hoặc -1.
 */
int firstIndexOf(const string &s, char c);

/**
 * Tìm vị trí ký tự cuối cùng.
 * @param s chuỗi.
 * @param c ký tự.
 * @return vị trí hoặc -1.
 */
int lastIndexOf(const string &s, char c);

/**
 * Tìm chuỗi con trong chuỗi.
 * @param s chuỗi gốc.
 * @param sub chuỗi con.
 * @return vị trí hoặc -1.
 */
int findSubstring(const string &s, const string &sub);

/**
 * Thay thế ký tự.
 * @param s chuỗi.
 * @param oldc ký tự cũ.
 * @param newc ký tự mới.
 * @return chuỗi sau thay thế.
 */
string replaceChar(string s, char oldc, char newc);

/**
 * Đếm số lần xuất hiện ký tự.
 * @param s chuỗi.
 * @param c ký tự.
 * @return số lần.
 */
int countChar(const string &s, char c);

/**
 * Xuất các ký tự in hoa.
 * @param s chuỗi.
 * @return chuỗi chỉ chứa ký tự in hoa.
 */
string extractUppercase(const string &s);

/**
 * Đổi chữ xen kẽ hoa/thường.
 * @param s chuỗi.
 * @return chuỗi đã đổi.
 */
string toggleAlternateCase(const string &s);

/**
 * Tìm ký tự xuất hiện nhiều nhất.
 * @param s chuỗi.
 * @return ký tự.
 */
char mostFrequentChar(const string &s);

/**
 * Xóa từ khỏi chuỗi.
 * @param s chuỗi.
 * @param word từ cần xóa.
 * @return chuỗi mới.
 */
string removeWord(string s, const string &word);

// --- Struct ---
struct Tinh { string ma, ten; long danSo; double dienTich; };

/**
 * Nhập thông tin danh sách tỉnh.
 * @param ds Danh sách tỉnh để nhập dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void nhapTinh(vector<Tinh> &ds);

/**
 * Xuất thông tin danh sách tỉnh.
 * @param ds Danh sách tỉnh để xuất dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatTinh(const vector<Tinh> &ds);

/**
 * Xuất thông tin các tỉnh có dân số lớn hơn 1 triệu.
 * @param ds Danh sách tỉnh để kiểm tra và xuất.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatDanSoLonHon1Trieu(const vector<Tinh> &ds);

/**
 * Tìm tỉnh có diện tích lớn nhất.
 * @param ds Danh sách tỉnh để tìm kiếm.
 * @return Tỉnh có diện tích lớn nhất.
 * @author Nguyễn Đình Đức - 25730017
 */
Tinh maxDienTich(const vector<Tinh> &ds);

struct SinhVien { string ma, ten, gioitinh, diachi; double diem[6]; };

/**
 * Nhập thông tin một sinh viên.
 * @param sv Đối tượng sinh viên để nhập dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void nhapSinhVien(SinhVien &sv);

/**
 * Nhập danh sách sinh viên.
 * @param ds Danh sách sinh viên để nhập dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void nhapDanhSachSinhVien(vector<SinhVien> &ds);

/**
 * Xuất thông tin một sinh viên.
 * @param sv Đối tượng sinh viên để xuất dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatSinhVien(const SinhVien &sv);

/**
 * Xuất danh sách sinh viên.
 * @param ds Danh sách sinh viên để xuất dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatDanhSachSinhVien(const vector<SinhVien> &ds);

/**
 * Thêm một sinh viên vào danh sách.
 * @param ds Danh sách sinh viên để thêm dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void themSinhVien(vector<SinhVien> &ds);

/**
 * Xóa một sinh viên khỏi danh sách theo mã sinh viên.
 * @param ds Danh sách sinh viên để xóa.
 * @param ma Mã sinh viên cần xóa.
 * @author Nguyễn Đình Đức - 25730017
 */
void xoaSinhVien(vector<SinhVien> &ds, const string &ma);

/**
 * Tìm sinh viên theo mã sinh viên.
 * @param ds Danh sách sinh viên để tìm kiếm.
 * @param ma Mã sinh viên cần tìm.
 * @author Nguyễn Đình Đức - 25730017
 */
void timSinhVienTheoMa(const vector<SinhVien> &ds, const string &ma);

/**
 * Tìm sinh viên theo tên.
 * @param ds Danh sách sinh viên để tìm kiếm.
 * @param ten Tên sinh viên cần tìm.
 * @author Nguyễn Đình Đức - 25730017
 */
void timSinhVienTheoTen(const vector<SinhVien> &ds, const string &ten);

/**
 * Xuất danh sách sinh viên còn nợ điểm (điểm < 5 ở ít nhất một môn).
 * @param ds Danh sách sinh viên để kiểm tra và xuất.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatSinhVienNoDiem(const vector<SinhVien> &ds);

struct PhanSo { int tu, mau; };

/**
 * Tìm ước chung lớn nhất của hai số.
 * @param a Số thứ nhất.
 * @param b Số thứ hai.
 * @return Ước chung lớn nhất.
 * @author Nguyễn Đình Đức - 25730017
 */
int gcd(int a, int b);

/**
 * Rút gọn phân số.
 * @param ps Phân số cần rút gọn.
 * @author Nguyễn Đình Đức - 25730017
 */
void rutGon(PhanSo &ps);

/**
 * Nhập thông tin phân số.
 * @param ps Phân số để nhập dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void nhapPhanSo(PhanSo &ps);

/**
 * Xuất thông tin phân số.
 * @param ps Phân số để xuất dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatPhanSo(const PhanSo &ps);

/**
 * Tính tổng hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @return Tổng của hai phân số.
 * @author Nguyễn Đình Đức - 25730017
 */
PhanSo tongPhanSo(const PhanSo &a, const PhanSo &b);

/**
 * Tính hiệu hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @return Hiệu của hai phân số.
 * @author Nguyễn Đình Đức - 25730017
 */
PhanSo hieuPhanSo(const PhanSo &a, const PhanSo &b);

/**
 * Tính tích hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @return Tích của hai phân số.
 * @author Nguyễn Đình Đức - 25730017
 */
PhanSo tichPhanSo(const PhanSo &a, const PhanSo &b);

/**
 * Tính thương hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @return Thương của hai phân số.
 * @author Nguyễn Đình Đức - 25730017
 */
PhanSo thuongPhanSo(const PhanSo &a, const PhanSo &b);

/**
 * Kiểm tra phân số có phải là tối giản không.
 * @param ps Phân số cần kiểm tra.
 * @return true nếu là tối giản, false nếu không.
 * @author Nguyễn Đình Đức - 25730017
 */
bool laToiGian(const PhanSo &ps);

/**
 * Quy đồng hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @author Nguyễn Đình Đức - 25730017
 */
void quyDong(PhanSo &a, PhanSo &b);

/**
 * Kiểm tra phân số là âm, dương hay bằng 0.
 * @param ps Phân số cần kiểm tra.
 * @return 1 nếu dương, -1 nếu âm, 0 nếu bằng 0.
 * @author Nguyễn Đình Đức - 25730017
 */
int kiemTraAmDuong(const PhanSo &ps);

/**
 * So sánh hai phân số.
 * @param a Phân số thứ nhất.
 * @param b Phân số thứ hai.
 * @return 1 nếu a > b, -1 nếu a < b, 0 nếu a = b.
 * @author Nguyễn Đình Đức - 25730017
 */
int soSanhPhanSo(const PhanSo &a, const PhanSo &b);

struct Ngay { int ngay, thang, nam; };

/**
 * Kiểm tra năm có phải năm nhuận không.
 * @param nam Năm cần kiểm tra.
 * @return true nếu là năm nhuận, false nếu không.
 * @author Nguyễn Đình Đức - 25730017
 */
bool laNamNhuan(int nam);

/**
 * Tính số ngày trong tháng.
 * @param thang Tháng cần tính.
 * @param nam Năm tương ứng.
 * @return Số ngày trong tháng.
 * @author Nguyễn Đình Đức - 25730017
 */
int soNgayTrongThang(int thang, int nam);

/**
 * Tính số ngày trong năm.
 * @param nam Năm cần tính.
 * @return Số ngày trong năm.
 * @author Nguyễn Đình Đức - 25730017
 */
int soNgayTrongNam(int nam);

/**
 * Nhập thông tin ngày.
 * @param ng Ngày để nhập dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void nhapNgay(Ngay &ng);

/**
 * Xuất thông tin ngày.
 * @param ng Ngày để xuất dữ liệu.
 * @author Nguyễn Đình Đức - 25730017
 */
void xuatNgay(const Ngay &ng);

/**
 * Tính ngày tiếp theo.
 * @param ng Ngày hiện tại.
 * @return Ngày tiếp theo.
 * @author Nguyễn Đình Đức - 25730017
 */
Ngay ngaySau(const Ngay &ng);

/**
 * Tính ngày trước đó.
 * @param ng Ngày hiện tại.
 * @return Ngày trước đó.
 * @author Nguyễn Đình Đức - 25730017
 */
Ngay ngayTruoc(const Ngay &ng);

// --- Con trỏ ---
/**
 * Minh họa sử dụng con trỏ với mảng, gán giá trị 100 cho phần tử thứ 5.
 * @author Nguyễn Đình Đức - 25730017
 */
void demoMangConTro();

/**
 * Chuyển chuỗi "hello class" thành "HELLO CLASS" sử dụng con trỏ.
 * @author Nguyễn Đình Đức - 25730017
 */
void upperChuoiConTro();

/**
 * Nhập một dãy số thực với cấp phát động.
 * @param n Số phần tử của dãy.
 * @return Con trỏ trỏ đến dãy số thực vừa nhập.
 * @author Nguyễn Đình Đức - 25730017
 */
double* nhapDaySoThuc(int &n);

/**
 * Sao chép dãy số thực từ A sang B với cấp phát động và giải phóng bộ nhớ A.
 * @param A Con trỏ đến dãy số thực nguồn.
 * @param n Số phần tử của dãy.
 * @return Con trỏ trỏ đến dãy số thực mới sau khi sao chép.
 * @author Nguyễn Đình Đức - 25730017
 */
double* saoChepDaySoThuc(double *A, int n);

/* ================== ĐỊNH NGHĨA HÀM ================== */
// Chuỗi
bool isPalindrome(const string &s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int stringLength(const string &s) {
    return (int)s.size();
}

string reverseString(const string &s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t;
}

int firstIndexOf(const string &s, char c) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int lastIndexOf(const string &s, char c) {
    for (int i = (int)s.size() - 1; i >= 0; i--) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int findSubstring(const string &s, const string &sub) {
    size_t pos = s.find(sub);
    if (pos == string::npos) return -1;
    return (int)pos;
}

string replaceChar(string s, char oldc, char newc) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == oldc) {
            s[i] = newc;
        }
    }
    return s;
}

int countChar(const string &s, char c) {
    int cnt = 0;
    for (char x : s) {
        if (x == c) {
            cnt++;
        }
    }
    return cnt;
}

string extractUppercase(const string &s) {
    string res;
    for (char x : s) {
        if (isupper(x)) {
            res.push_back(x);
        }
    }
    return res;
}

string toggleAlternateCase(const string &s) {
    string res = s;
    for (int i = 0; i < (int)res.size(); i++) {
        if (i % 2 == 0) {
            res[i] = toupper(res[i]);
        } else {
            res[i] = tolower(res[i]);
        }
    }
    return res;
}

char mostFrequentChar(const string &s) {
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    char res = s[0];
    for (auto &p : freq) {
        if (p.second > freq[res]) {
            res = p.first;
        }
    }
    return res;
}

string removeWord(string s, const string &word) {
    size_t pos;
    while ((pos = s.find(word)) != string::npos) {
        s.erase(pos, word.length());
    }
    return s;
}

// Struct Tinh
void nhapTinh(vector<Tinh> &ds) {
    int n;
    cout << "Nhap so tinh: ";
    cin >> n;
    ds.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Ma tinh: ";
        cin >> ds[i].ma;
        cout << "Ten tinh: ";
        cin >> ws;
        getline(cin, ds[i].ten);
        cout << "Dan so: ";
        cin >> ds[i].danSo;
        cout << "Dien tich: ";
        cin >> ds[i].dienTich;
    }
}

void xuatTinh(const vector<Tinh> &ds) {
    // In tiêu đề cột
    cout << left << setw(10) << "Ma tinh" << setw(30) << "Ten tinh"
         << setw(15) << "Dan so" << setw(15) << "Dien tich" << endl;
    // Dòng ngăn cách
    cout << string(70, '-') << endl;

    // In dữ liệu
    for (auto &t : ds) {
        cout << left << setw(10) << t.ma
             << setw(30) << t.ten
             << setw(15) << t.danSo
             << setw(15) << fixed << setprecision(2) << t.dienTich << endl;
    }
}

void xuatDanSoLonHon1Trieu(const vector<Tinh> &ds) {
    for (auto &t : ds) {
        if (t.danSo > 1000000) {
            cout << t.ma << " - " << t.ten << " - DS: " << t.danSo << " - DT: " << t.dienTich << "\n";
        }
    }
}

Tinh maxDienTich(const vector<Tinh> &ds) {
    return *max_element(ds.begin(), ds.end(), [](const Tinh &a, const Tinh &b){
        return a.dienTich < b.dienTich;
    });
}

// Struct SinhVien
void nhapSinhVien(SinhVien &sv) {
    cout << "Ma SV: ";
    cin >> sv.ma;
    cout << "Ho ten: ";
    cin >> ws;
    getline(cin, sv.ten);
    cout << "Gioi tinh (nam/nu): ";
    cin >> sv.gioitinh;
    cout << "Dia chi: ";
    cin >> ws;
    getline(cin, sv.diachi);
    for (int i = 0; i < 6; i++) {
        cout << "Diem mon " << (i + 1) << ": ";
        cin >> sv.diem[i];
    }
}

void nhapDanhSachSinhVien(vector<SinhVien> &ds) {
    ds.clear();
    int n;
    cout << "Nhap so sinh vien (toi da 150): ";
    cin >> n;
    if (n > 150) n = 150;
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        nhapSinhVien(sv);
        ds.push_back(sv);
    }
}

void xuatSinhVien(const SinhVien &sv) {
    cout << sv.ma << " - " << sv.ten << " - " << sv.gioitinh << " - " << sv.diachi;
    for (int i = 0; i < 6; i++) {
        cout << " - Diem " << (i + 1) << ": " << sv.diem[i];
    }
    cout << "\n";
}

void xuatDanhSachSinhVien(const vector<SinhVien> &ds) {
    for (auto &sv : ds) {
        xuatSinhVien(sv);
    }
}

void themSinhVien(vector<SinhVien> &ds) {
    if (ds.size() >= 150) {
        cout << "Danh sach da day!\n";
        return;
    }
    SinhVien sv;
    nhapSinhVien(sv);
    ds.push_back(sv);
}

void xoaSinhVien(vector<SinhVien> &ds, const string &ma) {
    for (auto it = ds.begin(); it != ds.end(); ++it) {
        if (it->ma == ma) {
            ds.erase(it);
            cout << "Da xoa sinh vien!\n";
            return;
        }
    }
    cout << "Khong tim thay sinh vien!\n";
}

void timSinhVienTheoMa(const vector<SinhVien> &ds, const string &ma) {
    for (auto &sv : ds) {
        if (sv.ma == ma) {
            xuatSinhVien(sv);
            return;
        }
    }
    cout << "Khong tim thay!\n";
}

void timSinhVienTheoTen(const vector<SinhVien> &ds, const string &ten) {
    bool found = false;
    for (auto &sv : ds) {
        if (sv.ten == ten) {
            xuatSinhVien(sv);
            found = true;
        }
    }
    if (!found) cout << "Khong tim thay!\n";
}

void xuatSinhVienNoDiem(const vector<SinhVien> &ds) {
    for (auto &sv : ds) {
        bool no = false;
        for (int i = 0; i < 6; i++) {
            if (sv.diem[i] < 5) {
                no = true;
                break;
            }
        }
        if (no) {
            xuatSinhVien(sv);
        }
    }
}

// Struct PhanSo
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void rutGon(PhanSo &ps) {
    if (ps.mau == 0) return; // invalid
    int g = gcd(ps.tu, ps.mau);
    ps.tu /= g;
    ps.mau /= g;
    if (ps.mau < 0) {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
}

void nhapPhanSo(PhanSo &ps) {
    cout << "Nhap tu so: ";
    cin >> ps.tu;
    cout << "Nhap mau so: ";
    cin >> ps.mau;
    while (ps.mau == 0) {
        cout << "Mau khong hop le, nhap lai: ";
        cin >> ps.mau;
    }
}

void xuatPhanSo(const PhanSo &ps) {
    cout << ps.tu << "/" << ps.mau << "\n";
}

PhanSo tongPhanSo(const PhanSo &a, const PhanSo &b) {
    PhanSo res;
    res.tu = a.tu * b.mau + b.tu * a.mau;
    res.mau = a.mau * b.mau;
    rutGon(res);
    return res;
}

PhanSo hieuPhanSo(const PhanSo &a, const PhanSo &b) {
    PhanSo res;
    res.tu = a.tu * b.mau - b.tu * a.mau;
    res.mau = a.mau * b.mau;
    rutGon(res);
    return res;
}

PhanSo tichPhanSo(const PhanSo &a, const PhanSo &b) {
    PhanSo res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    rutGon(res);
    return res;
}

PhanSo thuongPhanSo(const PhanSo &a, const PhanSo &b) {
    PhanSo res;
    res.tu = a.tu * b.mau;
    res.mau = a.mau * b.tu;
    rutGon(res);
    return res;
}

bool laToiGian(const PhanSo &ps) {
    PhanSo temp = ps;
    rutGon(temp);
    return gcd(temp.tu, temp.mau) == 1;
}

void quyDong(PhanSo &a, PhanSo &b) {
    int lcm = a.mau * b.mau / gcd(a.mau, b.mau);
    a.tu = a.tu * (lcm / a.mau);
    a.mau = lcm;
    b.tu = b.tu * (lcm / b.mau);
    b.mau = lcm;
}

int kiemTraAmDuong(const PhanSo &ps) {
    if (ps.tu == 0) return 0;
    return ((ps.tu > 0 && ps.mau > 0) || (ps.tu < 0 && ps.mau < 0)) ? 1 : -1;
}

int soSanhPhanSo(const PhanSo &a, const PhanSo &b) {
    long long val1 = (long long)a.tu * b.mau;
    long long val2 = (long long)b.tu * a.mau;
    if (val1 > val2) return 1;
    if (val1 < val2) return -1;
    return 0;
}

// Struct Ngay
bool laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int soNgayTrongThang(int thang, int nam) {
    if (thang == 2) return 28 + laNamNhuan(nam);
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) return 30;
    return 31;
}

int soNgayTrongNam(int nam) {
    return 365 + laNamNhuan(nam);
}

void nhapNgay(Ngay &ng) {
    cout << "Nhap ngay: ";
    cin >> ng.ngay;
    cout << "Nhap thang: ";
    cin >> ng.thang;
    cout << "Nhap nam: ";
    cin >> ng.nam;
    // Simple validation
    while (ng.thang < 1 || ng.thang > 12 || ng.ngay < 1 || ng.ngay > soNgayTrongThang(ng.thang, ng.nam)) {
        cout << "Ngay khong hop le, nhap lai!\n";
        cout << "Nhap ngay: ";
        cin >> ng.ngay;
        cout << "Nhap thang: ";
        cin >> ng.thang;
        cout << "Nhap nam: ";
        cin >> ng.nam;
    }
}

void xuatNgay(const Ngay &ng) {
    cout << ng.ngay << "/" << ng.thang << "/" << ng.nam << "\n";
}

Ngay ngaySau(const Ngay &ng) {
    Ngay res = ng;
    res.ngay++;
    if (res.ngay > soNgayTrongThang(res.thang, res.nam)) {
        res.ngay = 1;
        res.thang++;
        if (res.thang > 12) {
            res.thang = 1;
            res.nam++;
        }
    }
    return res;
}

Ngay ngayTruoc(const Ngay &ng) {
    Ngay res = ng;
    res.ngay--;
    if (res.ngay < 1) {
        res.thang--;
        if (res.thang < 1) {
            res.thang = 12;
            res.nam--;
        }
        res.ngay = soNgayTrongThang(res.thang, res.nam);
    }
    return res;
}

// Con trỏ
void demoMangConTro() {
    int a[10];
    int *p = a;
    for (int i = 0; i < 10; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> p[i];
    }
    p[4] = 100;
    cout << "Mang sau khi gan: ";
    for (int i = 0; i < 10; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

void upperChuoiConTro() {
    char str[20];
    strcpy(str, "hello class");
    char *p = str;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    cout << "Chuoi sau: " << str << "\n";
}

double* nhapDaySoThuc(int &n) {
    cout << "Nhap so phan tu: ";
    cin >> n;
    double *a = new double[n];
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    return a;
}

double* saoChepDaySoThuc(double *A, int n) {
    double *B = new double[n];
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
    delete[] A;
    return B;
}

/* ================== MENU ================== */
void menuChuoi() {
    while (true) {
        cout << "\n===== MENU CHUOI =====";
        cout << "\n1) Kiem tra doi xung";
        cout << "\n2) Do dai";
        cout << "\n3) Dao nguoc";
        cout << "\n4) Tim vi tri ky tu dau";
        cout << "\n5) Tim vi tri ky tu cuoi";
        cout << "\n6) Tim chuoi con";
        cout << "\n7) Thay the ky tu";
        cout << "\n8) Dem ky tu";
        cout << "\n9) Xuat ky tu in hoa";
        cout << "\n10) Xen ke hoa-thuong";
        cout << "\n11) Ky tu xuat hien nhieu nhat";
        cout << "\n12) Xoa tu";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        string s;
        cout << "Nhap chuoi: ";
        cin >> ws;
        getline(cin, s);
        switch (c) {
            case 1: {
                cout << (isPalindrome(s) ? "Doi xung" : "Khong doi xung") << "\n";
                break;
            }
            case 2: {
                cout << "Do dai= " << stringLength(s) << "\n";
                break;
            }
            case 3: {
                cout << reverseString(s) << "\n";
                break;
            }
            case 4: {
                char ch;
                cout << "Nhap ky tu: ";
                cin >> ch;
                cout << firstIndexOf(s, ch) << "\n";
                break;
            }
            case 5: {
                char ch;
                cout << "Nhap ky tu: ";
                cin >> ch;
                cout << lastIndexOf(s, ch) << "\n";
                break;
            }
            case 6: {
                string sub;
                cout << "Nhap chuoi con: ";
                cin >> sub;
                cout << findSubstring(s, sub) << "\n";
                break;
            }
            case 7: {
                char a, b;
                cout << "Ky tu cu: ";
                cin >> a;
                cout << "Ky tu moi: ";
                cin >> b;
                cout << replaceChar(s, a, b) << "\n";
                break;
            }
            case 8: {
                char ch;
                cout << "Nhap ky tu: ";
                cin >> ch;
                cout << countChar(s, ch) << "\n";
                break;
            }
            case 9: {
                cout << extractUppercase(s) << "\n";
                break;
            }
            case 10: {
                cout << toggleAlternateCase(s) << "\n";
                break;
            }
            case 11: {
                cout << mostFrequentChar(s) << "\n";
                break;
            }
            case 12: {
                string w;
                cout << "Nhap tu: ";
                cin >> w;
                cout << removeWord(s, w) << "\n";
                break;
            }
            default: cout << "Khong co lua chon nay. Vui long nhap lai \n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuQuanLyTinh() {
    vector<Tinh> ds;
    while (true) {
        cout << "\n===== QUAN LY TINH =====";
        cout << "\n1) Nhap danh sach";
        cout << "\n2) Xuat danh sach";
        cout << "\n3) Xuat tinh dan so >1 trieu";
        cout << "\n4) Tinh dien tich lon nhat";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        switch (c) {
            case 1: nhapTinh(ds); break;
            case 2: xuatTinh(ds); break;
            case 3: xuatDanSoLonHon1Trieu(ds); break;
            case 4: cout << "Tinh max DT: " << maxDienTich(ds).ten << "\n"; break;
            default: cout << "Khong co lua chon nay.\n"; break;
        }

        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuQuanLySinhVien() {
    vector<SinhVien> ds;
    while (true) {
        cout << "\n===== QUAN LY SINH VIEN =====";
        cout << "\n1) Nhap danh sach moi";
        cout << "\n2) Tim sinh vien theo ma";
        cout << "\n3) Tim sinh vien theo ten";
        cout << "\n4) Them sinh vien";
        cout << "\n5) Xoa sinh vien";
        cout << "\n6) Xuat danh sach";
        cout << "\n7) Xuat sinh vien no diem";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        string key;
        switch (c) {
            case 1: nhapDanhSachSinhVien(ds); break;
            case 2: cout << "Nhap ma: "; cin >> key; timSinhVienTheoMa(ds, key); break;
            case 3: cout << "Nhap ten: "; cin >> ws; getline(cin, key); timSinhVienTheoTen(ds, key); break;
            case 4: themSinhVien(ds); break;
            case 5: cout << "Nhap ma: "; cin >> key; xoaSinhVien(ds, key); break;
            case 6: xuatDanhSachSinhVien(ds); break;
            case 7: xuatSinhVienNoDiem(ds); break;
            default: cout << "Khong co lua chon nay.\n"; break;
        }

        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuPhanSo() {
    while (true) {
        cout << "\n===== PHAN SO =====";
        cout << "\n1) Nhap va xuat phan so";
        cout << "\n2) Rut gon phan so";
        cout << "\n3) Tong hai phan so";
        cout << "\n4) Hieu hai phan so";
        cout << "\n5) Tich hai phan so";
        cout << "\n6) Thuong hai phan so";
        cout << "\n7) Kiem tra toi gian";
        cout << "\n8) Quy dong hai phan so";
        cout << "\n9) Kiem tra am/duong";
        cout << "\n10) So sanh hai phan so";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        PhanSo ps1, ps2;
        switch (c) {
            case 1: {
                nhapPhanSo(ps1);
                cout << "Phan so: ";
                xuatPhanSo(ps1);
                break;
            }
            case 2: {
                nhapPhanSo(ps1);
                rutGon(ps1);
                cout << "Rut gon: ";
                xuatPhanSo(ps1);
                break;
            }
            case 3: case 4: case 5: case 6: case 8: case 10: {
                cout << "Nhap phan so 1:\n";
                nhapPhanSo(ps1);
                cout << "Nhap phan so 2:\n";
                nhapPhanSo(ps2);
                if (c == 3) {
                    PhanSo res = tongPhanSo(ps1, ps2);
                    cout << "Tong: ";
                    xuatPhanSo(res);
                } else if (c == 4) {
                    PhanSo res = hieuPhanSo(ps1, ps2);
                    cout << "Hieu: ";
                    xuatPhanSo(res);
                } else if (c == 5) {
                    PhanSo res = tichPhanSo(ps1, ps2);
                    cout << "Tich: ";
                    xuatPhanSo(res);
                } else if (c == 6) {
                    PhanSo res = thuongPhanSo(ps1, ps2);
                    cout << "Thuong: ";
                    xuatPhanSo(res);
                } else if (c == 8) {
                    quyDong(ps1, ps2);
                    cout << "Sau quy dong:\n";
                    xuatPhanSo(ps1);
                    xuatPhanSo(ps2);
                } else if (c == 10) {
                    int cmp = soSanhPhanSo(ps1, ps2);
                    if (cmp == 0) cout << "Bang nhau\n";
                    else if (cmp > 0) cout << "PS1 > PS2\n";
                    else cout << "PS1 < PS2\n";
                }
                break;
            }
            case 7: {
                nhapPhanSo(ps1);
                cout << (laToiGian(ps1) ? "Toi gian" : "Chua toi gian") << "\n";
                break;
            }
            case 9: {
                nhapPhanSo(ps1);
                int sign = kiemTraAmDuong(ps1);
                if (sign == 0) cout << "Bang 0\n";
                else if (sign > 0) cout << "Duong\n";
                else cout << "Am\n";
                break;
            }
            default: cout << "Khong co lua chon nay.\n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuNgay() {
    while (true) {
        cout << "\n===== NGAY THANG =====";
        cout << "\n1) Nhap va xuat ngay";
        cout << "\n2) So ngay trong nam va kiem tra nhuan";
        cout << "\n3) Ngay sau";
        cout << "\n4) Ngay truoc";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        Ngay ng;
        switch (c) {
            case 1: {
                nhapNgay(ng);
                cout << "Ngay: ";
                xuatNgay(ng);
                break;
            }
            case 2: {
                cout << "Nhap nam: ";
                cin >> ng.nam;
                cout << "So ngay trong nam: " << soNgayTrongNam(ng.nam) << "\n";
                cout << (laNamNhuan(ng.nam) ? "Nam nhuan" : "Khong nhuan") << "\n";
                break;
            }
            case 3: {
                nhapNgay(ng);
                Ngay ns = ngaySau(ng);
                cout << "Ngay sau: ";
                xuatNgay(ns);
                break;
            }
            case 4: {
                nhapNgay(ng);
                Ngay nt = ngayTruoc(ng);
                cout << "Ngay truoc: ";
                xuatNgay(nt);
                break;
            }
            default: cout << "Khong co lua chon nay.\n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuStruct() {
    while (true) {
        cout << "\n===== MENU STRUCT =====";
        cout << "\n1) Quan ly danh sach tinh";
        cout << "\n2) Quan ly sinh vien";
        cout << "\n3) Phan so";
        cout << "\n4) Ngay thang";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        if (c == 1) menuQuanLyTinh();
        else if (c == 2) menuQuanLySinhVien();
        else if (c == 3) menuPhanSo();
        else if (c == 4) menuNgay();
        else cout << "Khong co lua chon nay.\n";

        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

void menuConTro() {
    while (true) {
        cout << "\n===== MENU CON TRO =====";
        cout << "\n1) Mang voi con tro (gan 100 va nhap xuat)";
        cout << "\n2) Chuyen chuoi thanh in hoa bang con tro";
        cout << "\n3) Cap phat va sao chep day so thuc";
        cout << "\n0) Quay lai\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        switch (c) {
            case 1: demoMangConTro(); break;
            case 2: upperChuoiConTro(); break;
            case 3: {
                int n;
                double *A = nhapDaySoThuc(n);
                double *B = saoChepDaySoThuc(A, n);
                cout << "Day B sau sao chep: ";
                for (int i = 0; i < n; i++) cout << B[i] << " ";
                cout << "\n";
                delete[] B;
                break;
            }
            default: cout << "Khong co lua chon nay.\n"; break;
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        cin.ignore();
        cin.get();
    }
}

/* ================== MAIN ================== */
int main(){
    while (true) {
        cout << "\n===== MENU CHINH =====";
        cout << "\n1) Chuoi ky tu";
        cout << "\n2) Struct";
        cout << "\n3) Con tro";
        cout << "\n0) Thoat\nChon: ";
        int c;
        cin >> c;
        if (c == 0) break;
        if (c == 1) menuChuoi();
        else if (c == 2) menuStruct();
        else if (c == 3) menuConTro();
        else cout << "Khong co lua chon nay. Vui long chon lai \n";
    }
    return 0;
}