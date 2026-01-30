# Quản Lý Sách Bằng Struct Trong C

## 📌 Giới thiệu
Dự án này minh họa cách sử dụng **struct trong ngôn ngữ C** để quản lý thông tin sách.  
Chương trình hỗ trợ **ghi dữ liệu sách ra file** và **đọc dữ liệu sách từ file**.

Phù hợp cho sinh viên học:
- Struct trong C
- Xử lý file (File I/O)
- Lập trình C cơ bản

## 📂 Cấu trúc thư mục

## ⚙️ Chức năng
- Khai báo cấu trúc `struct` lưu thông tin sách
- Nhập thông tin sách từ bàn phím
- Ghi dữ liệu sách vào file
- Đọc dữ liệu sách từ file và hiển thị ra màn hình

## 🛠 Yêu cầu
- Trình biên dịch C (GCC / Dev-C++ / Code::Blocks)
- Hệ điều hành Windows hoặc Linux

## 🚀 Biên dịch và chạy chương trình

### Biên dịch
```bash
gcc STRUCT_N_SACH_write.c -o write
gcc STRUCT_N_SACH_READ.c -o read
./write   # Nhập và ghi dữ liệu sách
./read    # Đọc và hiển thị dữ liệu sách
