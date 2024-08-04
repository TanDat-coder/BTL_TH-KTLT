#include <stdio.h>

// Hàm đệ quy thông thường tính giá trị của dãy Yn
int tinhYn(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if (n == 3) {
        return 3;
    }
    else {
        return tinhYn(n - 1) + 2 * tinhYn(n - 2) + 3 * tinhYn(n - 3);
    }
}

// Hàm đệ quy đuôi tính giá trị của dãy Yn
int tinhYnTail(int n, int a, int b, int c) {
    if (n == 1) {
        return a;
    }
    else if (n == 2) {
        return b;
    }
    else if (n == 3) {
        return c;
    }
    else {
        return tinhYnTail(n - 1, b, c, a + 2 * b + 3 * c);
    }
}

// Hàm chính
int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Cach 1 - Gia tri cua phan tu Yn thu %d la: %d\n", n, tinhYn(n));
    printf("Cach 2 - Gia tri cua phan tu Yn thu %d la: %d\n", n, tinhYnTail(n, 1, 2, 3));

    return 0;
}