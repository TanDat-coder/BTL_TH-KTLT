#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char hoTen[50];
    char soDienThoai[15];
    int soVeNguoiLon;
    int soVeTreEm;
    char tenPhim[50];
    char phongChieu[10];
    char xuatChieu[10];
    int tienPhaiTra;
} KhachHang;

void docDanhSachKhachHang(KhachHang dskh[], int* n, const char* filename);
void xuatDanhSachKhachHang(KhachHang dskh[], int n);
void tinhTienPhaiTra(KhachHang* kh);
void tinhTongDoanhThu(KhachHang dskh[], int n);
void tinhDoanhThuTungPhim(KhachHang dskh[], int n);
void xuatKhachHangTheoPhongVaXuat(KhachHang dskh[], int n, const char* phong, const char* xuat);
void sapXepTheoTienPhaiTra(KhachHang dskh[], int n);
void sapXepTheoHoTen(KhachHang dskh[], int n);
int timKiemKhachHang(KhachHang dskh[], int n, const char* hoTen);

int main() {
    KhachHang dskh[MAX];
    int n;
    char phong[10], xuat[10];
    int pos;

    docDanhSachKhachHang(dskh, &n, "khachhang.txt");
    xuatDanhSachKhachHang(dskh, n);

    for (int i = 0; i < n; i++) {
        tinhTienPhaiTra(&dskh[i]);
    }

    printf("Danh sach sau khi tinh tien phai tra:\n");
    xuatDanhSachKhachHang(dskh, n);

    tinhTongDoanhThu(dskh, n);
    tinhDoanhThuTungPhim(dskh, n);

    printf("Nhap phong chieu: ");
    fgets(phong, sizeof(phong), stdin);
    phong[strcspn(phong, "\n")] = '\0';
    printf("Nhap xuat chieu: ");
    fgets(xuat, sizeof(xuat), stdin);
    xuat[strcspn(xuat, "\n")] = '\0';
    xuatKhachHangTheoPhongVaXuat(dskh, n, phong, xuat);

    sapXepTheoTienPhaiTra(dskh, n);
    printf("Danh sach sau khi sap xep theo tien phai tra:\n");
    xuatDanhSachKhachHang(dskh, n);

    sapXepTheoHoTen(dskh, n);
    printf("Danh sach sau khi sap xep theo ho ten:\n");
    xuatDanhSachKhachHang(dskh, n);

    pos = timKiemKhachHang(dskh, n, "Nguyen Van An");
    if (pos != -1) {
        printf("Khach hang 'Nguyen Van An' co trong danh sach o vi tri %d.\n", pos);
    }
    else {
        printf("Khach hang 'Nguyen Van An' khong co trong danh sach.\n");
    }

    return 0;
}

void docDanhSachKhachHang(KhachHang dskh[], int* n, const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "r") != 0) {
        printf("Khong mo duoc file!\n");
        exit(1);
    }

    fscanf_s(file, "%d\n", n);
    for (int i = 0; i < *n; i++) {
        fgets(dskh[i].hoTen, 50, file);
        dskh[i].hoTen[strcspn(dskh[i].hoTen, "\n")] = '\0';
        fgets(dskh[i].soDienThoai, 15, file);
        dskh[i].soDienThoai[strcspn(dskh[i].soDienThoai, "\n")] = '\0';
        fscanf_s(file, "%d\n", &dskh[i].soVeNguoiLon);
        fscanf_s(file, "%d\n", &dskh[i].soVeTreEm);
        fgets(dskh[i].tenPhim, 50, file);
        dskh[i].tenPhim[strcspn(dskh[i].tenPhim, "\n")] = '\0';
        fgets(dskh[i].phongChieu, 10, file);
        dskh[i].phongChieu[strcspn(dskh[i].phongChieu, "\n")] = '\0';
        fgets(dskh[i].xuatChieu, 10, file);
        dskh[i].xuatChieu[strcspn(dskh[i].xuatChieu, "\n")] = '\0';
    }

    fclose(file);
}

void xuatDanhSachKhachHang(KhachHang dskh[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Khach hang %d:\n", i + 1);
        printf("Ho va ten: %s\n", dskh[i].hoTen);
        printf("So dien thoai: %s\n", dskh[i].soDienThoai);
        printf("So ve nguoi lon: %d\n", dskh[i].soVeNguoiLon);
        printf("So ve tre em: %d\n", dskh[i].soVeTreEm);
        printf("Ten phim: %s\n", dskh[i].tenPhim);
        printf("Phong chieu: %s\n", dskh[i].phongChieu);
        printf("Xuat chieu: %s\n", dskh[i].xuatChieu);
        printf("Tien phai tra: %d\n", dskh[i].tienPhaiTra);
        printf("\n");
    }
}

void tinhTienPhaiTra(KhachHang* kh) {
    kh->tienPhaiTra = kh->soVeNguoiLon * 40000 + kh->soVeTreEm * 20000;
}

void tinhTongDoanhThu(KhachHang dskh[], int n) {
    int tongDoanhThu = 0;
    for (int i = 0; i < n; i++) {
        tongDoanhThu += dskh[i].tienPhaiTra;
    }
    printf("Tong doanh thu cua rap phim: %d VND\n", tongDoanhThu);
}

void tinhDoanhThuTungPhim(KhachHang dskh[], int n) {
    char tenPhim[MAX][50];
    int doanhThu[MAX] = { 0 };
    int phimCount = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < phimCount; j++) {
            if (strcmp(dskh[i].tenPhim, tenPhim[j]) == 0) {
                doanhThu[j] += dskh[i].tienPhaiTra;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy_s(tenPhim[phimCount], sizeof(tenPhim[phimCount]), dskh[i].tenPhim);
            doanhThu[phimCount] = dskh[i].tienPhaiTra;
            phimCount++;
        }
    }

    for (int i = 0; i < phimCount; i++) {
        printf("Doanh thu phim '%s': %d VND\n", tenPhim[i], doanhThu[i]);
    }
}

void xuatKhachHangTheoPhongVaXuat(KhachHang dskh[], int n, const char* phong, const char* xuat) {
    printf("Khach hang trong phong '%s' va xuat chieu '%s':\n", phong, xuat);
    for (int i = 0; i < n; i++) {
        if (strcmp(dskh[i].phongChieu, phong) == 0 && strcmp(dskh[i].xuatChieu, xuat) == 0) {
            printf("Ho va ten: %s\n", dskh[i].hoTen);
            printf("So dien thoai: %s\n", dskh[i].soDienThoai);
            printf("So ve nguoi lon: %d\n", dskh[i].soVeNguoiLon);
            printf("So ve tre em: %d\n", dskh[i].soVeTreEm);
            printf("Ten phim: %s\n", dskh[i].tenPhim);
            printf("Tien phai tra: %d\n", dskh[i].tienPhaiTra);
            printf("\n");
        }
    }
}

void sapXepTheoTienPhaiTra(KhachHang dskh[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dskh[i].tienPhaiTra > dskh[j].tienPhaiTra) {
                KhachHang temp = dskh[i];
                dskh[i] = dskh[j];
                dskh[j] = temp;
            }
        }
    }
}

void sapXepTheoHoTen(KhachHang dskh[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(dskh[i].hoTen, dskh[j].hoTen) > 0) {
                KhachHang temp = dskh[i];
                dskh[i] = dskh[j];
                dskh[j] = temp;
            }
        }
    }
}

int timKiemKhachHang(KhachHang dskh[], int n, const char* hoTen) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(dskh[mid].hoTen, hoTen);
        if (cmp == 0) {
            return mid;
        }
        else if (cmp < 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
