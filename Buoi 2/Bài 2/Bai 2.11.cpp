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

// Hàm tìm vị trí của phần tử lớn nhất trong mảng hỗn số
int timViTriPhanTuLonNhat(HonSo* b, int n) {
    int viTriMax = 0;
    HonSo max = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i].phanNguyen > max.phanNguyen || (b[i].phanNguyen == max.phanNguyen && b[i].phanSo.tuSo > max.phanSo.tuSo)) {
            max = b[i];
            viTriMax = i;
        }
    }
    return viTriMax;
}

// Hàm tìm vị trí của phần tử nhỏ nhất trong mảng hỗn số
int timViTriPhanTuNhoNhat(HonSo* b, int n) {
    int viTriMin = 0;
    HonSo min = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i].phanNguyen < min.phanNguyen || (b[i].phanNguyen == min.phanNguyen && b[i].phanSo.tuSo < min.phanSo.tuSo)) {
            min = b[i];
            viTriMin = i;
        }
    }
    return viTriMin;
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

    // Tìm vị trí của phần tử lớn nhất trong mảng
    int viTriMax = timViTriPhanTuLonNhat(b, n);
    printf("Vi tri cua phan tu lon nhat trong mang la: %d\n", viTriMax);

    // Tìm vị trí của phần tử nhỏ nhất trong mảng
    int viTriMin = timViTriPhanTuNhoNhat(b, n);
    printf("Vi tri cua phan tu nho nhat trong mang la: %d\n", viTriMin);

    // Giải phóng bộ nhớ
    free(b);

    return 0;
}