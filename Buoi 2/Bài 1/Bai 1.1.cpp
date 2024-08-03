//#include <stdio.h>
//#include <stdlib.h>
//
//int isPrime(int num) {
//    if (num <= 1) {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void listPrimes(int n) {
//    int found = 0;
//    printf("Cac so nguyen to nho hon %d la: ", n);
//    for (int i = 2; i < n; i++) {
//        if (isPrime(i)) {
//            printf("%d ", i);
//            found = 1;
//        }
//    }
//    if (!found) {
//        printf("Khong co so nguyen to nao nho hon %d.", n);
//    }
//    printf("\n");
//}
//
//int main() {
//    int choice, n;
//
//    printf("Nhap so nguyen n: ");
//    scanf_s("%d", &n);
//
//    do {
//        printf("\nMenu:\n");
//        printf("1. Liet ke cac so nguyen to nho hon %d\n", n);
//        printf("0. Thoat\n");
//        printf("Chon chuc nang: ");
//        scanf_s("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            listPrimes(n);
//            break;
//        case 0:
//            printf("Tam biet!\n");
//            break;
//        default:
//            printf("Lua chon khong hop le. Vui long chon lai.\n");
//        }
//    } while (choice != 0);
//
//    return 0;
//}