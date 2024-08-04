#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc thuốc
typedef struct {
    char maThuoc[6];
    char tenThuoc[21];
    char nhaSanXuat[21];
    char dangThuoc[11];
    float donGia;
    char congDung[51];
} Thuoc;

// Hàm nhập thông tin thuốc
void nhapThongTinThuoc(Thuoc* t) {
    printf("Nhap ma thuoc: ");
    scanf_s("%5s", t->maThuoc);
    printf("Nhap ten thuoc: ");
    scanf_s("%20s", t->tenThuoc);
    printf("Nhap nha san xuat: ");
    scanf_s("%20s", t->nhaSanXuat);
    printf("Nhap dang thuoc (vien/nuoc): ");
    scanf_s("%10s", t->dangThuoc);
    printf("Nhap don gia: ");
    scanf_s("%f", &t->donGia);
    printf("Nhap cong dung: ");
    scanf_s(" %[^\n]%*c", t->congDung); // Đọc chuỗi có khoảng trắng
}

// Hàm xuất thông tin thuốc
void xuatThongTinThuoc(Thuoc t) {
    printf("Ma thuoc: %s\n", t.maThuoc);
    printf("Ten thuoc: %s\n", t.tenThuoc);
    printf("Nha san xuat: %s\n", t.nhaSanXuat);
    printf("Dang thuoc: %s\n", t.dangThuoc);
    printf("Don gia: %.2f\n", t.donGia);
    printf("Cong dung: %s\n", t.congDung);
}

// Hàm nhập danh sách thuốc
void nhapDanhSachThuoc(Thuoc dsThuoc[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin thuoc thu %d:\n", i + 1);
        nhapThongTinThuoc(&dsThuoc[i]);
    }
}

// Hàm xuất danh sách thuốc
void xuatDanhSachThuoc(Thuoc dsThuoc[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Thong tin thuoc thu %d:\n", i + 1);
        xuatThongTinThuoc(dsThuoc[i]);
    }
}

// Hàm sắp xếp danh sách thuốc theo mã thuốc
void sapXepDanhSachThuoc(Thuoc dsThuoc[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(dsThuoc[i].maThuoc, dsThuoc[j].maThuoc) > 0) {
                Thuoc temp = dsThuoc[i];
                dsThuoc[i] = dsThuoc[j];
                dsThuoc[j] = temp;
            }
        }
    }
}

// Hàm tìm kiếm thuốc theo mã bắt đầu bằng "T01" sử dụng Binary Search
int timKiemThuoc(Thuoc dsThuoc[], int n, char* maCanTim) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (strncmp(dsThuoc[mid].maThuoc, maCanTim, 3) == 0) {
            return mid;
        }
        else if (strncmp(dsThuoc[mid].maThuoc, maCanTim, 3) < 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // Không tìm thấy
}

void menu() {
    int n;
    printf("Nhap so luong thuoc: ");
    scanf_s("%d", &n);

    // Sử dụng malloc để phân bổ bộ nhớ động cho mảng
    Thuoc* dsThuoc = (Thuoc*)malloc(n * sizeof(Thuoc));
    if (dsThuoc == NULL) {
        printf("Khong du bo nho de cap phat!\n");
        return;
    }

    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap danh sach thuoc\n");
        printf("2. Xuat danh sach thuoc\n");
        printf("3. Sap xep danh sach thuoc theo ma thuoc\n");
        printf("4. Tim thuoc theo ma T01\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            nhapDanhSachThuoc(dsThuoc, n);
            break;
        case 2:
            xuatDanhSachThuoc(dsThuoc, n);
            break;
        case 3:
            sapXepDanhSachThuoc(dsThuoc, n);
            printf("Danh sach thuoc da duoc sap xep.\n");
            break;
        case 4: {
            char maCanTim[6] = "T01";
            int index = timKiemThuoc(dsThuoc, n, maCanTim);
            if (index != -1) {
                printf("Tim thay thuoc co ma bat dau bang T01:\n");
                xuatThongTinThuoc(dsThuoc[index]);
            }
            else {
                printf("Khong tim thay thuoc co ma bat dau bang T01.\n");
            }
            break;
        }
        case 5:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le.\n");
        }
    } while (choice != 5);

    // Giải phóng bộ nhớ đã cấp phát
    free(dsThuoc);
}

int main() {
    menu();
    return 0;
}
