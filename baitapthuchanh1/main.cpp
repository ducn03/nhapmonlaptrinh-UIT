/******************************************************************************

Bai tap thuc hanh

*******************************************************************************/
#include <iostream>

using namespace std;

// Khai báo hàm trước main
float tinhChuVi(float R);
float tinhDienTich(float R);
float PI = 3.14;

int main()
{
    float R;
    while(true){
        cout << "Nhập bán kính R: ";
        cin >> R;
        if (R > 0) break;
        cout<< "Bán kính phải lớn hơn 0 \n";
    }

    cout << "Chu vi hình tròn: " << tinhChuVi(R);
    cout << "\nDiện tích hình tròn: " << tinhDienTich(R);

    return 0;
}

float tinhChuVi(float R){
 return 2 * PI * R;   
}
float tinhDienTich(float R){
 return PI * R * R;   
}

