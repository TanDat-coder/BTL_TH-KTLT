#include <stdio.h>

// Hàm tìm chữ số đầu tiên của n
int chuSoDauTien(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

// Hàm tìm chữ số đảo ngược của n
int chuSoDaoNguoc(int n) {
    int daoNguoc = 0;
    while (n > 0) {
        daoNguoc = daoNguoc * 10 + n % 10;
        n /= 10;
    }
    return daoNguoc;
}

// Hàm tìm chữ số lớn nhất của n
int chuSoLonNhat(int n) {
    int max = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > max) {
            max = digit;
        }
        n /= 10;
    }
    return max;
}

// Hàm tìm chữ số nhỏ nhất của n
int chuSoNhoNhat(int n) {
    int min = 9;
    while (n > 0) {
        int digit = n % 10;
        if (digit < min) {
            min = digit;
        }
        n /= 10;
    }
    return min;
}

// Hàm kiểm tra n có toàn chữ số lẻ hay không
int kiemTraChuSoLe(int n) {
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            return 0; // không toàn chữ số lẻ
        }
        n /= 10;
    }
    return 1; // toàn chữ số lẻ
}

// Hàm kiểm tra n có toàn chữ số chẵn hay không
int kiemTraChuSoChan(int n) {
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            return 0; // không toàn chữ số chẵn
        }
        n /= 10;
    }
    return 1; // toàn chữ số chẵn
}

int main() {
    int n, luaChon;

    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    do {
        printf("\nMenu:\n");
        printf("1. Tim chu so dau tien cua n\n");
        printf("2. Tim chu so dao nguoc cua n\n");
        printf("3. Tim chu so lon nhat cua n\n");
        printf("4. Tim chu so nho nhat cua n\n");
        printf("5. Kiem tra n co toan chu so le hay khong\n");
        printf("6. Kiem tra n co toan chu so chan hay khong\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang (1-6): ");
        scanf_s("%d", &luaChon);

        switch (luaChon) {
        case 1:
            printf("Chu so dau tien cua %d la: %d\n", n, chuSoDauTien(n));
            break;
        case 2:
            printf("Chu so dao nguoc cua %d la: %d\n", n, chuSoDaoNguoc(n));
            break;
        case 3:
            printf("Chu so lon nhat cua %d la: %d\n", n, chuSoLonNhat(n));
            break;
        case 4:
            printf("Chu so nho nhat cua %d la: %d\n", n, chuSoNhoNhat(n));
            break;
        case 5:
            if (kiemTraChuSoLe(n)) {
                printf("%d co toan chu so le.\n", n);
            }
            else {
                printf("%d khong toan chu so le.\n", n);
            }
            break;
        case 6:
            if (kiemTraChuSoChan(n)) {
                printf("%d co toan chu so chan.\n", n);
            }
            else {
                printf("%d khong toan chu so chan.\n", n);
            }
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (luaChon != 0);

    return 0;
}