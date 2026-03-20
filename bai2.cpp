#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
private:
    int iTu,iMau;
public:
    void Nhap()
    {
        cin>>iTu>>iMau;
    }
    void Xuat()
    {
        if(iMau==0) cout<<"Khong xac dinh";
        else if(iTu==0) cout<<0;
        else if(iMau<0)
        {
            iTu=-iTu;
            iMau=-iMau;
            cout<<iTu<<"/"<<iMau;
        }
        else if(iMau==1) cout<<iTu;
        else cout<<iTu<<"/"<<iMau;
    }
    PhanSo RutGon();
    PhanSo Tong (PhanSo a);
    PhanSo Hieu (PhanSo a);
    PhanSo Tich (PhanSo a);
    PhanSo Thuong (PhanSo a);
};
PhanSo PhanSo::RutGon()
{
    PhanSo c;
    int u=__gcd(iTu,iMau);
    c.iTu=iTu/u;
    c.iMau=iMau/u;
    return c;
}
PhanSo PhanSo::Tong(PhanSo a)
{
    PhanSo c;
    c.iTu=iTu*a.iMau+iMau*a.iTu;
    c.iMau=iMau*a.iMau;
    return c.RutGon();
}
PhanSo PhanSo::Hieu(PhanSo a)
{
    PhanSo c;
    c.iTu=iTu*a.iMau-iMau*a.iTu;
    c.iMau=iMau*a.iMau;
    return c.RutGon();
}
PhanSo PhanSo::Tich(PhanSo a)
{
    PhanSo c;
    c.iTu=iTu*a.iTu;
    c.iMau=iMau*a.iMau;
    return c.RutGon();
}
PhanSo PhanSo::Thuong(PhanSo a)
{
    PhanSo c;
    c.iTu=iTu*a.iMau;
    c.iMau=iMau*a.iTu;
    return c.RutGon();
}

int main(){
        PhanSo a,b;
        a.Nhap();
        b.Nhap();
        PhanSo c=a.Tong(b);
        c.Xuat();
        cout<<endl;
        c=a.Hieu(b);
        c.Xuat();
        cout<<endl;
        c=a.Tich(b);
        c.Xuat();
        cout<<endl;
        c=a.Thuong(b);
        c.Xuat();
        return 0;
}
