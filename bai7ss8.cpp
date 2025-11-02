#include <stdio.h>
int main() {
    int n, i;
    int arr[100]; 

    printf("Nhap so phan tu cua mang (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap %d phan tu (chi duoc nhap so le):\n", n);
    for(i = 0; i < n; i++) {
        do {
            printf("Phan tu thu %d: ", i+1);
            scanf("%d", &arr[i]);

            if (arr[i] % 2 == 0) {
                printf("  -> Loi: Ban nhap so chan! Vui long nhap lai so le.\n");
            }
        } while (arr[i] % 2 == 0); // L?p l?i n?u là s? ch?n
    }

    printf("\nMang da nhap (chi chua so le):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
