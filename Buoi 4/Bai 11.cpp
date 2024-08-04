#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm tìm số Fibonacci lớn nhất nhỏ hơn n bằng cách duyệt từ 0 đến n
int timFibonacciLonNhatDeQuy(int n) {
    int i = 0;
    while (fibonacci(i) < n) {
        i++;
    }

    return fibonacci(i - 1);
}

// Hàm tìm số Fibonacci lớn nhất nhỏ hơn n không sử dụng đệ quy
int timFibonacciLonNhatKhongDeQuy(int n) {
    int a = 0, b = 1, c = 1;

    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return a;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d (su dung de quy): %d\n", n, timFibonacciLonNhatDeQuy(n));
    printf("So Fibonacci lon nhat nho hon %d (khong su dung de quy): %d\n", n, timFibonacciLonNhatKhongDeQuy(n));

    return 0;
}