#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX][MAX];
    int row, col;
    int i, j;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran:  ");
    scanf("%d", &col);

    if (row <= 0 || row > MAX || col <= 0 || col > MAX) {
        printf("Kich thuoc khong hop le (1 .. %d)!\n", MAX);
        return 1;
    }

    printf("\nNhap cac phan tu cua ma tran:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
