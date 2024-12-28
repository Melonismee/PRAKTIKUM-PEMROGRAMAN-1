#include <stdio.h>

int main(){
    float putaran=5, jarak=14, jari, phi=3.14;
    jari=jarak/(putaran*2*phi);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",jarak);
    printf("\nJawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer",jari);
    return 0;
}