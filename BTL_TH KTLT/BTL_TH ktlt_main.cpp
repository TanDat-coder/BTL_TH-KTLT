#include "doan_ktlt.h"

int main() {

    int choice;
    do {
        printMenu();
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        getchar(); // consume newline character

        switch (choice) {
        case 1:
            // In tat ca san pham
            printAllProducts(&shop);
            break;
        case 2:
            // In san pham co gia cao nhat
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 3:
            // In san pham co gia thap nhat
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 4:
            // Tìm kiếm sản phẩm theo tên
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 5:
            // Thêm sản phẩm mới
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 6:
            // Xóa sản phẩm
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 7:
            // Sửa thông tin sản phẩm
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 8:
            // Sắp xếp sản phẩm theo giá tăng dần
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 9:
            // Sắp xếp sản phẩm theo giá giảm dần
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 10:
            // Lọc sản phẩm theo nguồn gốc
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 11:
            // Lọc sản phẩm theo độ rang
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 12:
            // Đếm số lượng sản phẩm có giá lớn hơn 1000
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 13:
            // Tính tổng giá của tất cả sản phẩm
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 14:
            // Tính trung bình giá của tất cả sản phẩm
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 15:
            // Lưu dữ liệu vào file
            // Viết mã xử lý ở đây
            printf("Chuc nang chua duoc hoan thanh.\n");
            break;
        case 16:
            printf("Ket thuc chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 16);

    return 0;
}