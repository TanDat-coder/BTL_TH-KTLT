#include <stdio.h>

// Hàm tính số cách chia m phần thưởng cho n học sinh theo từng điều kiện
long long countWays(int n, int m, char condition) {
    if (condition == 'a') {
        if (m >= 2 * n) {
            long long ways = 1;
            for (int i = 0; i < n; i++) {
                ways *= (m - i);
                ways /= (i + 1);
            }
            return ways;
        }
    }
    else if (condition == 'b') {
        if (m == n) {
            return 1;
        }
    }
    else if (condition == 'c') {
        if (m > 2 * n) {
            long long ways = 1;
            for (int i = 0; i < n; i++) {
                ways *= (m - i);
                ways /= (i + 1);
            }
            return ways;
        }
    }

    return 0;
}

int main() {
    int n, m;
    char condition;

    printf("Nhap so hoc sinh (n): ");
    scanf_s("%d", &n);
    printf("Nhap so phan thuong (m): ");
    scanf_s("%d", &m);

    printf("Chon dieu kien (a, b, c): ");
    scanf_s(" %c", &condition);

    long long ways = countWays(n, m, condition);

    if (ways > 0) {
        printf("So cach chia phan thuong la: %lld\n", ways);
    }
    else {
        printf("Khong thoa man dieu kien.\n");
    }

    return 0;
}