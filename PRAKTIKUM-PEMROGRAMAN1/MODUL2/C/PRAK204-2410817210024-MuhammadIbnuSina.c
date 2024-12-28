#include <stdio.h>
#define PI 22.0/7.0

int main(){
    float jari,tinggi,volume,luas,keliling;

    scanf("%f",&jari);
    scanf("%f",&tinggi);

    volume=PI*jari*jari*tinggi;
    luas=2*PI*jari*(jari+tinggi);
    keliling=2*PI*jari;

    printf("Volume : %.2f\n",volume);
    printf("Luas : %.2f\n",luas);
    printf("Keliling : %.2f\n",keliling);

    float jari1,tinggi1,volume1,luas1,keliling1;

    scanf("%f",&jari1);
    scanf("%f",&tinggi1);

    volume1=PI*jari1*jari1*tinggi1;
    luas1=2*PI*jari1*(jari1+tinggi1);
    keliling1=2*PI*jari1;

    printf("Volume : %.2f\n",volume1);
    printf("Luas : %.2f\n",luas1);
    printf("Keliling : %.2f\n",keliling1);
    return 0;
}