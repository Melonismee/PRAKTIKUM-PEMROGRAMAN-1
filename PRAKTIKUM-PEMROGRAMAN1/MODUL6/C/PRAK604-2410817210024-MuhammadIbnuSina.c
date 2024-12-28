#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];
    int bintang=0, pagar=0;
    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);


    for (int i=0; i<strlen(kode); i++) {
        if (kode[i]==pesan[i]) {
            pesan[i]='*';
            bintang++;
        } else {
            pesan[i]='#';
            pagar++;
        }
    }

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        printf("%s\n", pesan);
        printf("* = %d\n", bintang);
        printf("# = %d\n", pagar);

        if (bintang>=pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan palsu\n");
        }
    }
    return 0;
}