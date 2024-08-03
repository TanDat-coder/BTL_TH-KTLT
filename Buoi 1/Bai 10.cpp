//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//void xuatKyTu(char* st) {
//    printf("Cac ky tu trong chuoi la: ");
//    while (*st != '\0') {
//        printf("%c ", *st);
//        st++;
//    }
//    printf("\n");
//}
//
//void chuyenChuHoa(char* st) {
//    while (*st != '\0') {
//        *st = toupper(*st);
//        st++;
//    }
//}
//
//void chuyenChuDauMoiTuChuHoa(char* st) {
//    if (*st != ' ' && *st != '\0') {
//        *st = toupper(*st);
//    }
//
//    while (*st != '\0') {
//        if (*st == ' ' && *(st + 1) != ' ' && *(st + 1) != '\0') {
//            *(st + 1) = toupper(*(st + 1));
//        }
//        st++;
//    }
//}
//
//int main() {
//    char st[100];
//    int choice;
//
//    printf("Nhap chuoi: ");
//    fgets(st, sizeof(st), stdin);
//    st[strcspn(st, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng cuối chuỗi
//
//    do {
//        printf("\nMenu:\n");
//        printf("1. Xuat cac ky tu trong chuoi\n");
//        printf("2. Chuyen cac ky tu ve dang chu hoa\n");
//        printf("3. Chuyen ky tu dau moi tu ve dang chu hoa\n");
//        printf("4. Thoat\n");
//        printf("Chon chuc nang (1-4): ");
//        scanf_s("%d", &choice);
//        getchar(); // Đọc ký tự xuống dòng sau scanf
//
//        switch (choice) {
//        case 1:
//            xuatKyTu(st);
//            break;
//        case 2:
//            chuyenChuHoa(st);
//            printf("Chuoi sau khi chuyen ve chu hoa: %s\n", st);
//            break;
//        case 3:
//            chuyenChuDauMoiTuChuHoa(st);
//            printf("Chuoi sau khi chuyen ky tu dau moi tu ve chu hoa: %s\n", st);
//            break;
//        case 4:
//            printf("Ket thuc chuong trinh.\n");
//            break;
//        default:
//            printf("Lua chon khong hop le. Vui long chon lai.\n");
//            break;
//        }
//    } while (choice != 4);
//
//    return 0;
//}