#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int var1 = 5, var2 = 10;
    int choice;

    printf("Gia tri ban dau: var1 = %d, var2 = %d\n", var1, var2);

    printf("Nhap lua chon (1 de doi gia tri): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            swap(&var1, &var2);
            printf("Gia tri sau khi doi: var1 = %d, var2 = %d\n", var1, var2);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}
