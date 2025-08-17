/**
 * @author Nguyễn Đình Đức - 25730017
 */

#include <bits/stdc++.h>
using namespace std;

using Matrix = vector<vector<int>>;

/* ================= KHAI BÁO HÀM ================= */
/**
 * Nhập ma trận m x n từ bàn phím.
 * @param m số dòng.
 * @param n số cột.
 * @return ma trận nhập vào.
 * @author Nguyễn Đình Đức - 25730017
 */
Matrix inputMatrix(int m, int n);

/**
 * In ma trận ra màn hình.
 * @param a ma trận.
 * @author Nguyễn Đình Đức - 25730017
 */
void printMatrix(const Matrix &a);

/**
 * Tìm giá trị min hoặc max trong ma trận.
 * @param a ma trận.
 * @param findMin true nếu tìm min, false nếu tìm max.
 * @return giá trị min hoặc max.
 * @author Nguyễn Đình Đức - 25730017
 */
pair<int,int> findMinMax(const Matrix &a, bool findMin);

/**
 * Sắp xếp ma trận theo dạng zigzag.
 * @param a ma trận (tham chiếu).
 * @author Nguyễn Đình Đức - 25730017
 */
void sortZigzag(Matrix &a);

/**
 * Sắp xếp ma trận theo dạng xoắn ốc (spiral).
 * @param a ma trận (tham chiếu).
 * @author Nguyễn Đình Đức - 25730017
 */
void sortSpiral(Matrix &a);

/**
 * Thêm dòng vào cuối ma trận.
 * @param a ma trận (tham chiếu).
 * @param v dòng cần thêm.
 * @author Nguyễn Đình Đức - 25730017
 */
void addRowEnd(Matrix &a, vector<int> v);

/**
 * Thêm dòng vào vị trí k.
 * @param a ma trận (tham chiếu).
 * @param v dòng cần thêm.
 * @param k vị trí thêm.
 * @author Nguyễn Đình Đức - 25730017
 */
void addRowAt(Matrix &a, vector<int> v, int k);

/**
 * Xóa dòng thứ k.
 * @param a ma trận (tham chiếu).
 * @param k vị trí cần xóa.
 * @author Nguyễn Đình Đức - 25730017
 */
void removeRow(Matrix &a, int k);

/**
 * Tìm các phần tử saddle point.
 * @param a ma trận.
 * @return vector chứa các vị trí (i,j).
 * @author Nguyễn Đình Đức - 25730017
 */
vector<pair<int,int>> findSaddlePoints(const Matrix &a);

/**
 * Tính tổng hai ma trận cùng kích thước.
 * @param a ma trận 1.
 * @param b ma trận 2.
 * @return ma trận kết quả.
 * @author Nguyễn Đình Đức - 25730017
 */
Matrix sumMatrix(const Matrix &a, const Matrix &b);

/**
 * Tính tích hai ma trận.
 * @param a ma trận 1.
 * @param b ma trận 2.
 * @return ma trận kết quả.
 * @author Nguyễn Đình Đức - 25730017
 */
Matrix mulMatrix(const Matrix &a, const Matrix &b);

/**
 * Tính tổng theo từng dòng và cột.
 * @param a ma trận.
 * @author Nguyễn Đình Đức - 25730017
 */
void sumByRowCol(const Matrix &a);

/**
 * Đếm số dương trong tam giác trên.
 * @param a ma trận.
 * @return số lượng.
 * @author Nguyễn Đình Đức - 25730017
 */
int countPositivesUpperTri(const Matrix &a);

/**
 * Tính trung bình một cột.
 * @param a ma trận số thực.
 * @param col cột.
 * @return giá trị trung bình.
 * @author Nguyễn Đình Đức - 25730017
 */
double avgCol(const vector<vector<double>> &a, int col);

/**
 * Tính tổng biên của ma trận.
 * @param a ma trận.
 * @return tổng biên.
 * @author Nguyễn Đình Đức - 25730017
 */
int sumBorder(const Matrix &a);

/* ================= ĐỊNH NGHĨA HÀM ================= */
Matrix inputMatrix(int m, int n) {
    Matrix a(m, vector<int>(n));
    cout << "Nhap ma tran " << m << "x" << n << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    return a;
}

void printMatrix(const Matrix &a) {
    cout << "Ma tran:\n";
    for (auto &row : a) {
        for (int v : row) {
            cout << setw(5) << v;
        }
        cout << "\n";
    }
}

pair<int,int> findMinMax(const Matrix &a, bool findMin) {
    int val = a[0][0];
    for (auto &row: a) {
        for (int v: row) {
            val = findMin ? min(val,v) : max(val,v);
        }
    }
    return {val, findMin};
}

void sortZigzag(Matrix &a) {
    vector<int> flat;
    for (auto &row: a) {
        for (int v: row) {
            flat.push_back(v);
        }
    }
    sort(flat.begin(), flat.end());
    int idx=0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            for (int j=0; j<a[i].size(); j++) {
                a[i][j]=flat[idx++];
            }
        } else {
            for (int j = a[i].size() - 1; j >= 0; j--) {
                a[i][j] = flat[idx++];
            }
        }
    }
}

void sortSpiral(Matrix &a) {
    vector<int> flat;
    for (auto &row : a) {
        for (int v : row) {
            flat.push_back(v);
        }
    }
    sort(flat.begin(), flat.end());

    int m = a.size(), n = a[0].size();
    int top = 0, bottom = m - 1, left = 0, right = n - 1, idx = 0;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right && idx < flat.size(); j++) {
            a[top][j] = flat[idx++];
        }
        top++;

        for (int i = top; i <= bottom && idx < flat.size(); i++) {
            a[i][right] = flat[idx++];
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left && idx < flat.size(); j--) {
                a[bottom][j] = flat[idx++];
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top && idx < flat.size(); i--) {
                a[i][left] = flat[idx++];
            }
            left++;
        }
    }
}

void addRowEnd(Matrix &a, vector<int> v) {
    a.push_back(v);
}
void addRowAt(Matrix &a, vector<int> v, int k) {
    a.insert(a.begin()+k, v);
}
void removeRow(Matrix &a, int k) {
    if (k>=0 && k<a.size()) {
        a.erase(a.begin()+k);
    }
}

vector<pair<int,int>> findSaddlePoints(const Matrix &a) {
    vector<pair<int,int>> res; int m = a.size(), n = a[0].size();
    for (int i = 0; i < m; i++) {
        int rowMax =* max_element(a[i].begin(),a[i].end());
        for (int j = 0; j < n; j++) {
            if (a[i][j] == rowMax) {
                int colMin=a[i][j];
                for (int k=0;k<m;k++) {
                    colMin=min(colMin,a[k][j]);
                }
                if (a[i][j]==colMin) {
                    res.emplace_back(i,j);
                }
            }
        }
    }
    return res;
}

Matrix sumMatrix(const Matrix &a, const Matrix &b) {
    int m = a.size(), n = a[0].size();
    Matrix c(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}

Matrix mulMatrix(const Matrix &a, const Matrix &b) {
    int m = a.size(), n = b[0].size(), p = a[0].size();
    Matrix c(m, vector<int>(n,0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

void sumByRowCol(const Matrix &a) {
    int m=a.size(), n=a[0].size();
    for (int i=0;i<m;i++) {
        cout<<"Tong dong "<<i<<":"<<accumulate(a[i].begin(),a[i].end(),0)<<"\n";
    }
    for (int j=0;j<n;j++) {
        int s=0;
        for (int i=0;i<m;i++) {
            s+=a[i][j];
            cout<<"Tong cot "<<j<<":"<<s<<"\n";
        }
    }
}

int countPositivesUpperTri(const Matrix &a) {
    int m = a.size(), n = a[0].size(), cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i; j < n; j++) {
            if (a[i][j] > 0) {
                cnt++;
            }
        }
    }
    return cnt;
}

double avgCol(const vector<vector<double>> &a, int col) {
    double sum = 0; int m = a.size();
    for (int i = 0; i < m; i++) {
        sum += a[i][col];
    }
    return sum/m;
}

int sumBorder(const Matrix &a) {
    int m = a.size(), n = a[0].size(), s = 0;
    for (int j = 0; j < n; j++) {
        s += a[0][j] + a[m - 1][j];
    }
    for (int i = 1; i < m - 1; i++) {
        s += a[i][0] + a[i][n - 1];
    }
    return s;
}

/* ================= MENU ================= */
void runMenu() {
    Matrix A;
    int m,n;
    bool hasMatrix = false;

    while (true) {
        cout<<"\n===== MENU MANG 2 CHIEU =====";
        cout<<"\n1) Nhap ma tran";
        cout<<"\n2) Xuat ma tran";
        cout<<"\n3) Tim min max";
        cout<<"\n4) Sap xep zigzag";
        cout<<"\n5) Sap xep xoan oc";
        cout<<"\n6) Them dong cuoi";
        cout<<"\n7) Them dong tai k";
        cout<<"\n8) Xoa dong k";
        cout<<"\n9) Tim saddle point";
        cout<<"\n10) Tong 2 ma tran";
        cout<<"\n11) Tich 2 ma tran";
        cout<<"\n12) Tong tung dong va cot";
        cout<<"\n13) Dem so duong tam giac tren";
        cout<<"\n14) Trung binh 1 cot (so thuc)";
        cout<<"\n15) Tong bien";
        cout<<"\n0) Thoat";

        cout<<"\nChon: ";
        int c;
        cin >> c;

        if(c == 0) {
            exit(0);
        }

        switch(c){
            case 1:
                cout << "Nhap m n:";
                cin >> m >> n;
                A = inputMatrix(m,n);
                hasMatrix = true;
                break;
            case 2:
                if(hasMatrix) {
                    printMatrix(A);
                } else {
                    cout<<"Chua co ma tran\n";
                }
                break;
            case 3:
                if(hasMatrix) {
                    cout << "Min= " << findMinMax(A,true)
                    .first<<" Max=" << findMinMax(A,false)
                    .first<<"\n";
                }
                break;
            case 4:
                if(hasMatrix) {
                    sortZigzag(A);
                    printMatrix(A);
                }
                break;
            case 5:
                if(hasMatrix) {
                    sortSpiral(A);
                    printMatrix(A);
                }
                break;
            case 6:
                if(hasMatrix) {
                    vector<int> v(n);
                    cout<<"Nhap dong moi ("<<n<<" so nguyen): ";
                    for(int &x:v) {
                        cin >> x;
                    }
                    addRowEnd(A,v);
                }
                break;
            case 7:
                if(hasMatrix) {
                    int k;
                    cout << "Nhap vi tri k: ";
                    cin >> k;
                    vector<int> v(n);
                    for(int &x : v) {
                        cin >> x;
                        addRowAt(A,v, k);
                    }
                } break;
            case 8:
                if(hasMatrix) {
                    int k;
                    cout << "Nhap vi tri k can xoa: ";
                    cin >> k;
                    removeRow(A, k);
                }
                break;
            case 9:
                if(hasMatrix) {
                    auto pts = findSaddlePoints(A);
                    for(auto [i,j] : pts) {
                        cout << "(" << i << ", " << j << ") ";
                        cout << "\n";
                    }
                }
                break;
            case 10:
                if(hasMatrix) {
                    cout << "Nhap ma tran B cung kich thuoc:";
                    Matrix B = inputMatrix(m, n);
                    printMatrix(sumMatrix(A, B));
                }
                break;
            case 11:
                if(hasMatrix) {
                    cout << "Nhap ma tran B (" << n << "x" << n << "):";
                    Matrix B = inputMatrix(n, n);
                    printMatrix(mulMatrix(A, B));
                }
                break;
            case 12:
                if(hasMatrix) {
                    sumByRowCol(A);
                }
                break;
            case 13:
                if(hasMatrix) {
                    cout << countPositivesUpperTri(A) << "\n";
                }
                break;
            case 14:
                {
                    int col;
                    cout << "Nhap chi so cot (0.." << n - 1 << "): ";
                    cin >> col;
                    vector B(m,vector<double>(n));
                    for(int i = 0; i < m; i++) {
                        for(int j = 0; j < n; j++) {
                            B[i][j] = A[i][j];
                            cout << avgCol(B, col) << "\n";
                        }
                    }
                }
                break;
            case 15:
                if(hasMatrix) {
                    cout << "Tong bien = ";
                    cout << sumBorder(A) << "\n";
                    break;
                }
            default: cout<<"Lua chon khong hop le\n";
        }
        cout << "\nNhan Enter de tiep tuc... \n";
        // Bo thua ky tu
        cin.ignore();
        cin.get();
    }
}

/* ================= MAIN ================= */
int main(){
    runMenu();
    return 0;
}
