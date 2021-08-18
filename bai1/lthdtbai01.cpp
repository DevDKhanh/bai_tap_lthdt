//Bài 01(lthdtbai01.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c đọc vào
//từ tệp văn bản "tamgiac.txt". Và lưu kết quả vào "ketqua-lthdtbai01.txt"

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

//===Chuong trinh chinh===
int main()
{   
    //Khai bao bien
    float a, b, c, p, dTich, cVi;

    //Khai bao file de doc
	ifstream fileInput("tamgiac.txt");

    //Tao file ketqua-lthdtbai01.txt
	ofstream fileOutput("ketqua-lthdtbai01.txt");

	while (!fileInput.eof())
	{
		fileInput >> a;
		fileInput >> b;
		fileInput >> c;
	}

    cout << "Ba canh cua tam giac lan luot la: " << a << " " << b << " " << c << "\n";
    fileOutput.clear();

    //Tinh chu vi tam giac va luu vao file
    cVi = a + b + c;
    cout << "Chu vi tam giac la: " << cVi <<"\n";
    fileOutput << "Chu vi tam giac la: " << cVi <<"\n";

    //Tinh dien tich tam giac va luu vao file
    p = cVi/2; //Nua chu vi tam giac
    dTich = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Dien tich tam giac la: " << dTich << "\n";
    fileOutput << "Dien tich tam giac la: " << dTich;

    fileInput.close();
    fileOutput.close();
    
    cout << "Luu ket qua vao file ketqua-lthdtbai01.txt \n"; 
    cout << "Da luu thanh cong"; 

	cout << endl;
	return 0;
}