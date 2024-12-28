#include <stdio.h>

int main(){
    int a=9, b=5, x=8, y=8, sisaab, sisaxy, hasil;
    sisaab = a%b, sisaxy=x%y;

    printf("Variable a bernilai %d\n",a);
    printf("Variable b bernilai %d\n",b);
    printf("Variable x bernilai %d\n",x);
    printf("Variable y bernilai %d\n",y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d",sisaab+sisaxy);
    return 0;
}