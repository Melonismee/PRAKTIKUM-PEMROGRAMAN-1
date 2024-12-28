#include <stdio.h>

int main(){
    char Nama[100],NIM[15],Kelas[15],ttl[30],Alamat[100],Hobby[15],HP[15];

    printf("Nama                 : ");
    scanf(" %[^\n]",Nama);
    printf("NIM                  : ");
    scanf(" %[^\n]",NIM);
    printf("Kelas Paralel        : ");
    scanf(" %[^\n]",Kelas);
    printf("Tempat/Tanggal Lahir : ");
    scanf(" %[^\n]",ttl);
    printf("Alamat               : ");
    scanf(" %[^\n]",Alamat);
    printf("Hobby                : ");
    scanf(" %[^\n]",Hobby);
    printf("No.HP                : ");
    scanf(" %[^\n]",HP);

    printf("\nNama                 : %s\n",Nama);
    printf("NIM                  : %s\n",NIM);
    printf("Kelas Paralel        : %s\n",Kelas);
    printf("Tempat/Tanggal Lahir : %s\n",ttl); 
    printf("Alamat               : %s\n",Alamat);
    printf("Hobby                : %s\n",Hobby);
    printf("No.HP                : %s\n",HP);
    return 0;
}