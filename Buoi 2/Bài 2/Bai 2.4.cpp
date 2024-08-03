#include <stdio.h>
#include <stdlib.h>

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

// Hàm chia mảng hỗn số thành hai mảng s1 và s2
void chiaMangHonSo(HonSo* b, int n, int* s1, int* s2) {
    for (int i = 0; i < n; i++) {
        s1[i] = b[i].phanNguyen;
        s2[i] = b[i].tuSo * b[i].mauSo + b[i].phanNguyen * b[i].mauSo;
    }
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

    // Khởi tạo mảng s1 và s2
    int* s1 = (int*)malloc(n * sizeof(int));
    int* s2 = (int*)malloc(n * sizeof(int));

    // Chia mảng hỗn số b thành hai mảng s1 và s2
    chiaMangHonSo(b, n, s1, s2);

    // In ra mảng s1 (phần nguyên)
    printf("Mang s1 (phan nguyen):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", s1[i]);
    }

    // In ra mảng s2 (phân số)
    printf("\nMang s2 (phan so):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", s2[i]);
    }

    free(b);
    free(s1);
    free(s2);

    return 0;
}