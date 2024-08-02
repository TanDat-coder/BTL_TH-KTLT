#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct {
    char name[100];
    double price;
    char origin[100];
    char roastLevel[100];
} CoffeeProduct;

typedef struct {
    char name[100];
    char location[100];
    CoffeeProduct products[MAX_PRODUCTS];
    int productCount;
} CoffeeShop;

void printMenu() {
    int choice; 
    // Hiển thị menu
    printf("\nMENU:\n");
    printf("1. In tat ca san pham cua cua hang\n");
    printf("2. In san pham co gia cao nhat\n");
    printf("3. In san pham co gia thap nhat\n");
    printf("4. Tim kiem san pham theo ten\n");
    printf("5. Them san pham moi\n");
    printf("6. Xoa san pham\n");
    printf("7. Sua thong tin san pham\n");
    printf("8. Sap xep san pham theo gia tang dan\n");
    printf("9. Sap xep san pham theo gia giam dan\n");
    printf("10. Loc san pham theo nguon goc\n");
    printf("11. Loc san pham theo do rang\n");
    printf("12. Dem so luong san pham co gia lon hon 1000\n");
    printf("13. Tinh tong gia cua tat ca san pham\n");
    printf("14. Tinh trung binh gia cua tat ca san pham\n");
    printf("15. Luu du lieu vao file\n");
    printf("16. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    // Handle the choice and perform the desired actions
    // based on the user's selection
    switch (choice) {
    case 1:
        printAllProducts(&shop);
        break;
    case 2:
        // Call the function to print the product with the highest price
        break;
    case 3:
        // Call the function to print the product with the lowest price
        break;
    case 4:
        // Call the function to search for a product by name
        break;
    case 5:
        // Call the function to add a new product
        break;
    case 6:
        // Call the function to delete a product
        break;
    case 7:
        // Call the function to edit product information
        break;
    case 8:
        // Call the function to sort products by price in ascending order
        break;
    case 9:
        // Call the function to sort products by price in descending order
        break;
    case 10:
        // Call the function to filter products by origin
        break;
    case 11:
        // Call the function to filter products by roast level
        break;
    case 12:
        // Call the function to count products with price greater than 1000
        break;
    case 13:
        // Call the function to calculate the total price of all products
        break;
    case 14:
        // Call the function to calculate the average price of all products
        break;
    case 15:
        // Call the function to save data to a file
        break;
    case 16:
        // Exit the program
        exit(0);
    default:
        printf("Lua chon khong hop le. Vui long chon lai.\n");
        break;
    }
}
int main() {
    FILE* file;
    file = fopen("doan ktlt.txt", "r"); // Mở tệp để đọc

    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    // Đóng tệp sau khi thực hiện xong công việc
    fclose(file);

    return 0;
}

void printAllProducts(const CoffeeShop* shop) {
    printf("San pham cua cua hang %s:\n", shop->name);
    for (int i = 0; i < shop->productCount; ++i) {
        printf("- %s ($%.2f) - Nguon goc: %s, Do rang: %s\n",
            shop->products[i].name, shop->products[i].price,
            shop->products[i].origin, shop->products[i].roastLevel);
    }
}

void readCoffeeShopDataFromFile(const char* filename, CoffeeShop* shop) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file %s de doc du lieu.\n", filename);
        return;
    }

    int productIndex = 0;
    char line[200];
    while (fgets(line, sizeof(line), 

#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

        typedef struct {
        char name[100];
        double price;
        char origin[100];
        char roastLevel[100];
    } CoffeeProduct;

    typedef struct {
        char name[100];
        char location[100];
        CoffeeProduct products[MAX_PRODUCTS];
        int productCount;
    } CoffeeShop;

    void printMenu() {
        int choice;
        printf("\nMENU:\n");
        printf("1. In tat ca san pham cua cua hang\n");
        printf("2. In san pham co gia cao nhat\n");
        printf("3. In san pham co gia thap nhat\n");
        printf("4. Tim kiem san pham theo ten\n");
        printf("5. Them san pham moi\n");
        printf("6. Xoa san pham\n");
        printf("7. Sua thong tin san pham\n");
        printf("8. Sap xep san pham theo gia tang dan\n");
        printf("9. Sap xep san pham theo gia giam dan\n");
        printf("10. Loc san pham theo nguon goc\n");
        printf("11. Loc san pham theo do rang\n");
        printf("12. Dem so luong san pham co gia lon hon 1000\n");
        printf("13. Tinh tong gia cua tat ca san pham\n");
        printf("14. Tinh trung binh gia cua tat ca san pham\n");
        printf("15. Luu du lieu vao file\n");
        printf("16. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Handle the user's choice here
        switch (choice) {
        case 1:
            // Call the function to print all products
            break;
        case 2:
            // Call the function to print the product with the highest price
            break;
        case 3:
            // Call the function to print the product with the lowest price
            break;
        case 4:
            // Call the function to search for a product by name
            break;
        case 5:
            // Call the function to add a new product
            break;
        case 6:
            // Call the function to delete a product
            break;
        case 7:
            // Call the function to edit product information
            break;
        case 8:
            // Call the function to sort products by price in ascending order
            break;
        case 9:
            // Call the function to sort products by price in descending order
            break;
        case 10:
            // Call the function to filter products by origin
            break;
        case 11:
            // Call the function to filter products by roast level
            break;
        case 12:
            // Call the function to count products with price greater than 1000
            break;
        case 13:
            // Call the function to calculate the total price of all products
            break;
        case 14:
            // Call the function to calculate the average price of all products
            break;
        case 15:
            // Call the function to save data to a file
            break;
        case 16:
            // Exit the program
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }
    }

    void printAllProducts(const CoffeeShop * shop) {
        printf("San pham cua cua hang %s:\n", shop->name);
        for (int i = 0; i < shop->productCount; ++i) {
            printf("- %s ($%.2f) - Nguon goc: %s, Do rang: %s\n",
                shop->products[i].name, shop->products[i].price,
                shop->products[i].origin, shop->products[i].roastLevel);
        }
    }

    void readCoffeeShopDataFromFile(const char* filename, CoffeeShop * shop) {
        FILE* file = fopen(filename, "r");
        if (file == NULL) {
            printf("Khong the mo file %s de doc du lieu.\n", filename);
            return;
        }

        int productIndex = 0;
        char line[200];
        while (fgets(line, sizeof(line), file) != NULL) {
            if (strncmp(line, "Name: ", 6) == 0) {
                sscanf(line + 6, "%[^\n]", shop->name);
            }
            else if (strncmp(line, "Location: