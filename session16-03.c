#include <stdio.h>

void sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int var1 = 7, var2 = 15, result = 0;
    int choice;

    printf("Nhap lua chon (1 de tinh tong): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sum(&var1, &var2, &result);
            printf("Tong hai so: %d\n", result);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}

