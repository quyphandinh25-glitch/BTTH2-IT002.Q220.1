#include <bits/stdc++.h>
using namespace std;

class ThoiGian {
private:
    int iGio, iPhut, iGiay;

public:
    void Nhap();
    void Xuat();
    void TinhCongThemMotGiay();
};



void ThoiGian::Nhap() {
    cin >> iGio >> iPhut >> iGiay;
}

void ThoiGian::Xuat() {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

void ThoiGian::TinhCongThemMotGiay() {
    iGiay++;

    if(iGiay >= 60) {
        iGiay = 0;
        iPhut++;

        if(iPhut >= 60) {
            iPhut = 0;
            iGio++;

            if(iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
int main() {
    ThoiGian t;

    t.Nhap();
    t.TinhCongThemMotGiay();
    t.Xuat();

    return 0;
}
