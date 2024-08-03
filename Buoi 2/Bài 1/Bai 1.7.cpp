#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Hàm kiểm tra xem một số có chứa các chữ số của một số khác không
bool containsDigits(int num, int x) {
    int numDigits[10] = { 0 }; // Mảng lưu số lần xuất hiện của các chữ số trong num
    while (num > 0) {
        numDigits[num % 10]++;
        num /= 10;
    }

    while (x > 0) {
        if (numDigits[x % 10] == 0) {
            return false;
        }
        x /= 10;
    }

    return true;
}

// Hàm tìm các phần tử trong mảng a thỏa điều kiện
void findElements(int arr[], int n, int x) {
    printf("Cac phan tu trong mang a chua cac chu so cua %d la:\n", x);
    for (int i = 0; i < n; i++) {
        if (containsDigits(arr[i], x)) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf_s("%d", &n);

    int* numbers = (int*)malloc(n * sizeof(int));

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]);
    }

    printf("Nhap so co 2 chu so x: ");
    scanf_s("%d", &x);

    findElements(numbers, n, x);

    free(numbers);

    return 0;
}