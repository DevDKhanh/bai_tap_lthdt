/*
Mot nhan su co ho ten. Trong 1 cong ty, nhan vien la 1 loai nhan su nhung co them he so luong,
can bo quan ly la mot loai nhan vien nhung co them chuc vu. Nhap thong tin cua n nhan su trong do co ca 
nhan vien va can bo quan ly. Dua ra ma hinh thong tin cua cac nhan vien va can bo quan ly da nhap. 
Yeu cau cai dat da hinh dong cho ham nhap va dua thong tin ra MH.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

//Class
class NhanSu
{
    private:
        char hoTen[55];
    public:
        virtual void nhap();
        virtual void hien();
};

class NhanVien:public NhanSu
{
    private:
        int heSoLuong;
    public:
        void nhap();
        void hien();
};

class QuanLy:public NhanVien
{
    private:
        char chucVu[55];
    public:
        void nhap();
        void hien();
};

//===Chuong trinh chinh===
int main()
{
    NhanSu *ds[100];
    int i = 0;
    char luaChon;
    char tiepTuc;

    do 
    {
        cout<<"[1].Them nhan vien---[2].Them quan ly"<<endl;
        cin>>luaChon;

        cout<<"Nhan su thu: "<<i+1<<endl;
        if(luaChon=='1')
            ds[i] = new NhanVien;
        else 
            ds[i] = new QuanLy;

        ds[i++]->nhap();
        cout<<"\nTiep tuc nhap?(c/k)"<<endl;
        cin>>tiepTuc;
    }
    while(tiepTuc=='c'||tiepTuc=='C');

    cout<<"Danh sach nhan su: "<<endl;
    cout<<i<<endl;
    for(int j=0;j<i;j++)
    {
        cout<<"STT: "<<j+1<<endl;
        ds[j]->hien();
        cout<<"-------\n\n";
    }

    cout << endl;
    return 0;
}

//===Dinh nghia ham===
void NhanSu::nhap()
{
    cout<<"Nhap ho va ten"<<endl;
    cin>>hoTen;
}

void NhanSu::hien()
{
    cout<<"Ho va ten: "<<hoTen<<endl;
}

void NhanVien::nhap()
{
    NhanSu::nhap();
    cout<<"Nhap he so luong:"<<endl;
    cin>>heSoLuong;
}

void NhanVien::hien()
{
    NhanSu::hien();
    cout<<"He so luong: "<<heSoLuong<<endl;
}

void QuanLy::nhap()
{
    NhanVien::nhap();
    cout<<"Nhap chuc vu:"<<endl;
    cin>>chucVu;
}

void QuanLy::hien()
{
    NhanVien::hien();
    cout<<"Chuc vu: "<<chucVu<<endl;
}
