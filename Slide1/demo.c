#include <stdio.h>
#include <string.h>

int main() {
    char mssv[20];
    char hoTen[50];
    float diemToan, diemLy, diemHoa, diemTrungBinh;
    printf("Nhap Ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);
    mssv[strcspn(mssv, "\n")] = '\0';

    printf("Nhap Ho va Ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    hoTen[strcspn(hoTen, "\n")] = '\0';

    //nhập điểm
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    //Tính điểm trung bình
    diemTrungBinh = (diemToan * 2 + diemLy + diemHoa) / 4;
    //xuat thong tin
    printf("\n-----------------------------------\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);
    printf("-----------------------------------\n");
    return 0;
}