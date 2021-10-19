# Bài tập lập trình hướng đối tượng (C++)

I. NGÔN NGỮ C++

Bài 01(lthdtbai01.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c.
Ba cạnh a,b,c đọc vào từ tệp văn bản "tamgiac.txt". Lưu kết quả vào file
"ketqua-lthdtbai01.txt".

Bài 02(lthdtbai02.cpp): Tính gần đúng sinx với độ chính xác 10^-4 theo công thức
sau: sinx = x - x^3/3! + x^5/5! + ... + (-1)^n * x^(2*n+1)/(2\*n+1)! + ...

Bài 03(lthdtbai03.cpp): Cho tệp văn bản chứa dãy số nguyên dương a1,a2,a3...,an.
Đọc vào dãy số, đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy. Ghi dãy số
sau khi thay đổi ra tệp "ketqua-lthdtbai01.txt". Y/c sử dụng mạng động chứa dãy
số.

Bài 04(lthdtbai04.cpp): Tính hiệu 2 ma trận thực có kích thước mxn, Cmxn =
Amxn - Bmxn. Đưa các ma trận ra màn hình theo định dạng hàng, cột. Y/c sử dụng
mảng động chứa các ma trận. Y/c sử dụng mảng động chứa các ma trận. Y/c viết 1
hàm đọc ma trận từ tệp, 1 hàm đưa ma trận ra màn hình, và 1 hàm trừ 2 ma trận.
Các ma trận đọc vào từ tệp văn bản: "matran-A.txt" và "matran-B.txt".

Bài 11(lthdtbai11.cpp):Đọc dãy số nguyên có n phần tử từ tệp văn bản
"daysonguyen.txt" vào mảng động. Sắp xếp dãy số giảm dần theo giải thuật sủi
bọt. Y/c viết 1 hàm sắp xếp dãy số giảm dần, 1 hàm hoán đổi nội dung 2 ô nhớ và
1 hàm đưa dãy số trong mảng ra màn hình.

II. LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG

lthdt-bienhamtinh.cpp: Viết chương trình nhập vào danh sách sinh viên cho tới
khi không muốn nhập thì thôi, mỗi sinh viên có thông tin về mã sinh viên, tên và
điểm tbc. Mã SV là các số nguyên được lấy tự động có giá trị từ 11 trở đi. Đưa
ra màn hình số lượng và danh sách sinh viên đã nhập. Yêu cầu trong chương trình
có sử dụng biến chung và hàm chung, sử dụng đối tượng động.

Bài 15(lthdtbai15.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c.
Ba cạnh a,b,c có thể nhập vào từ bàn phím hoặc từ tệp văn bản.

Bài 16(lthdtbai16.cpp): Đọc vào bán kính và màu nền (Xanh, Đỏ, Tím, Vàng) của n
hình tròn từ tệp văn bản "hinhtron.txt". Đưa ra màn hình bán kính, màu nền, diện
tích và chu vi của các hình tròn. Tính tổng diện tích và chu vi của n hình tròn.
Đếm số lượng hình tròn có nền màu Xanh, Đỏ, Tím, Vàng.

Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.

1. Sử dụng toán tử nhập >> để nhập vào tọa độ;
2. Sử dụng toán tử xuất << để đưa tọa độ ra màn hình;
3. Có thể tự động khởi tạo tạo độ bằng 0 hoặc khởi tạo bằng 2 giá trị cho trước.

Bài 21(lthdtbai21.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận
Amxn để trong tệp văn bản "matran-A.txt", ma trận Bmxn để trong tệp văn bản
"matran-B.txt". Đưa các ma trận ra màn hình theo định dạng hàng, cột. Yêu cầu
thêm:

1. Sử dụng toán tử nhập >> để đọc vào ma trận từ tệp;
2. Sử dụng toán tử xuất << để đưa ma trận ra màn hình theo định dạng hàng, cột;
3. Sử dụng toán tử + để cộng 2 ma trận và trả về ma trận tổng;
4. Có thể tự động khởi tạo kích thước bằng 0.

Bài 30(lthdtbai30.cpp): Đọc vào một dãy số nguyên từ tệp văn bản, trong đó có cả
số dương và số âm. Sử dụng hàng đợi lưu trữ kế tiếp theo kiểu quay vòng để tách,
đưa ra màn hình đồng thời ghi ra tệp văn bản dãy các số dương và dãy các số âm.
