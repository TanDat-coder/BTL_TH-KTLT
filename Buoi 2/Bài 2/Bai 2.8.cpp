#include <stdio.h>
#include <stdlib.h>

// Struct định nghĩa một phân số
typedef struct {
    int tuSo;
    int mauSo;
} PhanSo;

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    PhanSo phanSo;
} HonSo;

// Hàm tính tổng của một hỗn số
float tinhTongHonSo(HonSo hs) {
    float tong = hs.phanNguyen + (float)hs.phanSo.tuSo / hs.phanSo.mauSo;
    return tong;
}

// Hàm tính tổng của mảng các hỗn số
float tinhTongMangHonSo(HonSo* b, int n) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += tinhTongHonSo(b[i]);
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang hon so: ");
    scanf_s("%d", &n);

    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));

    // Nhập các hỗn số vào mảng b
    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].phanSo.tuSo, &b[i].phanSo.mauSo);
    }

    // Tính tổng các phần tử của mảng b
    float tong = tinhTongMangHonSo(b, n);
    printf("Tong cac phan tu cua mang hon so la: %.2f\n", tong);

    // Giải phóng bộ nhớ
    free(b);

    return 0;
}