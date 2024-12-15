#include <stdio.h>
int i;
void printArray(int *arr, int size) {
    for (i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, *(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Nhap lua chon (1 de in cac phan tu trong mang): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printArray(arr, size);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}

