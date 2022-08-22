// pg11-evenInArray.c

#include<stdio.h>
int main(){
    int a[30];
    int size, count = 0; // count - to count even numbers
    printf("Enter the size of an arrays : ");
    scanf("%d",&size);

    printf("Enter values of the array : ");
    for(int i = 0; i< size; i++){
        scanf("%d",&a[i]);

        if(a[i]%2 == 0)
            count++;
    }

    printf("Number of even numbers in given array is %d",count);
    return 0;
}