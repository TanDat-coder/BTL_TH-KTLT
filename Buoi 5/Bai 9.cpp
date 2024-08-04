#include <stdio.h>

// Hàm đệ quy tính tổ hợp chập k của n
int toHop(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return toHop(n - 1, k) + toHop(n - 1, k - 1);
    }
}

int main() {
    int n, k;

    printf("Nhap vao so nguyen duong n: ");
    scanf_s("%d", &n);

    printf("Nhap vao so nguyen duong k (k <= n): ");
    scanf_s("%d", &k);

    if (k > n) {
        printf("Nhap sai! k phai nho hon hoac bang n.\n");
        return 1;
    }

    printf("To hop chap %d cua %d la: %d\n", k, n, toHop(n, k));

    return 0;
}