#include <stdio.h>

// Hàm đệ quy tính tích các số chẵn trong mảng
int multiplyEven(int arr[], int size, int index) {
    if (index < size) {
        if (arr[index] % 2 == 0) {
            return arr[index] * multiplyEven(arr, size, index + 1);
        }
        return multiplyEven(arr, size, index + 1);
    }
    return 1;
}

// Hàm đệ quy xuất các phần tử có chứa chữ số 4 trong mảng
void printContainsFour(int arr[], int size, int index) {
    if (index < size) {
        int num = arr[index];
        while (num != 0) {
            if (num % 10 == 4 || num % 10 == -4) {
                printf("%d ", arr[index]);
                break;
            }
            num /= 10;
        }
        printContainsFour(arr, size, index + 1);
    }
}

int main() {
    int arr[] = { 123, 42, 345, 64, 876, 104 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int choice;
    printf("Chon chuc nang:\n");
    printf("1. Tinh tich cac so chan trong mang\n");
    printf("2. Xuat cac phan tu co chua chu so 4 trong mang\n");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        printf("Tich cac so chan trong mang: %d\n", multiplyEven(arr, size, 0));
        break;
    case 2:
        printf("Cac phan tu co chua chu so 4 trong mang: ");
        printContainsFour(arr, size, 0);
        printf("\n");
        break;
    default:
        printf("Lua chon khong hop le.\n");
        break;
    }

    return 0;
}