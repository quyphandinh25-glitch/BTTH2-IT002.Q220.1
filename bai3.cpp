#include <bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    int iThuc, iAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc a);
    SoPhuc Hieu(SoPhuc a);
    SoPhuc Tich(SoPhuc a);
    SoPhuc Thuong(SoPhuc a);
};



void SoPhuc::Nhap() {
    cin >> iThuc >> iAo;
}

void SoPhuc::Xuat() {
    if(iAo >= 0)
        cout << iThuc << "+" << iAo << "i";
    else
        cout << iThuc << iAo << "i";
}

SoPhuc SoPhuc::Tong(SoPhuc a) {
    SoPhuc c;
    c.iThuc = iThuc + a.iThuc;
    c.iAo = iAo + a.iAo;
    return c;
}

SoPhuc SoPhuc::Hieu(SoPhuc a) {
    SoPhuc c;
    c.iThuc = iThuc - a.iThuc;
    c.iAo = iAo - a.iAo;
    return c;
}

SoPhuc SoPhuc::Tich(SoPhuc a) {
    SoPhuc c;
    c.iThuc = iThuc * a.iThuc - iAo * a.iAo;
    c.iAo = iThuc * a.iAo + iAo * a.iThuc;
    return c;
}

SoPhuc SoPhuc::Thuong(SoPhuc a) {
    SoPhuc c;
    int mau = a.iThuc * a.iThuc + a.iAo * a.iAo;

    c.iThuc = (iThuc * a.iThuc + iAo * a.iAo) / mau;
    c.iAo = (iAo * a.iThuc - iThuc * a.iAo) / mau;

    return c;
}


int main() {
    SoPhuc a, b, c;

    a.Nhap();
    b.Nhap();

    c = a.Tong(b);
    c.Xuat(); cout << endl;

    c = a.Hieu(b);
    c.Xuat(); cout << endl;

    c = a.Tich(b);
    c.Xuat(); cout << endl;

    c = a.Thuong(b);
    c.Xuat(); cout << endl;

    return 0;
}
