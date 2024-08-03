#include <stdio.h>
#include <stdlib.h>

// Struct ??nh ngh?a m?t ph�n s?
typedef struct {
    int tuSo;
    int mauSo;
} PhanSo;

// Struct ??nh ngh?a m?t h?n s?
typedef struct {
    int phanNguyen;
    PhanSo phanSo;
} HonSo;

// H�m xu?t v? tr� c�c ph?n t? c� ph?n nguy�n ch?n c?a m?ng h?n s?
void xuatViTriPhanNguyenChan(HonSo* b, int n) {
    printf("Vi tri cac phan tu co phan nguyen chan trong mang b la: ");
    for (int i = 0; i < n; i++) {
        if (b[i].phanNguyen % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang hon so: ");
    scanf_s("%d", &n);

    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));

    // Nh?p c�c h?n s? v�o m?ng b
    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].phanSo.tuSo, &b[i].phanSo.mauSo);
    }

    // Xu?t v? tr� c�c ph?n t? c� ph?n nguy�n ch?n trong m?ng
    xuatViTriPhanNguyenChan(b, n);

    // Gi?i ph�ng b? nh?
    free(b);

    return 0;
}