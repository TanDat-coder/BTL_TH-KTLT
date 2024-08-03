#include <stdio.h>
#include <corecrt_malloc.h>

// H�m s?p x?p m?ng sao cho c�c s? ch?n t?ng d?n, c�c s? l? gi? nguy�n v? tr�
void sortArray(int arr[], int n) {
    // S?p x?p c�c s? ch?n t?ng d?n
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] % 2 == 0 && arr[j] < arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // In m?ng sau khi s?p x?p
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

    sortArray(numbers, n);

    free(numbers);

    return 0;
}