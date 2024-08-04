#include <stdio.h>

// Hàm đệ quy tính giá trị của biểu thức U(n)
int tinhBieuThuc(int n) {
    if (n < 6) {
        return n;
    }
    else {
        return tinhBieuThuc(n - 5) + tinhBieuThuc(n - 4) + tinhBieuThuc(n - 3) + tinhBieuThuc(n - 2) + tinhBieuThuc(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua bieu thuc U(%d) la: %d\n", n, tinhBieuThuc(n));

    return 0;
}