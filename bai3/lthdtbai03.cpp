//Bài 03(lthdtbai03.cpp): Cho tệp văn bản chứa dãy số nguyên dương a1,a2,a3...,an.
//Đọc vào dãy số, đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy.
//Ghi dãy số sau khi thay đổi ra tệp "ketqua-lthdtbai01.txt". Y/c sử dụng mạng động chứa dãy số.

#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileIn("dayso.txt"); 

    string a;
    int * arr = new int[0];
    int i = 0;

    if(!fileIn) 
    { 
        cout << "Khong the mo file" << endl; 
    } 
    else 
    { 
        ofstream fileOut("ketqua-lthdtbai01.txt");
        while(!fileIn.eof()) 
        { 
            fileIn >> a; 
            arr[i] = stoi(a);
            i++;
        } 

        cout << "Mang truoc khi sap xep la: ";
        for (int j = 0; j < i; j++) {
            cout << arr[j] << " ";
        }

        //Sap xep mang
        for(int j=0; j < i-1; j++) {
            for (int k=j; k < i; k++){
                if (arr[k] % 2 != 0) //Kiem tra neu la so le thi thuc thi
                {
                    int t = arr[j]; //Tao bien t gan t = arr[j]
                    arr[j]=arr[k]; //Gan arr[j] = arr[k]
                    arr[k]=t; //Gan arr[k] = arr[t]

                    break; //Thoat khoi vong lap
                }
            }
        }

        cout << "\nMang sau khi sap xep la: ";
        for (int j = 0; j < i; j++) {
            fileOut << arr[j] << " "; //Ghi ket qua vao file
            cout << arr[j] << " ";
        }

        fileOut.close();
    }  

    fileIn.close();

    cout << endl;

    return 0;
}