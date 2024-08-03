#include <stdio.h>
#include <corecrt_malloc.h>

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

// Hàm tìm kiếm hỗn số x trong mảng b
int linearSearchHonSo(HonSo arr[], int n, HonSo x) {
    for (int i = 0; i < n; i++) {
        if (arr[i].phanNguyen == x.phanNguyen && arr[i].tuSo == x.tuSo && arr[i].mauSo == x.mauSo) {
            return i; // Trả về chỉ số của phần tử nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
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

    // Nhập hỗn số x cần tìm
    HonSo x;
    printf("Nhap hon so x can tim (phan nguyen tu_so mau_so): ");
    scanf_s("%d %d %d", &x.phanNguyen, &x.tuSo, &x.mauSo);

    // Tìm kiếm hỗn số x trong mảng b
    int result = linearSearchHonSo(b, n, x);

    if (result != -1) {
        printf("Tim thay hon so x tai vi tri %d trong mang b.\n", result);
    }
    else {
        printf("Khong tim thay hon so x trong mang b.\n");
    }

    free(b);

    return 0;
}