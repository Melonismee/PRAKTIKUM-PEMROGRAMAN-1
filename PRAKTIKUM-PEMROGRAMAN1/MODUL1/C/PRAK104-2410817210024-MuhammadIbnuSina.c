#include <stdio.h>

int main(){
int a=400000, b=350000, diskona=a*13/100, diskonb=b*21/100;

printf("Harga sepatu A adalah %d\n",a);
printf("Harga sepatu B adalah %d\n",b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",a=a-diskona);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d",b=b-diskonb);
return 0;
}