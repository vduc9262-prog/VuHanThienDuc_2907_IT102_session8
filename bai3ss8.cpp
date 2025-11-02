#include <stdio.h>

int main() {

    int arr[5] = {7, 4, 9, 12, 3};
    int i;
    int hasEven = 0;

    printf("Cac so chan trong mang: ");

    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;
        }
    }

    if(hasEven == 0) {
        printf("Mang khong chua so chan");
    }

    printf("\n");

    return 0;
}
