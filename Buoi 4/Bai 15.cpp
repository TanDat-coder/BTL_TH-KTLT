#include <stdio.h>

// Hàm đệ quy tính giá trị của dãy An
int tinhAn(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        int sum = 0;
        for (int i = 1; i < n; i++) {
            sum += tinhAn(i);
        }
        return n * sum;
    }
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua phan tu An thu %d la: %d\n", n, tinhAn(n));

    return 0;
}