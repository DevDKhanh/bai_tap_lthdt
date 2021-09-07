/*
Bài 04(lthdtbai04.cpp): Tính hiệu 2 ma trận thực có kích thước mxn, Cmxn = Amxn - Bmxn.
Đưa các ma trận ra màn hình theo định dạng hàng, cột. Y/c sử dụng mảng động
chứa các ma trận. Y/c sử dụng mảng động chứa các ma trận. Y/c viết 1 hàm đọc ma trận từ tệp,
1 hàm đưa ma trận ra màn hình, và 1 hàm trừ 2 ma trận.
Các ma trận đọc vào từ tệp văn bản: "matran-A.txt" và "matran-B.txt".
*/
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Khai bao ham
void docTepMT(float* &X,int &m,int &n,const char *tenTep);
void duaRaMT(float *X,int m,int n);
float *truMT(float *A,float *B,int m,int n);

//===chuong trinh chinh===
int main()
{
    float *maTrix1, *maTrix2;
    int m, n;

    //Bat dau doc ma tran tu tep
    cout << "Doc va khoi tao ma tran tu tep" << endl;

    docTepMT(maTrix1, m, n, "matran-A.txt");
    docTepMT(maTrix2, m, n, "matran-B.txt");

    //In ra man hinh 2 ma tran
    cout << "Ma tran A" << endl;
    duaRaMT(maTrix1, m, n);

    cout << "Ma tran B" << endl;
    duaRaMT(maTrix2, m, n);

    //Tinh va in ra man hinh hieu cua 2 ma tran
    cout << "A - B:" << endl;
    duaRaMT(truMT(maTrix1, maTrix2, m, n), m, n);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void docTepMT(float* &X,int &m,int &n,const char *tenTep)
{
    //Khai bao tep vao
    ifstream fin(tenTep);

    //Doc so hang, so cot cua ma tran tu tep
    fin>>m>>n;

    //Tao mang dong co mxn o nho de chua ma tran
    X = new float[m*n];

    //Doc ma tran tu tep vao mang dong
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            int k = (i-1)*n + j - 1;
            fin>>X[k];
        }
}

void duaRaMT(float *X,int m,int n)
{
    for(int i=1;i<=m;i++)
    {
        //Dua ra hang i
        for(int j=1;j<=n;j++)
        {
            int k = (i-1)*n + j - 1;
            printf("%8.1f",X[k]);
        }

        //Xuong dong
        cout<<endl;
    }
}

float *truMT(float *A,float *B,int m,int n)
{
    //Tao mang dong C co mxn o nho de chua ma tran tong
    float *C = new float[m*n];

    //Tru 2 ma tran
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            int k = (i-1)*n + j - 1;
            C[k] = A[k] - B[k];
        }

    //Tra ve mang dong chua ma tran hieu
    return C;
}
