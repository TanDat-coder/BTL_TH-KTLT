#include <stdio.h>
#include <corecrt_malloc.h>

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

// Hàm đổi chỗ hai hỗn số
void swap(HonSo* a, HonSo* b) {
    HonSo temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng b: phần nguyên chẵn ở đầu, phần nguyên lẻ ở cuối
void sortHonSo(HonSo arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        // Tìm phần tử có phần nguyên lẻ ở bên phải và phần tử có phần nguyên chẵn ở bên trái để đổi chỗ
        while (arr[left].phanNguyen % 2 != 0 && left < right) {
            left++;
        }
        while (arr[right].phanNguyen % 2 == 0 && left < right) {
            right--;
        }

        if (left < right) {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %d/%d\n", arr[i].phanNguyen, arr[i].tuSo, arr[i].mauSo);
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf_s("%d", &n);

    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));

    // Nhập các hỗn số vào mảng b
    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].tuSo, &b[i].mauSo);
    }

    // Sắp xếp mảng b theo yêu cầu
    sortHonSo(b, n);

    free(b);

    return 0;
}