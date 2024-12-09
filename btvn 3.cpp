#include <stdio.h>

long long giaiThua(int n) {
    long long ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Khong tinh duoc giai thua cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", n, giaiThua(n));
    }

    return 0;
}

