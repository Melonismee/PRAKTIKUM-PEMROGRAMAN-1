#include <stdio.h>

int main(){
    int a=4, b=5, c=7, keliling, pagar=85000, biaya;
    keliling = a+b+c;
    biaya = keliling*pagar;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",keliling);
    printf("Harga tanah Per Meter adalah %d\n",pagar);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",biaya);
    return 0;
}