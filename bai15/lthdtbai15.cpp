
// Bài 15(lthdtbai15.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c có thể nhập vào
// từ bàn phím hoặc từ tệp văn bản.

#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>

using namespace std;

class TamGiac 
{
    private:
        float a, b, c;
    public:
        void nhapBanPhim();
        void nhapTep(const char *tep);
        float tinhDT();
        float tinhCV();
};

int main()
{
    TamGiac tamgiac;
    char chon;

    cout<<"Ban muon nhap tu ban phim hay tep?"<<endl;
    cout<<"Ban phim(b) - Tep(t)"<<endl;
    cin>>chon;

    if( chon == 't') 
    {
        char tenTep[20];
        cout<<"Nhap ten tep"<<endl;
        cin>>tenTep;
        tamgiac.nhapTep(tenTep);
    } 

    if( chon == 'b') 
    {
        tamgiac.nhapBanPhim();
    } 

    cout<<"CV tam giac la: "<<tamgiac.tinhCV()<<endl;
    cout<<"DT tam giac la: "<<tamgiac.tinhDT()<<endl;

    return 0;
}

void TamGiac::nhapBanPhim()
{   
    cout<<"Nhap lan luot 3 canh cua tam giac"<<endl;
    while(true) {
        cin>>a>>b>>c;
        if(a+b>c && a+c>b && b+c>a) break;
        else cout<<"Ba canh vua nhap khong the tao nen tam giac, nhap lai!"<<endl;
    }
};

void TamGiac::nhapTep(const char *tep)
{
    fstream fin(tep);
    fin>>a>>b>>c;
    if(a+b<=c || a+c<=b || b+c<=a) {
        cout<<"Ba canh khong the tao nen tam giac"<<endl;
    }
};

float TamGiac::tinhDT()
{
    float p = tinhCV()/2;
    float o = (p-a)*(p-b)*(p-c);
    return sqrt(p*o);
};

float TamGiac::tinhCV()
{
    return a+b+c;
};
