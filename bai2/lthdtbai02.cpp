//Bài 02(lthdtbai02.cpp): Tính gần đúng sinx với độ chính xác 10^-4 theo công thức sau:
//sinx = x - x^3/3! + x^5/5! + ... + (-1)^n * x^(2*n+1)/(2*n+1)! + ...

#include <iostream>
#include<math.h>

using namespace std;

//Khai bao ham
float F(float x,int n);

//===Chuong trinh chinh===
int main()
{
    float x, sin =0;
    cout << "Nhap gia tri sin can tinh: ";
    cin >> x;
    int n = 0;

    //Tong cac bieu thuc
    while (abs(F(x, n)) > 0.00001) {
        sin += F(x, n);
        n++;
    }

    //In ra man hinh sin(x)
    cout << "--Ket qua (radian)-- \n";
    cout << "Sin("<< x <<") = "  << sin << endl;
    return 0;
}

//===Chuong trinh ham===
// 
float F(float x,int n) {

    int a;
    if (n % 2 == 0) 
    {
        a = 1;
    }
    else
    {
        a = -1;
    }

    float temp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        temp = temp * x / i;
    }

    return a * temp;
}