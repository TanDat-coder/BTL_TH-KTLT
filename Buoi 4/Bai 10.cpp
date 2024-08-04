#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm xuất dãy số Fibonacci thoả mãn điều kiện trong đoạn [m, n]
void xuatDayFibonacci(int m, int n) {
    int i = 1;
    int fibo = fibonacci(i);
    int count = 0;

    while (fibo <= n && count < 3) {
        if (fibo >= m) {
            printf("%d ", fibo);
            count++;
        }
        i++;
        fibo = fibonacci(i);
    }
}

int main() {
    int m, n;
    printf("Nhap m: ");
    scanf_s("%d", &m);
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Day Fibonacci thuoc doan [%d, %d] co 3 so thoa la: ", m, n);
    xuatDayFibonacci(m, n);

    return 0;
}