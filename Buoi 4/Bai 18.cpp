#include <stdio.h>

// Hàm đệ quy tính giá trị của dãy xn
int tinhXn(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 2;
    }
    else {
        int sum = 0;
        for (int i = 2; i <= n; i++) {
            sum += i * tinhXn(0) + (i - 1) * tinhXn(1) + tinhXn(i - 1);
        }
        return sum;
    }
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua phan tu xn thu %d la: %d\n", n, tinhXn(n));

    return 0;
}