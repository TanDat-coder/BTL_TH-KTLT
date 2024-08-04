#include <stdio.h>

// Hàm đệ quy tính giá trị phần tử thứ n của cấp số nhân
int capSoNhan(int a, int q, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return q * capSoNhan(a, q, n - 1);
    }
}

int main() {
    int a, q, n;
    printf("Nhap gia tri cua a: ");
    scanf_s("%d", &a);
    printf("Nhap gia tri cua q: ");
    scanf_s("%d", &q);
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua phan tu thu %d trong cap so nhan la: %d\n", n, capSoNhan(a, q, n));

    return 0;
}