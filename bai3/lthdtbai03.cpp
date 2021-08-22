//Bài 03(lthdtbai03.cpp): Cho tệp văn bản chứa dãy số nguyên dương a1,a2,a3...,an.
//Đọc vào dãy số, đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy.
//Ghi dãy số sau khi thay đổi ra tệp "ketqua-lthdtbai01.txt". Y/c sử dụng mạng động chứa dãy số.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileIn; 
    fileIn.open("dayso.txt", ios::out);
    int * arr;
    int i = 0;

    if(!fileIn) 
    { 
        cout << "Khong the mo file" << endl; 
    } 
    else 
    { 
        while(!fileIn.eof()) 
        { 
            string s;
            fileIn >> s; 
            i++;
        } 

        //Cấp phát bộ nhớ cho arr
        arr = new int[i];
        i = 0;

        //Đưa con trỏ về đầu file và đọc ghi giá trị vào arr
        fileIn.seekg(0, ios::beg);
        ofstream fileOut("ketqua-lthdtbai01.txt");
        while(!fileIn.eof()) 
        { 
            fileIn >> arr[i]; 
            i++;
        } 
                
        cout << "Mang truoc khi sap xep la: ";
        for (int j = 0; j < i; j++) {
            cout << arr[j] << " ";
        }

        //Sắp xếp mảng
        for(int j=0; j < i-1; j++) {
            for (int k=j; k < i; k++){
                if (arr[k] % 2 != 0) //Nếu là số lẻ sẽ thực thi
                {
                    int t = arr[j]; //Tạo biến t gắn t = arr[j]
                    arr[j]=arr[k]; //Gán arr[j] = arr[k]
                    arr[k]=t; //Gán arr[k] = arr[t]

                    break; //Thoát khỏi vòng lặp
                }
            }
        }

        cout << "\nMang sau khi sap xep la: ";
        for (int j = 0; j < i; j++) {
            fileOut << arr[j] << " "; //Ghi kết quả vào file
            cout << arr[j] << " ";
        }

        //Đóng file
        fileOut.close();
        fileIn.close();
    }  

    delete[] arr; //Trả lại bộ nhớ cho chương trình
    cout << endl;

    return 0;
}