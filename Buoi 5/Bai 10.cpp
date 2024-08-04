#include <stdio.h>

// Hàm tìm kiếm nhị phân đệ quy trên mảng đã sắp xếp
int binarySearchRecursive(int arr[], int x, int left, int right) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // Nếu phần tử được tìm thấy ở vị trí mid
        if (arr[mid] == x)
            return mid;
        // Nếu phần tử nhỏ hơn ở vị trí mid, tiến hành tìm kiếm bên trái của mid
        else if (arr[mid] > x)
            return binarySearchRecursive(arr, x, left, mid - 1);
        // Nếu phần tử lớn hơn ở vị trí mid, tiến hành tìm kiếm bên phải của mid
        else
            return binarySearchRecursive(arr, x, mid + 1, right);
    }

    // Trường hợp không tìm thấy phần tử trong mảng
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    // Gọi hàm tìm kiếm nhị phân đệ quy
    int result = binarySearchRecursive(arr, x, 0, n - 1);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, result);
    }
    else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}