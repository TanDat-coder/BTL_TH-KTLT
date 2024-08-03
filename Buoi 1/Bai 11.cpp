//#include <stdio.h>
//#include <stdbool.h>
//
//void nhapMang(int* a, int n) {
//    printf("Nhap cac phan tu cua mang:\n");
//    for (int i = 0; i < n; i++) {
//        printf("a[%d] = ", i);
//        scanf_s("%d", a + i);
//    }
//}
//
//void xuatMang(int* a, int n) {
//    printf("Mang: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", *(a + i));
//    }
//    printf("\n");
//}
//
//void xuatCucTieu(int* a, int n) {
//    printf("Cac so cuc tieu trong mang: ");
//    for (int i = 1; i < n - 1; i++) {
//        if (*(a + i) < *(a + i - 1) && *(a + i) < *(a + i + 1)) {
//            printf("%d ", *(a + i));
//        }
//    }
//    printf("\n");
//}
//
//void xoaPhanTu(int* a, int* n, int k) {
//    if (k >= 0 && k < *n) {
//        for (int i = k; i < *n - 1; i++) {
//            *(a + i) = *(a + i + 1);
//        }
//        (*n)--;
//        printf("Da xoa phan tu tai vi tri %d\n", k);
//    }
//    else {
//        printf("Vi tri xoa khong hop le.\n");
//    }
//}
//
//void themPhanTu(int* a, int* n, int x, int k) {
//    if (k >= 0 && k <= *n) {
//        for (int i = *n; i > k; i--) {
//            *(a + i) = *(a + i - 1);
//        }
//        *(a + k) = x;
//        (*n)++;
//        printf("Da them phan tu %d tai vi tri %d\n", x, k);
//    }
//    else {
//        printf("Vi tri them khong hop le.\n");
//    }
//}
//
//void chuyenChanLe(int* a, int n) {
//    int left = 0, right = n - 1;
//    while (left < right) {
//        while (*(a + left) % 2 == 0 && left < right) {
//            left++;
//        }
//        while (*(a + right) % 2 != 0 && left < right) {
//            right--;
//        }
//        if (left < right) {
//            int temp = *(a + left);
//            *(a + left) = *(a + right);
//            *(a + right) = temp;
//            left++;
//            right--;
//        }
//    }
//}
//
//bool kiemTraChanLeXenKe(int* a, int n) {
//    for (int i = 0; i < n - 1; i++) {
//        if ((*(a + i) % 2 == 0 && *(a + i + 1) % 2 == 0) || (*(a + i) % 2 != 0 && *(a + i + 1) % 2 != 0)) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int a[100], n, choice, k, x;
//
//    printf("Nhap so phan tu cua mang: ");
//    scanf_s("%d", &n);
//
//    nhapMang(a, n);
//
//    do {
//        printf("\nMenu:\n");
//        printf("1. Xuat cac so cuc tieu trong mang\n");
//        printf("2. Xoa phan tu tai vi tri k\n");
//        printf("3. Them phan tu x tai vi tri k\n");
//        printf("4. Chuyen so chan len dau, so le xuong cuoi\n");
//        printf("5. Kiem tra mang co chua chan le xen ke khong\n");
//        printf("6. Ket thuc chuong trinh\n");
//        printf("Lua chon cua ban: ");
//        scanf_s("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            xuatCucTieu(a, n);
//            break;
//        case 2:
//            printf("Nhap vi tri phan tu can xoa: ");
//            scanf_s("%d", &k);
//            xoaPhanTu(a, &n, k);
//            break;
//        case 3:
//            printf("Nhap vi tri can them phan tu: ");
//            scanf_s("%d", &k);
//            printf("Nhap gia tri phan tu can them: ");
//            scanf_s("%d", &x);
//            themPhanTu(a, &n, x, k);
//            break;
//        case 4:
//            chuyenChanLe(a, n);
//            printf("Mang sau khi chuyen chan le: ");
//            xuatMang(a, n);
//            break;
//        case 5:
//            if (kiemTraChanLeXenKe(a, n)) {
//                printf("Mang chua chan le xen ke.\n");
//            }
//            else {
//                printf("Mang khong chua chan le xen ke.\n");
//            }
//            break;
//        case 6:
//            printf("Ket thuc chuong trinh.\n");
//            break;
//        default:
//            printf("Lua chon khong hop le. Vui long chon lai.\n");
//            break;
//        }
//    } while (choice != 6);
//
//    return 0;
//}