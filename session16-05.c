#include <stdio.h>
int i;
void printArray(int *arr, int size) {
    for (i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, *(arr + i));
    }
}

void updateElement(int *arr, int newValue, int position, int size) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Nhap lua chon (1 de in cac phan tu trong mang, 2 de cap nhat phan tu): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printArray(arr, size);
            break;
        case 2: {
            int position, newValue;
            printf("Nhap vi tri can cap nhat (0-based): ");
            scanf("%d", &position);
            printf("Nhap gia tri moi: ");
            scanf("%d", &newValue);
            updateElement(arr, newValue, position, size);
            printf("Mang sau khi cap nhat:\n");
            printArray(arr, size);
            break;
        }
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}

