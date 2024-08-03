//#include <stdio.h>
//#include <stdbool.h>
//
//struct PhanSo {
//    int tu;
//    int mau;
//};
//
//void nhapPhanSo(struct PhanSo* ps) {
//    printf("Nhap tu so: ");
//    scanf_s("%d", &ps->tu);
//    do {
//        printf("Nhap mau so (mau so khac 0): ");
//        scanf_s("%d", &ps->mau);
//    } while (ps->mau == 0);
//}
//
//void xuatPhanSo(struct PhanSo ps) {
//    printf("%d/%d\n", ps.tu, ps.mau);
//}
//
//struct PhanSo timMax(struct PhanSo* ps, int n) {
//    struct PhanSo max = ps[0];
//    for (int i = 1; i < n; i++) {
//        double val1 = (double)max.tu / max.mau;
//        double val2 = (double)ps[i].tu / ps[i].mau;
//        if (val2 > val1) {
//            max = ps[i];
//        }
//    }
//    return max;
//}
//
//struct PhanSo timMin(struct PhanSo* ps, int n) {
//    struct PhanSo min = ps[0];
//    for (int i = 1; i < n; i++) {
//        double val1 = (double)min.tu / min.mau;
//        double val2 = (double)ps[i].tu / ps[i].mau;
//        if (val2 < val1) {
//            min = ps[i];
//        }
//    }
//    return min;
//}
//
//void xoaPhanTu(struct PhanSo* ps, int* n, int k) {
//    if (k >= 0 && k < *n) {
//        for (int i = k; i < *n - 1; i++) {
//            ps[i] = ps[i + 1];
//        }
//        (*n)--;
//        printf("Da xoa phan tu tai vi tri %d\n", k);
//    }
//    else {
//        printf("Vi tri xoa khong hop le.\n");
//    }
//}
//
//void themPhanTu(struct PhanSo* ps, int* n, struct PhanSo x, int k) {
//    if (k >= 0 && k <= *n) {
//        for (int i = *n; i > k; i--) {
//            ps[i] = ps[i - 1];
//        }
//        ps[k] = x;
//        (*n)++;
//        printf("Da them phan tu tai vi tri %d\n", k);
//    }
//    else {
//        printf("Vi tri them khong hop le.\n");
//    }
//}
//
//int main() {
//    struct PhanSo arr[100];
//    int n, choice, k;
//
//    printf("Nhap so luong phan so: ");
//    scanf_s("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        printf("Nhap phan so thu %d:\n", i + 1);
//        nhapPhanSo(&arr[i]);
//    }
//
//    do {
//        printf("\nMenu:\n");
//        printf("1. Tim phan so lon nhat\n");
//        printf("2. Tim phan so nho nhat\n");
//        printf("3. Xoa phan tu tai vi tri k\n");
//        printf("4. Them phan tu x tai vi tri k\n");
//        printf("5. Ket thuc chuong trinh\n");
//        printf("Lua chon cua ban: ");
//        scanf_s("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("Phan so lon nhat la: ");
//            xuatPhanSo(timMax(arr, n));
//            break;
//        case 2:
//            printf("Phan so nho nhat la: ");
//            xuatPhanSo(timMin(arr, n));
//            break;
//        case 3:
//            printf("Nhap vi tri phan tu can xoa: ");
//            scanf_s("%d", &k);
//            xoaPhanTu(arr, &n, k);
//            break;
//        case 4:
//            struct PhanSo newFraction;
//            printf("Nhap phan so can them:\n");
//            nhapPhanSo(&newFraction);
//            printf("Nhap vi tri can them");
//                printf("Nhap vi tri phan tu can them: ");
//            scanf_s("%d", &k);
//            themPhanTu(arr, &n, newFraction, k);
//            break;
//        case 5:
//            printf("Ket thuc chuong trinh.\n");
//            break;
//        default:
//            printf("Lua chon khong hop le. Vui long chon lai.\n");
//        }
//    } while (choice != 5);
//
//    return 0;
//}