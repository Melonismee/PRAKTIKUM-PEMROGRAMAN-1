#include <stdio.h>

int main () {
    int program;
    float n1, n2;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &program);

        if (program > 0 && program < 5) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &n1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &n2);

            switch (program) {
            case 1:
                printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", n1, n2, n1+n2);
                break;
            
            case 2:
                printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", n1, n2, n1-n2);
                break;

            case 3:
                printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", n1, n2, n1*n2);
                break;

            case 4:
                if (n2 != 0) {
                    printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", n1, n2, n1/n2);
                } else {
                    printf("Pembagian tidak dapat dilakukan.\n");
                }
                break;
            }
        } else if (program != 5) {
            printf("Input Anda salah, silahkan coba lagi.\n");
        }
    } while (program != 5);
    printf ("Terima kasih telah menggunakan kalkulator Ibnu\n");

    return 0;
}