#include <stdio.h>

int main() {
    int var = 10;         
    int *ptr = &var;      

    int choice;           
    printf("Nhap lua chon (1 hoac 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Cach 1:\n");
            printf("Gia tri cua var: %d\n", var);
            printf("Dia chi cua var: %p\n", (void*)&var);
            break;

        case 2:
            printf("Cach 2:\n");
            printf("Gia tri cua var: %d\n", *ptr);
            printf("Dia chi cua var: %p\n", (void*)ptr);
            break;

        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}
