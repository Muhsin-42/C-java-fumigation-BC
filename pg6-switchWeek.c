// pg6-switchWeek.c

#include<stdio.h>

int main(){
    int num;

    printf("ENTER A NUMBER : ");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("SUNDAY");
            break;
        case 2:
            printf("MONDAY");
            break;
        case 3:
            printf("TUESDAY");
            break;
        case 4:
            printf("WEDNESDAY");
            break;
        case 5:
            printf("THURSDAY");
            break;
        case 6:
            printf("FRIDAY");
            break;
        case 7:
            printf("SATURDAY");
            break;
        default:
            printf("INVALID ENTRY");
            break;
    }
}