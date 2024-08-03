#include <stdio.h>
#include <stdlib.h>

// Struct định nghĩa một phân số
typedef struct {
    int tuSo;
    int mauSo;
} PhanSo;

// Struct định nghĩa một hỗn số
typedef struct {
    int phanNguyen;
    PhanSo phanSo;
} HonSo;

// Hàm chuyển đổi hỗn số thành phân số
PhanSo chuyenDoiThanhPhanSo(HonSo hs) {
    PhanSo ps;
    ps.tuSo = hs.phanNguyen * hs.phanSo.mauSo + hs.phanSo.tuSo;
    ps.mauSo = hs.phanSo.mauSo;
    return ps;
}

// Hàm tạo mảng c chứa các phần tử là phân số được đổi từ các phần tử hỗn số của mảng b
PhanSo* taoMangPhanSoTuHonSo(HonSo* b, int n) {
    PhanSo* c = (PhanSo*)malloc(n * sizeof(PhanSo));
    for (int i = 0; i < n; i++) {
        c[i] = chuyenDoiThanhPhanSo(b[i]);
    }
    return c;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang hon so: ");
    scanf_s("%d", &n);

    HonSo* b = (HonSo*)malloc(n * sizeof(HonSo));

    // Nhập các hỗn số vào mảng b
    printf("Nhap cac hon so (phan nguyen tu_so mau_so) cua mang b:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d %d %d", &b[i].phanNguyen, &b[i].phanSo.tuSo, &b[i].phanSo.mauSo);
    }

    // Tạo mảng c chứa các phần tử là phân số được đổi từ các phần tử hỗn số của mảng b
    PhanSo* c = taoMangPhanSoTuHonSo(b, n);

    // In ra mảng c sau khi chuyển đổi
    printf("Mang phan so sau khi chuyen doi tu mang hon so:\n");
    for (int i = 0; i < n; i++) {
        printf("%d/%d\n", c[i].tuSo, c[i].mauSo);
    }

    // Giải phóng bộ nhớ
    free(b);
    free(c);

    return 0;
}