/*Bài tập (lthdt-kethuaboi.cpp): Thời điểm là một loại ngày tháng và cũng là một loại thời gian nhưng có thêm địa điểm. Ngày tháng có ngày, tháng, năm. Thời gian có giờ và phút. Nhập vào một thời điểm, đưa ra thời điểm đó ở dạng Địa điểm, dd/mm/yy - h:mm. Ví dụ: Hà Nội, 30/09/19 – 14:27. Y/c viết hàm tạo không có đối số và có đối số cho tất cả các lớp.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class ThoiGian
{
    private:
        int gio,phut;
    public:
        ThoiGian();
        ThoiGian(int gio,int phut);
        void nhap();
        void hien();
};

class NgayThang
{
    private:
        int ngay,thang,nam;
    public:
        NgayThang();
        NgayThang(int ngay,int thang,int nam);
        void nhap();
        void hien();
};

class ThoiDiem: public ThoiGian,NgayThang
{
    private:
        char diaDiem[255];
    public:
        ThoiDiem();
        ThoiDiem(const char *diaDiem,int gio,int phut,int ngay,int thang,int nam);
        void nhap();
        void hien();
};

//===Chuong trinh chinh===
int main()
{
    ThoiDiem td;
    td.nhap();
    td.hien();

    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
ThoiGian::ThoiGian()
{

}

ThoiGian::ThoiGian(int gio,int phut):gio(gio),phut(phut)
{

}

void ThoiGian::nhap()
{
    cout<<"Nhap gio va phut: ";
    cin>>gio>>phut;
    cout<<endl;
}

void ThoiGian::hien()
{
    cout<<gio<<":"<<phut;
}

NgayThang::NgayThang()
{

}

NgayThang::NgayThang(int ngay,int thang,int nam):ngay(ngay),thang(thang),nam(nam)
{

}

void NgayThang::nhap()
{
    cout<<"Nhap ngay, thang, nam:";
    cin>>ngay>>thang>>nam;
    cout<<endl;
}

void NgayThang::hien()
{
    cout<<" ngay "<<ngay<<", thang "<<thang<<" nam "<<nam;
}

ThoiDiem::ThoiDiem():ThoiGian(),NgayThang()
{
   strcpy(this->diaDiem, "");
}

ThoiDiem::ThoiDiem(const char *diaDiem,int gio,int phut,int ngay,int thang,int nam)
:ThoiGian(gio,phut),NgayThang(ngay,thang,nam)
{
   strcpy(this->diaDiem, diaDiem);
}

void ThoiDiem::nhap()
{
    cout<<"Nhap dia diem: ";
    cin>>diaDiem;
    cout<<endl;

    ThoiGian::nhap();
    NgayThang::nhap();
}

void ThoiDiem::hien()
{
    cout<<diaDiem<<" ";
    ThoiGian::hien();
    NgayThang::hien();
}
