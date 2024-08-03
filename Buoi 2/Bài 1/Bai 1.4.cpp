#include <stdio.h>
#include <stdlib.h>

// Hàm sắp xếp mảng sao cho số chẵn tăng dần và số lẻ giảm dần
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Sắp xếp số chẵn tăng dần
            if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 0 && arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Sắp xếp số lẻ giảm dần
            if (arr[j] % 2 != 0 && arr[j + 1] % 2 != 0 && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    // Sắp xếp mảng theo yêu cầu
    sortArray(numbers, n);

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // Giải phóng bộ nhớ sau khi sử dụng

    return 0;
}