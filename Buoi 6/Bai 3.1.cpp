#include <stdio.h>

// Hàm tính S(n) theo đệ quy
double calculateS_rec(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return calculateS_rec(n - 1) + (double)n / (n * (n + 1));
    }
}

// Hàm tính S(n) không sử dụng đệ quy
double calculateS_nonrec(int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += (double)i / (i * (i + 1));
    }
    return result;
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    printf("Tinh S(%d) theo cach de quy: %.2f\n", n, calculateS_rec(n));
    printf("Tinh S(%d) theo cach khong su dung de quy: %.2f\n", n, calculateS_nonrec(n));

    return 0;
}