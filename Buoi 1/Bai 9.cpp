//#include <stdio.h>
//
//void tinhToan(int a, int b, int* tong, int* hieu, int* tich, float* thuong) {
//    *tong = a + b;
//    *hieu = a - b;
//    *tich = a * b;
//
//    if (b != 0) {
//        *thuong = (float)a / b;
//    }
//    else {
//        printf("Loi: Khong the chia cho 0\n");
//        *thuong = 0;
//    }
//}
//
//int main() {
//    int a, b;
//    int sum, diff, product;
//    float quotient;
//
//    int* pa = &a;
//    int* pb = &b;
//
//    printf("Nhap vao hai so a va b: ");
//    scanf_s("%d %d", &a, &b);
//
//    tinhToan(a, b, &sum, &diff, &product, &quotient);
//
//    printf("Tong: %d\n", sum);
//    printf("Hiệu: %d\n", diff);
//    printf("Tích: %d\n", product);
//    printf("Thương: %.2f\n", quotient);
//
//    printf("Dia chi cua a: %p\n", (void*)&a);
//    printf("Dia chi cua b: %p\n", (void*)&b);
//    printf("Dia chi cua tong: %p\n", (void*)&sum);
//    printf("Dia chi cua hieu: %p\n", (void*)&diff);
//    printf("Dia chi cua tich: %p\n", (void*)&product);
//    printf("Dia chi cua thuong: %p\n", (void*)&quotient);
//
//    return 0;
//}