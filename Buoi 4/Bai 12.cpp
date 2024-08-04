#include <stdio.h>

// Hàm tính số hạng thứ n của dãy x
int tinhX(int n) {
    int x = 1, y = 0, temp;
    for (int i = 1; i <= n; i++) {
        temp = x;
        x = x + y;
        y = temp;
    }
    return y;
}

// Hàm tính số hạng thứ n của dãy y
int tinhY(int n) {
    int x = 1, y = 0, temp;
    for (int i = 1; i <= n; i++) {
        temp = x;
        x = x + y;
        y = 3 * temp + 2 * y;
    }
    return y;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So hang thu %d cua day x la: %d\n", n, tinhX(n));
    printf("So hang thu %d cua day y la: %d\n", n, tinhY(n));

    return 0;
}