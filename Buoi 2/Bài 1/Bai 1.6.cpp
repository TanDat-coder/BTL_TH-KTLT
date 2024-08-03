#include <stdio.h>
#include <limits.h>
#include <corecrt_malloc.h>

// Hàm tìm số nhỏ thứ 2 trong mảng a
int findSecondSmallest(int arr[], int n) {
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf_s("%d", &n);

    int* numbers = (int*)malloc(n * sizeof(int));

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]);
    }

    int secondSmallest = findSecondSmallest(numbers, n);

    if (secondSmallest == INT_MAX) {
        printf("Khong ton tai so nho thu 2 trong mang.\n");
    }
    else {
        printf("So nho thu 2 trong mang la: %d\n", secondSmallest);
    }

    free(numbers);

    return 0;
}