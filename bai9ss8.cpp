#include <stdio.h>
int main() {
    int row, col, i, j;
    int arr[100][100];

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);

    // Ki?m tra h?p l?
    if (row <= 0 || row > 100 || col <= 0 || col > 100) {
        printf("So hang va cot phai lon hon 0 va nho hon hoac bang 100!\n");
        return 1;
    }

    printf("\nNhap cac phan tu cua ma tran:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMa tran vua nhap:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nCac phan tu tren duong bien:\n");

    if (row == 1) {
        for(j = 0; j < col; j++) {
            printf("%d ", arr[0][j]);
        }
    }
    else if (col == 1) {
        for(i = 0; i < row; i++) {
            printf("%d ", arr[i][0]);
        }
    }
    else {
        for(j = 0; j < col; j++) {
            printf("%d ", arr[0][j]);
        }
        printf("\n");

        for(i = 1; i < row - 1; i++) {
            printf("%d ", arr[i][0]); 
            for(j = 1; j < col - 1; j++) {
                printf("  ");
            }
            printf("%d\n", arr[i][col-1]);  
        }

        for(j = 0; j < col; j++) {
            printf("%d ", arr[row-1][j]);
        }
    }

    printf("\n");

    return 0;
}
