#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int total = 0;
    for (int i = 1; i <= n; i++) {
        int hasil = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            hasil += j * k;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil);
        total += hasil;
    }
    printf("%d\n", total);
    return 0;
}