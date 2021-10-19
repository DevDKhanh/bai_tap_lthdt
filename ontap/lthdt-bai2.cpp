/*
Thoi gian co gio, phut. Gio co gia tri tu 0-23, phut co gia tri tu 0-59. Nhap vao thoi gian bat dau va so
phut lam bai thi cua 1 ca thi. 
Yeu cau su dung toan tu >> , << de nhap vao va dua ra thoi gian o danh h:mm, 
su dung toan tu + de thoi gian voi so phut, thoi gian ban dau
duoc khoi tao gia tri tu dong voi gio phut bang 0
*/

#include <iostream>
#include <stdio.h>
#include<math.h>

using namespace std;
// class ThoiGian
class ThoiGian
{
private:
    int gio, phut;
public:
    ThoiGian();
    ThoiGian(int gio, int phut);
    friend istream& operator>>(istream &cin, ThoiGian &tg);
    friend ostream& operator<<(ostream &cout, ThoiGian &tg);
    ThoiGian operator+(int phut);
};

//===Chuong trinh chinh===
int main()
{
    ThoiGian thoigian;
    int phutLamBai;

    cout<<"Nhap phut lam bai: "<<endl;
    cin>>phutLamBai;

    cout<<"Nhap lan luot gio va phut bat dau:  "<<endl;
    cin>>thoigian;

    cout<<"Thoi gian bat dau: "<<thoigian;
    
    //Tinh gio ket thuc
    thoigian+phutLamBai;

    cout<<"Thoi gian ket thuc la: "<< thoigian;

    cout << endl;
    return 0;
}

//===Dinh nghia ham===
ThoiGian::ThoiGian():gio(0),phut(0)
{   
    
}

ThoiGian::ThoiGian(int gio, int phut):gio(gio),phut(phut)
{   
    
}

istream& operator>>(istream &cin, ThoiGian &tg)
{
    while(true)
    {   
        cin>>tg.gio>>tg.phut;

        if(tg.gio<0||tg.gio>23||tg.phut<0||tg.phut>59) 
        {
             cout<<"Vui long kiem tra lai gio-phut da nhap\nNhap lai:\n";
        } 
        else
            return cin;
    }
}

ostream& operator<<(ostream &cout, ThoiGian &tg)
{   
    char s;
    cout<<tg.gio<<":"<<tg.phut<<endl;
    return cout;
}

ThoiGian ThoiGian::operator+(int phutLamBai)
{
    ThoiGian fake;
    if(phut+phutLamBai>59) {
        int heSo = ceil((phutLamBai+phut)/60);
        gio+=heSo;
        phut=phut+phutLamBai-(60*heSo);
    } 
    else 
    {
        phut=phut+phutLamBai;
    }

    return fake;
}