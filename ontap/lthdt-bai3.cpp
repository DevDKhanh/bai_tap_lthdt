//Ho ten: Tran Duy Khanh
//MSV: 637737
//Lop: K63ATTT

#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Class
class Diem
{
    private:
        float x,y;
    public:
        Diem();
        Diem(float x, float y);
        friend istream& operator>>(istream &cin,Diem &d);
        friend ostream& operator<<(ostream &cout,Diem &d);
        float operator+(Diem &d2);
};

class TamGiac
{
    private:
        Diem A,B,C;
    public:
        void nhap();
        float tinhCV();
};

//===Chuong trinh chinh===
int main()
{
    TamGiac tamgiac;

    tamgiac.nhap();

    cout<<"Chu vi tam giac la: "<<tamgiac.tinhCV();

    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
Diem::Diem():x(0),y(0)
{

}

Diem::Diem(float x, float y):x(x),y(y)
{

}

istream& operator>>(istream &cin,Diem &d)
{
    cin>>d.x>>d.y;
    return cin;
}

ostream& operator<<(ostream &cout,Diem &d)
{
    cout<<"("<<d.x<<","<<d.y<<")"<<endl;
    return cout;
}

float Diem::operator+(Diem &d2)
{
    return sqrt((d2.x-x)*(d2.x-x)+(d2.y-y)*(d2.y-y));
}

void TamGiac::nhap()
{
    cout<<"\nNhap diem A:";cin>>A;
    cout<<"\nNhap diem B:";cin>>B;
    cout<<"\nNhap diem C:";cin>>C;
}

float TamGiac::tinhCV()
{
    float a,b,c;

    a=A+B;
    b=B+C;
    c=A+C;

    return a+b+c;
};
