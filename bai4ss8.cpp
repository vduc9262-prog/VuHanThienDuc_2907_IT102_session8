#include <stdio.h>
int main() {
    int n, i;
    int hasEven = 0; 

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    int arr[100];

    printf("Nhap %d phan tu:\n", n);
    for(i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Cac so chan trong mang: ");
    for(i = 0; i < n; i++) {
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

