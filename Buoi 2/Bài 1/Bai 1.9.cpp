#include <stdio.h>
#include <corecrt_malloc.h>

// Hàm đổi chỗ hai phần tử trong mảng
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng: số lẻ ở đầu mảng, số chẵn ở cuối mảng
void sortOddEven(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        // Tìm phần tử lẻ ở bên phải và phần tử chẵn ở bên trái để đổi chỗ
        while (arr[left] % 2 != 0 && left < right) {
            left++;
        }
        while (arr[right] % 2 == 0 && left < right) {
            right--;
        }

        if (left < right) {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    sortOddEven(numbers, n);

    free(numbers);

    return 0;
}