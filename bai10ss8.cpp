#include <stdio.h>
#include <math.h>

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, i;
    int arr[100]; 
    int coNguyenTo = 0; 

    printf("Nhap so phan tu cua mang (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for(i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac so nguyen to trong mang: ");
    for(i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            coNguyenTo = 1;
        }
    }

    if (coNguyenTo == 0) {
        printf("Khong co so nguyen to");
    }

    printf("\n");

    return 0;
}
