
// Bài 15(lthdtbai15.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c có thể nhập vào
// từ bàn phím hoặc từ tệp văn bản.

#include <iostream>
#include <math.h>

using namespace std;

//Khoi tao class Tamgiac
class Tamgiac
{
    private:
        float a, b, c;
    public:
        //Nhap 3 canh a, b, c
        void nhap()
        {
            cout << "Nhap lan luot 3 canh cua tam giac:" << endl;
            for (int i = 1; i <= 3; i++)
            {
                cout << "Canh thu " << i << ": ";
                if (i==1) cin >> a;
                if (i==2) cin >> b;
                if (i==3) cin >> c;
            }
        }

        //Tinh chu vi
        void chuVi()
        {
            cout << "Chu vi cua tam giac la: " << a+b+c << endl;
        }

        //Dien tich tam giac
        void dienTich()
        {
            float p = (a+b+c)/2;
            float o = (p-a)*(p-b)*(p-c);
            cout << "Dien tich cua tam giac la: " << sqrt(p*o) << endl;

        }
};

int main()
{
    Tamgiac tamgiac;

    tamgiac.nhap();
    tamgiac.chuVi();
    tamgiac.dienTich();

    cout << endl;

    return 0;
}