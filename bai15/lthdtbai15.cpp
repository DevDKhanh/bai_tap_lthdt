
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
        Tamgiac(float a, float b, float c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        //Tinh chu vi
        float getPerimeter()
        {
            return a+b+c;
        }

        //Dien tich tam giac
        float getArea()
        {
            float p = (a+b+c)/2;
            float o = (p-a)*(p-b)*(p-c);
            return sqrt(p*o);

        }
};

int main()
{   
    float a, b, c;
    cout << "Nhap lan luot cac canh cua tam giac" << endl;
    cin >> a >> b >> c;
    Tamgiac tamgiac(a, b, c);
    cout << "Chu vi tam giac la: " << tamgiac.getPerimeter() << endl;
    cout << "Dien tich tam giac la: " << tamgiac.getArea() << endl;
    cout << endl;

    return 0;
}