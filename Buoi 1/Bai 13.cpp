#include <stdio.h>

void tinhVaXuatPhepChia(int a[], int b[], int n) {
    if (n <= 0) {
        printf("Mang b rong. Khong the thuc hien phep chia.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == 0) {
            printf("Loi: Phan tu thu %d cua mang b co gia tri 0. Khong the thuc hien phep chia.\n", i);
        }
        else {
            printf("a[%d] / b[%d] = %.2f\n", i, i, (float)a[i] / b[i]);
        }
    }

    if (n != sizeof(b) / sizeof(b[0])) {
        printf("Do dai cua mang a va mang b khong bang nhau. Khong the thuc hien phep chia cho toan bo cac cap phan tu.\n");
    }
}

int main() {
    int a[] = { 10, 20, 30, 40 };
    int b[] = { 2, 0, 5, 10 };
    int n = sizeof(a) / sizeof(a[0]);

    tinhVaXuatPhepChia(a, b, n);

    return 0;
}