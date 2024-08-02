#ifndef doan_ktlt_h
#define doan_ktlt_h

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 15
#define MAX_NAME_LENGTH 50
#define MAX_LOCATION_LENGTH 100
#define MAX_ORIGIN_LENGTH 50
#define MAX_ROAST_LEVEL_LENGTH 20
#define MAX_LINE_LENGTH 200


// Định nghĩa struct cho sản phẩm cà phê
typedef struct {
    char name[MAX_NAME_LENGTH];
    double price;
    char origin[MAX_ORIGIN_LENGTH];
    char roastLevel[MAX_ROAST_LEVEL_LENGTH];
} CoffeeProduct;

// Định nghĩa struct cho cửa hàng cà phê
typedef struct {
    char name[MAX_NAME_LENGTH];
    char location[MAX_LOCATION_LENGTH];
    CoffeeProduct products[MAX_PRODUCTS];
    int productCount;
    char line[MAX_LINE_LENGTH];
} CoffeeShop;

void printMenu();
void readCoffeeShopDataFromFile(const char* filename, CoffeeShop* shop);
void printAllProducts(const CoffeeShop* shop);
void addProductToShop(CoffeeShop* shop, const char* name, double price, const char* origin, const char* roastLevel);
void deleteProductFromShop(CoffeeShop* shop, const char* productName);


#endif
