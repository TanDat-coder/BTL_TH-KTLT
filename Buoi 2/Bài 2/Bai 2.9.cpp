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

// Hàm tìm phần tử lớn nhất của mảng hỗn số
HonSo timPhanTuLonNhat(HonSo* b, int n) {
    HonSo max = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i].phanNguyen > max.phanNguyen || (b[i].phanNguyen == max.phanNguyen && b[i].phanSo.tuSo > max.phanSo.tuSo)) {
            max = b[i];
        }
    }
    return max;
}

// Hàm tìm phần tử nhỏ nhất của mảng hỗn số
HonSo timPhanTuNhoNhat(HonSo* b, int n) {
    HonSo min = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i].phanNguyen < min.phanNguyen || (b[i].phanNguyen == min.phanNguyen && b[i].phanSo.tuSo < min.phanSo.tuSo)) {
            min = b[i];
        }
    }
    return min;
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

    // Tìm phần tử lớn nhất của mảng
    HonSo max = timPhanTuLonNhat(b, n);
    printf("Phan tu lon nhat cua mang la: %d %d/%d\n", max.phanNguyen, max.phanSo.tuSo, max.phanSo.mauSo);

    // Tìm phần tử nhỏ nhất của mảng
    HonSo min = timPhanTuNhoNhat(b, n);
    printf("Phan tu nho nhat cua mang la: %d %d/%d\n", min.phanNguyen, min.phanSo.tuSo, min.phanSo.mauSo);

    // Giải phóng bộ nhớ
    free(b);

    return 0;
}