#include <stdio.h>
#include <stdlib.h>

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

// Hàm xóa phần tử thứ k trong mảng hỗn số b
void xoaPhanTu(HonSo* b, int* n, int k) {
    if (k < 0 || k >= *n) {
        printf("Vi tri can xoa khong hop le.\n");
        return;
    }

    for (int i = k; i < *n - 1; i++) {
        b[i] = b[i + 1];
    }

    (*n)--;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf_s("%d", &n);

    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));

    // Nhập các hỗn số vào mảng b
    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].tuSo, &b[i].mauSo);
    }

    int k;
    printf("Nhap vi tri phan tu can xoa: ");
    scanf_s("%d", &k);

    // Xóa phần tử thứ k trong mảng hỗn số b
    xoaPhanTu(b, &n, k);

    // In ra mảng sau khi xóa phần tử
    printf("Mang sau khi xoa phan tu thu %d:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", b[i].phanNguyen, b[i].tuSo, b[i].mauSo);
    }

    free(b);

    return 0;
}