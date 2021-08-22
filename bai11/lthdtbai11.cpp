
// Bài 11(lthdtbai11.cpp):Đọc dãy số nguyên có n phần tử từ tệp văn bản "daysonguyen.txt" vào mảng động.
// Sắp xếp dãy số giảm dần theo giải thuật sủi bọt. Y/c viết 1 hàm sắp xếp dãy số giảm dần,
// 1 hàm hoán đổi nội dung 2 ô nhớ và 1 hàm đưa dãy số trong mảng ra màn hình.

#include <iostream>
#include <fstream>

using namespace std;

void change(int i, int j);
void sort_arr(int n);
void show_arr(string s, int a);
static int * arr;

int main(){
	ifstream fileOut;
	fileOut.open("daysonguyen.txt", ios::out);
	int count = 0;

	// Đếm số phần tử trong mảng
	while (!fileOut.eof()){
		string s;
		fileOut >> s;
		count++;
	}

	//Cấp phát bộ nhớ động cho arr
	arr = new int[count];
	count = 0;

	//Đưa con trỏ về đầu mảng về lưu giá trị vào arr
	fileOut.seekg(0, ios::beg);
	while (!fileOut.eof()){
		fileOut >> arr[count];
		count++;
	}

	//Đóng tệp in ra mảng ban đầu
	fileOut.close();
	show_arr("Mang doc tu tep la:\n", count);

	//Sắp xếp in ra mảng đã được sắp xếp
	sort_arr(count);
    show_arr("\nMang da duoc sap xep la:\n", count);
    
    delete[] arr; //Trả lại bộ nhớ cho chương trình
    cout << endl;

	return 0;
}

//===Chuong trinh ham===
//Ham hoan doi
void change(int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//Ham sap xep
void sort_arr(int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i+1; j <n; j++){
			if(arr[i] < arr[j]){
				change(i, j);
			}
		}
	}
}

//Ham dua mang ra man hinh
void show_arr(string s, int a) {
    cout << s;
    for(int i = 0; i < a ; i++){
		cout << arr[i] << " ";
	}
}

