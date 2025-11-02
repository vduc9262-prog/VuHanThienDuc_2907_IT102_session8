#include <stdio.h>
#include <stdlib.h>

const int MAX = 1000;
int a[MAX];
int n = 0;

void hienThiMang() {
    if (n == 0) {
        printf("  [Mang rong]\n");
        return;
    }
    printf("  Mang (%d phan tu): ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int timKiem(int x) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}

void menu() {
    printf("\n");
    printf("============================ QUẢN LÝ DANH SÁCH SÓ NGUYÊN  ============================\n");
    printf("1. Them phan tu vao vi tri bat ky\n");
    printf("2. Xoa phan tu o vi tri bat ky\n");
    printf("3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("4. Tim kiem phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Thoat chuong trinh\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("Nhap lua chon (1-6): ");
}

int main() {
    int luaChon, pos, val, idx;

    while (1) {
        menu();
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                if (n >= MAX) {
                    printf("  Loi: Mang da day! Khong the them.\n");
                    break;
                }
                printf("  Nhap vi tri can them (0..%d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("  Vi tri khong hop le!\n");
                    break;
                }
                printf("  Nhap gia tri: ");
                scanf("%d", &val);
                for (int i = n; i > pos; --i) {
                    a[i] = a[i-1];
                }
                a[pos] = val;
                ++n;
                printf("  Da them %d vao vi tri %d.\n", val, pos);
                break;

            case 2:
                if (n == 0) {
                    printf("  Mang rong, khong co gi de xoa.\n");
                    break;
                }
                printf("  Nhap vi tri can xoa (0..%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("  Vi tri khong hop le!\n");
                    break;
                }
                val = a[pos];
                for (int i = pos; i < n-1; ++i) {
                    a[i] = a[i+1];
                }
                --n;
                printf("  Da xoa phan tu %d tai vi tri %d.\n", val, pos);
                break;

            case 3:
                if (n == 0) {
                    printf("  Mang rong, khong co gi de cap nhat.\n");
                    break;
                }
                printf("  Nhap vi tri can cap nhat (0..%d): ", n-1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("  Vi tri khong hop le!\n");
                    break;
                }
                printf("  Nhap gia tri moi: ");
                scanf("%d", &val);
                a[pos] = val;
                printf("  Da cap nhat vi tri %d thanh %d.\n", pos, val);
                break;

            case 4:
                if (n == 0) {
                    printf("  Mang rong, khong co gi de tim.\n");
                    break;
                }
                printf("  Nhap gia tri can tim: ");
                scanf("%d", &val);
                idx = timKiem(val);
                if (idx != -1) {
                    printf("  Tim thay %d tai vi tri %d.\n", val, idx);
                } else {
                    printf("  Khong tim thay %d trong mang.\n", val);
                }
                break;

            case 5:
                hienThiMang();
                break;

            case 6:
                printf("  Tam biet! Chuong trinh ket thuc.\n");
                return 0;

            default:
                printf("  Lua chon khong hop le! Vui long chon 1-6.\n");
        }
    }
    return 0;
}
