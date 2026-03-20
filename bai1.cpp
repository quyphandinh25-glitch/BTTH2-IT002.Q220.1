#include <bits/stdc++.h>
using namespace std;
class NextDay{
private:
    int iNgay,iThang,iNam;
public:
    void Nhap()
    {
        cin>>iNgay>>iThang>>iNam;
    }
    void Xuat()
    {
        cout<<iNgay<<"/"<<iThang<<"/"<<iNam;
    }
    void NgayThangNamTiepTheo();
};
void NextDay::NgayThangNamTiepTheo()
{
    int ngayTrongThang;
    if(iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 ||
       iThang == 8 || iThang == 10 || iThang == 12)
        ngayTrongThang = 31;
    else if(iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)
        ngayTrongThang = 30;
    else
    {
        if((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0))
            ngayTrongThang = 29;
        else
            ngayTrongThang = 28;
    }
    iNgay++;
    if(iNgay > ngayTrongThang)
    {
        iNgay = 1;
        iThang++;

        if(iThang > 12)
        {
            iThang = 1;
            iNam++;
        }
    }
}
int main(){
    NextDay day;
    day.Nhap();
    day.NgayThangNamTiepTheo();
    day.Xuat();
}
