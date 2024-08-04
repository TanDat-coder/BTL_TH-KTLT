#include <stdio.h>

// Hàm đệ quy tính tổng các chữ số chẵn
int sumEvenDigits_rec(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        int digit = n % 10;
        if (digit % 2 == 0) {
            return digit + sumEvenDigits_rec(n / 10);
        }
        else {
            return sumEvenDigits_rec(n / 10);
        }
    }
}

// Hàm không sử dụng đệ quy tính tổng các chữ số chẵn
int sumEvenDigits_nonrec(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    printf("Nhap so nguyen duong N: ");
    scanf_s("%d", &N);

    int sum_rec = sumEvenDigits_rec(N);
    int sum_nonrec = sumEvenDigits_nonrec(N);

    printf("Tong cac chu so chan cua %d (su dung de quy): %d\n", N, sum_rec);
    printf("Tong cac chu so chan cua %d (khong su dung de quy): %d\n", N, sum_nonrec);

    return 0;
}