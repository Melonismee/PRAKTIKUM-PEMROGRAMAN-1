#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,luas,keliling;

    scanf("%d %d",&a,&c);

    b=sqrt(c*c-a*a);
    keliling=a+b+c;
    luas=0.5*b*a;

    printf("Alas= %d cm\n",b);
    printf("Tinggi= %d cm\n",a);
    printf("Keliling= %d cm\n",keliling);
    printf("Luas= %d cm^2\n",luas);

    int a1,b1,c1,luas1,keliling1;

    scanf("%d",&a1);
    scanf("%d",&c1);

    b1=sqrt(c1*c1-a1*a1);
    keliling1=a1+b1+c1;
    luas1=0.5*b1*a1;

    printf("Alas= %d cm\n",b1);
    printf("Tinggi= %d cm\n",a1);
    printf("Keliling= %d cm\n",keliling1);
    printf("Luas= %d cm^2",luas1);
    return 0;
}