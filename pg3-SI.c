#include<stdio.h>

int main(){
    int P;
    float R, n, SI;

    printf("ENTER THE  AMOUNT : ");
    scanf("%d",&P);

    printf("ENTER INTEREST RATE : ");
    scanf("%f",&R);

    printf("ENTER NUMBER OF YEARS : ");
    scanf("%f",&n);

    SI = (P*R*n) / 100;
    printf("SIMPLE INTEREST = %f",SI);

    return 0;
}