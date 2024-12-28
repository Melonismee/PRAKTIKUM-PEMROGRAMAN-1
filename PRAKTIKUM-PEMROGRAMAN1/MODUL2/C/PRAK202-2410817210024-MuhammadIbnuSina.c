#include <stdio.h>

int main(){
    float n1,n2,hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f",&n1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f",&n2);

    hasil=n1+n2;

    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n",n1,n2,hasil);

    float v1,v2,vhasil;
    
    printf("\nMasukkan Nilai Pertama : ");
    scanf("%f",&v1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f",&v2);

    vhasil=v1+v2;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",v1,v2,vhasil);


    return 0;
}