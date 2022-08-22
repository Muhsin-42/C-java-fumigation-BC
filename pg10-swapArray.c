#include<stdio.h>
int main(){
    int a[10],b[10],temp[10];
    int size;
    printf("Enter the size of the arrays : ");
    scanf("%d",&size);

    printf("Enter values of array 1 : ");
    for(int i = 0; i< size; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter values of array 2 : ");
    for(int i = 0; i< size; i++){
        scanf("%d",&b[i]);
    }

    for(int i = 0; i< size; i++)
    {
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }

    printf(" ARRAY 1 : ");
    for(int i = 0; i< size; i++){
        printf(" %d,",a[i]);
    }
    printf("\n ARRAY 2 : ");
    for(int i = 0; i< size; i++){
        printf(" %d,",b[i]);
    }

    return 0;
}