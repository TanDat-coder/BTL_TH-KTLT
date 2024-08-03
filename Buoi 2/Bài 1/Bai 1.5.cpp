//#include <stdio.h>
//#include <stdlib.h>
//
//// Hàm tìm dãy con giảm dài nhất trong mảng a
//void findLongestDecreasingSubsequence(int arr[], int n) {
//    int* dp = (int*)malloc(n * sizeof(int)); // Mảng lưu độ dài của dãy con giảm kết thúc tại vị trí i
//    int* parent = (int*)malloc(n * sizeof(int)); // Mảng lưu chỉ số phần tử trước đó trong dãy con giảm
//
//    // Khởi tạo
//    for (int i = 0; i < n; i++) {
//        dp[i] = 1;
//        parent[i] = -1;
//    }
//
//    // Tìm dãy con giảm dài nhất
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            if (arr[j] > arr[i] && dp[j] + 1 > dp[i]) {
//                dp[i] = dp[j] + 1;
//                parent[i] = j;
//            }
//        }
//    }
//
//    // Tìm độ dài của dãy con giảm dài nhất
//    int maxLength = 0;
//    int endIdx = 0;
//    for (int i = 0; i < n; i++) {
//        if (dp[i] > maxLength) {
//            maxLength = dp[i];
//            endIdx = i;
//        }
//    }
//
//    // In dãy con giảm dài nhất
//    printf("Day con giam dai nhat trong mang la: ");
//    while (endIdx != -1) {
//        printf("%d ", arr[endIdx]);
//        endIdx = parent[endIdx];
//    }
//
//    free(dp);
//    free(parent);
//}
//
//int main() {
//    int n;
//    printf("Nhap so luong phan tu cua mang: ");
//    scanf_s("%d", &n);
//
//    int* numbers = (int*)malloc(n * sizeof(int));
//
//    printf("Nhap cac phan tu cua mang:\n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &numbers[i]);
//    }
//
//    // Tìm dãy con giảm dài nhất trong mảng
//    findLongestDecreasingSubsequence(numbers, n);
//
//    free(numbers);
//
//    return 0;
//}