#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int matriksa[n1], matriksb[n2];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &matriksa[i]); }

        for (int i = 0; i < n2; i++) {
            scanf("%d", &matriksb[i]); }

        for (int i = 0; i < n1; i++) {
            printf("%d ", matriksa[i] * matriksb[i]); } 
    }
    return 0;
}