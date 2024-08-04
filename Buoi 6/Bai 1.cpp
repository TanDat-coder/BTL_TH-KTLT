#include <stdio.h>
#include <stdlib.h>

// Khai báo cấu trúc cho các bài tập
struct Exercise {
    int number;
    char description[100];
    void (*func)();
};

// Khai báo các hàm con
void exercise1();
void exercise2();
void exercise3();
void exercise4();

// Định nghĩa các hàm con
void exercise1() {
    printf("Thuc hien bai tap 1\n");
}

void exercise2() {
    printf("Thuc hien bai tap 2\n");
}

void exercise3() {
    printf("Thuc hien bai tap 3\n");
}

void exercise4() {
    printf("Thuc hien bai tap 4\n");
}

int main() {
    struct Exercise exercises[] = {
        {1, "Bai tap 1", &exercise1},
        {2, "Bai tap 2", &exercise2},
        {3, "Bai tap 3", &exercise3},
        {4, "Bai tap 4", &exercise4}
    };

    int choice;
    int totalExercises = sizeof(exercises) / sizeof(exercises[0]);

    // Hiển thị danh sách các bài tập
    printf("Danh sach cac bai tap:\n");
    for (int i = 0; i < totalExercises; i++) {
        printf("%d. %s\n", exercises[i].number, exercises[i].description);
    }

    // Người dùng chọn bài tập để thực hiện
    printf("Nhap lua chon cua ban: ");
    scanf_s("%d", &choice);

    // Xử lý ngoại lệ nếu người dùng nhập lựa chọn không hợp lệ
    if (choice < 1 || choice > totalExercises) {
        printf("Lua chon khong hop le.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Thực thi hàm tương ứng với lựa chọn của người dùng
    exercises[choice - 1].func();

    return 0;
}