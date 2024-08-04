#include <stdio.h>

// Hàm tính số Fibonacci tại vị trí n
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Hàm xuất các số Fibonacci lẻ trong đoạn [m, n]
void odd_fibonacci_in_range(int m, int n) {
    int i = 0;
    while (1) {
        int fib = fibonacci(i);
        if (fib > n) {
            break;
        }
        if (fib >= m && fib % 2 != 0) {
            printf("%d ", fib);
        }
        i++;
    }
}

int main() {
    int m = 10;
    int n = 30;

    printf("Cac so Fibonacci le trong doan [%d, %d]: ", m, n);
    odd_fibonacci_in_range(m, n);
    printf("\n");

    return 0;
}