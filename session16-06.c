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

int findElement(int *arr, int size, int value) {
    for (i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Nhap lua chon (1 de in cac phan tu trong mang, 2 de cap nhat phan tu, 3 de tim kiem phan tu): ");
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
        case 3: {
            int value;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &value);
            int index = findElement(arr, size, value);
            if (index != -1) {
                printf("Gia tri %d duoc tim thay tai vi tri: %d\n", value, index);
            } else {
                printf("Gia tri %d khong ton tai trong mang!\n", value);
            }
            break;
        }
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}
