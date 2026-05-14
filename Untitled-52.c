#include <stdio.h>
#include <math.h>

void generateGrayCode(int n) {
    int size = 1 << n; // 2^n

    printf("Gray code sequence for %d-bit:\n", n);
    for (int i = 0; i < size; i++) {
        int gray = i ^ (i >> 1);
        printf("%d\n", gray);
    }
}

int main() {
    int n;
    printf("Enter number of bits: ");
    scanf("%d", &n);

    generateGrayCode(n);

    return 0;
}
