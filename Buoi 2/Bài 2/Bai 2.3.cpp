#include <stdio.h>
#include <corecrt_malloc.h>

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

// Hàm so sánh hỗn số
int compareHonSo(const void* a, const void* b) {
    HonSo* hs1 = (HonSo*)a;
    HonSo* hs2 = (HonSo*)b;

    if (hs1->phanNguyen == hs2->phanNguyen) {
        if (hs1->tuSo == hs2->tuSo) {
            return hs1->mauSo - hs2->mauSo;
        }
        return hs1->tuSo - hs2->tuSo;
    }

    return hs1->phanNguyen - hs2->phanNguyen;
}

// Hàm sắp xếp mảng hỗn số
void sortHonSo(HonSo arr[], int n) {
    int i, j;
    HonSo temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (compareHonSo(&arr[i], &arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm tìm kiếm hỗn số x theo giải thuật binary search trong mảng b đã được sắp xếp
int binarySearchHonSo(HonSo arr[], int n, HonSo x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // So sánh hỗn số tại vị trí mid với hỗn số x
        if (arr[mid].phanNguyen == x.phanNguyen && arr[mid].tuSo == x.tuSo && arr[mid].mauSo == x.mauSo) {
            return mid; // Trả về chỉ số nếu tìm thấy
        }
        else if (compareHonSo(&arr[mid], &x) < 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
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

    // Sắp xếp mảng b
    sortHonSo(b, n);

    // Nhập hỗn số x cần tìm
    HonSo x;
    printf("Nhap hon so x can tim (phan nguyen tu_so mau_so): ");
    scanf_s("%d %d %d", &x.phanNguyen, &x.tuSo, &x.mauSo);

    // Tìm kiếm hỗn số x trong mảng b bằng binary search
    int result = binarySearchHonSo(b, n, x);

    if (result != -1) {
        printf("Tim thay hon so x tai vi tri %d trong mang b.\n", result);
    }
    else {
        printf("Khong tim thay hon so x trong mang b.\n");
    }

    free(b);

    return 0;
}