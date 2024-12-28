#include <stdio.h>
#include <math.h>

int main(){
    int alas=5, tinggi=12, miring, keliling, luas;
    miring=sqrt((alas*alas)+(tinggi*tinggi));
    keliling=tinggi+miring+alas;
    luas=0.5*alas*tinggi;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n",alas);
    printf("Tinggi = %d\n",tinggi);
    printf("\nJawab : \n");
    printf("Sisi A = %d cm\n",tinggi);
    printf("Sisi B = %d cm\n",miring);
    printf("Sisi C = %d cm\n",alas);
    printf("Keliling = %d cm\n",keliling);
    printf("Luas = %d cm",luas);
    return 0;
}