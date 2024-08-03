//#include <stdio.h>
//#include <stdlib.h>
//
//// Struct định nghĩa một hỗn số
//typedef struct {
//    int phanNguyen;
//    int tuSo;
//    int mauSo;
//} HonSo;
//
//// Hàm thêm hỗn số x vào mảng b tại vị trí k
//void themHonSo(HonSo* b, int* n, HonSo x, int k) {
//    (*n)++;
//    b = (HonSo*)realloc(b, (*n) * sizeof(HonSo));
//
//    for (int i = *n - 1; i > k; i--) {
//        b[i] = b[i - 1];
//    }
//
//    b[k] = x;
//}
//
//int main() {
//    int n;
//    printf("Nhap so luong phan tu cua mang: ");
//    scanf_s("%d", &n);
//
//    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));
//
//    // Nhập các hỗn số vào mảng b
//    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].tuSo, &b[i].mauSo);
//    }
//
//    HonSo x;
//    printf("Nhap hon so can them (phan nguyen tu_so mau_so): ");
//    scanf_s("%d %d %d", &x.phanNguyen, &x.tuSo, &x.mauSo);
//
//    int k;
//    printf("Nhap vi tri can them: ");
//    scanf_s("%d", &k);
//
//    // Thêm hỗn số x vào mảng b tại vị trí k
//    themHonSo(b, &n, x, k);
//
//    // In ra mảng sau khi thêm hỗn số
//    printf("Mang sau khi them hon so tai vi tri %d:\n", k);
//    for (int i = 0; i < n; i++) {
//        printf("%d %d %d\n", b[i].phanNguyen, b[i].tuSo, b[i].mauSo);
//    }
//
//    free(b);
//
//    return 0;
//}