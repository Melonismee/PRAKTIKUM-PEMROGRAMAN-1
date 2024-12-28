#include <stdio.h>

int main(){
    int nilai, jam, menit, detik;
    scanf("%d", &nilai);

    jam = nilai / 3600;
    menit = (nilai % 3600) / 60;
    detik = nilai % 60;

    if (jam >= 24){
        int hari = jam / 24;
        jam %= 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    }else{
        printf("%02d:%02d:%02d", jam, menit, detik);
    }
    return 0;
}