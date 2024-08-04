#include <stdio.h>

// Hàm đệ quy tính giá trị của dãy An
int tinhAn(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return n + tinhAn(n - 1) + 2;
    }
    else {
        int m = n / 2;
        return m * m + tinhAn(m) * tinhAn(m + 1) + 1;
    }
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua phan tu An thu %d la: %d\n", n, tinhAn(n));

    return 0;
}