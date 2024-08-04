#include <stdio.h>

// Hàm đệ quy tính số tiền sau m năm
float tinhTien(int n, float x, float von) {
    if (n == 0) {
        return von;
    }
    else {
        float lai = von * x / 100;
        return tinhTien(n - 1, x, von) + lai;
    }
}

int main() {
    int soNam;
    float laiSuat, vonBanDau;

    printf("Nhap so nam: ");
    scanf_s("%d", &soNam);

    printf("Nhap lai suat hang nam (phan tram): ");
    scanf_s("%f", &laiSuat);

    printf("Nhap von ban dau (trieu dong): ");
    scanf_s("%f", &vonBanDau);

    float tienSauNam = tinhTien(soNam, laiSuat, vonBanDau);

    printf("Sau %d nam, so tien co du (bao gom ca von lan lai) la: %.2f trieu dong\n", soNam, tienSauNam);

    return 0;
}