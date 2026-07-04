#include <stdio.h>
#include <string.h>

int main() {
    // Khai báo biến lưu trữ thông tin sinh viên
    char mssv[20];
    char hoTen[50];
    float diemToan, diemLy, diemHoa, diemTrungBinh;

    // --- BƯỚC 1: NHẬP DỮ LIỆU ---
    // Nhập MSSV trước để tránh trôi lệnh, sử dụng %s (không dấu cách)
    printf("Nhap Ma so sinh vien: ");
    scanf("%s", mssv);

    // Xóa bộ nhớ đệm trước khi nhập chuỗi có khoảng trắng
    // while (getchar() != '\n'); 

    // Nhập Họ và Tên (có khoảng trắng) bằng fgets
    printf("Nhap Ho va Ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    // Xóa ký tự xuống dòng '\n' do fgets tự động thu thập ở cuối chuỗi
    hoTen[strcspn(hoTen, "\n")] = '\0';

    // Nhập các điểm thành phần
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // --- BƯỚC 2: TÍNH TOÁN ---
    // Toán nhân hệ số 2, tổng chia cho 4
    diemTrungBinh = (diemToan * 2 + diemLy + diemHoa) / 4;

    // --- BƯỚC 3: XUẤT KẾT QUẢ THEO ĐỊNH DẠNG ---
    printf("\n-----------------------------------\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);
    printf("-----------------------------------\n");

    return 0;
}