#include <stdio.h>
int main() {
    int arr[5] = {74 , 47 , 98 , 12, 37 };
    int i;

    printf("Mang goc: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 1) {        // S? l?
            arr[i] = arr[i] + 2;
        } else {                     // S? ch?n
            arr[i] = arr[i] + 3;
        }
    }

    printf("Mang moi: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
