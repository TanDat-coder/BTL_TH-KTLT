#include <stdio.h>

// Hàm đệ quy tính giá trị của dãy Xn
int tinhXn(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return tinhXn(n - 1) + (n - 1) * tinhXn(n - 2);
    }
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua phan tu Xn thu %d la: %d\n", n, tinhXn(n));

    return 0;
}