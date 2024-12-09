#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, tong;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    
    tong = sum(num1, num2);
    printf("Tong cua %d va %d la: %d\n", num1, num2, tong);
    
    return 0;
}

