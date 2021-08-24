
// Bài 15(lthdtbai15.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c có thể nhập vào
// từ bàn phím hoặc từ tệp văn bản.

#include <iostream>
#include <math.h>

using namespace std;

//class Tamgiac
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
            float p = getPerimeter()/2;
            float o = (p-a)*(p-b)*(p-c);
            return sqrt(p*o);

        }
};

int main()
{   
    float a, b, c;

    //Nhập vào 2 canh của tam giác
    while(true) {
        cout << "Nhap lan luot cac canh cua tam giac" << endl;
        cin >> a >> b >> c;

        //Kiểm tra điều kiện 3 cạnh
        if (a+b>c && a+c>b && b+c>a)
            break;
        else
            cout << "Ba canh vua nhap khong phai ba canh cua tam giac";
    }

    //Khởi tạo class với 3 đối số được truyền vào
    Tamgiac tamgiac(a, b, c);

    //In ra màn hình chu vi và diện tích
    cout << "Chu vi tam giac la: " << tamgiac.getPerimeter() << endl;
    cout << "Dien tich tam giac la: " << tamgiac.getArea() << endl;

    return 0;
}
